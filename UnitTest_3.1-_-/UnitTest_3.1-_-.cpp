#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.1/Fraction.h"
#include "../Lab_3.1/Fraction.cpp"
#include "../Lab_3.1/Pair.h"
#include "../Lab_3.1/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest31
{
	TEST_CLASS(UnitTest31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction m1(6, 0), m2(2, 0);

			int D = m1.GetFirst() + m2.GetFirst();
			Assert::AreEqual(D, 8);
		}
	};
}
