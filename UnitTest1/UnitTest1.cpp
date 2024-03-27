#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 3.3C/VectorN.h"
#include "..//OOP Lab 3.3C/VectorN.cpp"
#include "..//OOP Lab 3.3C/Object.h"
#include "..//OOP Lab 3.3C/Object.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			VectorN vec(3);
			Assert::AreEqual(3, vec.getSize());
		}
	};
}
