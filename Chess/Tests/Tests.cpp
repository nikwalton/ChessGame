#include "pch.h"
#include "CppUnitTest.h"

#include "../Chess/GamePiece.h"
#include "../Chess/GamePiece.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(Tests)
	{
	public:
		
		TEST_METHOD(Test_GamePieceClass)
		{
			GamePiece *test_piece = new GamePiece();

			//test default constructor
			Assert::AreEqual((int)color::kNone, (int)test_piece->GetColor());
			Assert::AreEqual((int)type::kNone, (int)test_piece->GetType());

			//test setters
			test_piece->SetColor(color::kBlack);
			Assert::AreEqual((int)color::kBlack, (int)test_piece->GetColor());

			test_piece->SetType(type::kQueen);
			Assert::AreEqual((int)type::kQueen, (int)test_piece->GetType());
		}
	};
}
