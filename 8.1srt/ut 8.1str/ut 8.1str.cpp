#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1srt/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ut81str
{
	TEST_CLASS(ut81str)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[] = "nobel";
			int l = count(s);
			Assert::AreEqual(0, l);

		}
	};
}
