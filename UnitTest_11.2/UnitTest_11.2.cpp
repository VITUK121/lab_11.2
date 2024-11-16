#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_11.2/lab_11.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest112
{
	TEST_CLASS(UnitTest112)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(3,parseFile("test.txt"));
		}
	};
}
