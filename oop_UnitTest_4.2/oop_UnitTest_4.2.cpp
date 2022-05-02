#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_4.2/Kub.h"
#include "../oop_laba_4.2/Kub.cpp"
#include "../oop_laba_4.2/Abstract.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest42
{
	TEST_CLASS(oopUnitTest42)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Kub a(3);
			Assert::AreEqual(a.SurfaceArea(), 54.);
		}
	};
}
