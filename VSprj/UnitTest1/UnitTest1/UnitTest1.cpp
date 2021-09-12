#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern int TrueOracle[40][2];
extern int SamplingOracle[9][2];
extern int BorderOracle[8][2];
extern int WrongOracle[8][2];

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
		public:
		TEST_METHOD(Ture_Oracle)	// 전체 검사
		{
			for (int i = 0; i < sizeof(TrueOracle) / sizeof(int[2]); i++) {
				int r = tuneOnAt3to15V(TrueOracle[i][0]);
				Assert::AreEqual(r, TrueOracle[i][1]);

			}
		}

		TEST_METHOD(Sampling_Oracle)	//셈플링 검사
		{
			for (int i = 0; i < sizeof(SamplingOracle) / sizeof(int[2]); i++) {
				int r = tuneOnAt3to15V(SamplingOracle[i][0]);
				Assert::AreEqual(r, SamplingOracle[i][1]);

			}
		}

		TEST_METHOD(Border_Oracle)	// 경계값 검사
		{
			for (int i = 0; i < sizeof(BorderOracle) / sizeof(int[2]); i++) {
				int r = tuneOnAt3to15V(BorderOracle[i][0]);
				Assert::AreEqual(r, BorderOracle[i][1]);
			}
		}

		TEST_METHOD(Wrong_Oracle)	// 잘못된 셈플, 잘못된 설계
		{
			for (int i = 0; i < sizeof(WrongOracle) / sizeof(int[2]); i++) {
				int r = tuneOnAt3to15V(WrongOracle[i][0]);
				Assert::AreEqual(r, WrongOracle[i][1]);
			}
		}
	};
}

int TrueOracle[40][2] = {
	{-10,-1},
	{-9,-1},
	{-8,-1},
	{-7,-1},
	{-6,-1},
	{-5,-1},
	{-4,-1},
	{-3,-1},
	{-2,-1},
	{-1,-1},
	{0,-1},
	{1,0},
	{2,0},
	{3,0},
	{4,1},
	{5,1},
	{6,1},
	{7,1},
	{8,1},
	{9,1},
	{10,1},
	{11,1},
	{12,1},
	{13,1},
	{14,1},
	{15,0},
	{16,0},
	{17,0},
	{18,0},
	{19,0},
	{20,-1},
	{21,-1},
	{22,-1},
	{23,-1},
	{24,-1},
	{25,-1},
	{26,-1},
	{27,-1},
	{28,-1},
	{29,-1}
};

int SamplingOracle[9][2] = {
	{-10,-1},
	{-5,-1},
	{0,-1},
	{5,1},
	{10,1},
	{15,0},
	{20,-1},
	{25,-1},
	{28,-1},
};

int BorderOracle[8][2] = {
	{0,-1},
	{1,0},
	{3,0},
	{4,1},
	{14,1},
	{15,0},
	{19,0},
	{20,-1},
};

int WrongOracle[8][2] = {
	{0,-1},
	{1,0},
	{3,0},
	{4,10},	// 잘못된 데이터 입력
	{14,1},
	{15,0},
	{19,0},
	{20,-1},
};