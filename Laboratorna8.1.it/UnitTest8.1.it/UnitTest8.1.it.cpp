#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna8.1.it/Laboratorna8.1.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81it
{
	TEST_CLASS(UnitTest81it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str1[] = "Abc + dfg - klm = n o u";
			char str2[] = "No special characters ";
			char str3[] = "++--==";
			char str4[] = "";

			Assert::AreEqual(3, Count(str1));
			Assert::AreEqual(0, Count(str2));
			Assert::AreEqual(6, Count(str3));
			Assert::AreEqual(0, Count(str4));
		}
	};
}
