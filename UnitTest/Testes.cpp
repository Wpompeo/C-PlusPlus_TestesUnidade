#include "Calc.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testes
{
	TEST_CLASS(Soma)
	{
	public:

		TEST_METHOD(Zero)
		{
			Assert::IsTrue(soma(0, 0) == 0);
		}

		TEST_METHOD(Básico)
		{
			Assert::IsTrue(soma(2, 5) == 7);
			Assert::IsTrue(soma(-2, 5) == 3);
		}

		TEST_METHOD(Associativo)
		{
			Assert::AreEqual(soma(2, 5), soma(5, 2));
		}
	};

	TEST_CLASS(Multiplicação)
	{
	public:

		TEST_METHOD(Zero)
		{
			Assert::IsTrue(mult(0, 0) == 0);
		}

		TEST_METHOD(Básico)
		{
			Assert::IsTrue(mult(3, 4) == 12);
			Assert::IsTrue(mult(-2, 5) == -10);
		}

		TEST_METHOD(Associativo)
		{
			Assert::AreEqual(mult(2, 5), mult(5, 2));
		}
	};	

};

	