#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab10.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101
{
	TEST_CLASS(UnitTest101)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = ProcessTXT("../t.txt");
			Assert::AreEqual(t, 8);
		}
	};
}
