#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_5.1(c)/Public.h"
#include "../oop_laba_5.1(c)/Public.cpp"
#include "../oop_laba_5.1(c)/Fraction.h"
#include "../oop_laba_5.1(c)/Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest51c
{
	TEST_CLASS(oopUnitTest51c)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Public a(3, 6), b(1, 2);
			Public c = a - b;
			Assert::AreEqual(c.get_a(), 2);
			Assert::AreEqual(c.get_b(), 4);

		}
	};
}
