#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// * 비트연산 *
// 모든 저장공간은 1개 이상의 비트를 가지고 있습니다.
// 모든 비트는 0 또는 1을 가지고 있습니다.
// AND(&), OR(|), XOR(^)연산의 결과에 따라서 비트 연산을 할 수 있습니다.
// 단, 주의할 점은 &&는 논리연산, &는 비트연산이라는 점입니다.
// Truth Table은 다음과 같습니다.
// 
//  AND |  A  &  B		 OR  |  A  |  B		 XOR |  A  |  B		 NOT |  A
// -----------------	-----------------	-----------------	-----------
//  0   |  0  &  0		 0   |  0  |  0		 0   |  0  |  0		 1   |  0
//  0   |  0  &  1		 1   |  0  |  1		 1   |  0  |  1		 0   |  1
//  0   |  1  &  0		 1   |  1  |  0		 1   |  1  |  0
//  1   |  1  &  1		 1   |  1  |  1		 0   |  1  |  1
//
// 주의 할 점은 비교연산에서 NOT은 !를 썼지만, 비트연산에서는 ~를 사용한다는 점입니다.

int main()
{
	int i = 0x0F;
	int j = 0x15;

	printf("i AND j = %02X\n", i & j);
	printf("i OR j  = %02X\n", i | j);
	printf("i XOR j = %02X\n", i ^ j);
	printf("NOT i   = %02X\n", ~i);
	printf("NOT i   = %02X\n", ~i & 0xFF);
	
}

/*
실습과제 1 :
	로봇을 제어하려고 합니다.
	최상위 3비트는 의미가 없고, 이후는 비트에 따라서, 엄지, 검지, 중지, 약지, 새끼 손까락을 의미합니다.
	예를 들어, x x x 0 1 1 0 0 0 은 가위를 의미합니다.

	현재 손가락에서 중지 손가락만 접으려면 어떻게 할 수 있을까요?

	현재 손가락에서 새끼 손가락을 펴려면 어떻게 할 수 있나요?

실습과제 2 :
	현재 손가락 모양은 어떻게 생겼는지 알 수 없습니다.
		srand(time(0));
		int k = rand()&0x001F;
		printf("%02X", k);

	어떤 손가락 모양이든 엄지 손가락을 접고 있도록 바꾸어 줍니다.

	어떤 손가락 모양이든 새끼 손가락을 펴고 있습니다.

실습과제 3 :
	우리집은 5명이 인터넷을 쓰고 있습니다.
	서로에게 메시지를 보낼 때는 외부로 메시지가 나가지 않고,
	오로지 인터넷을 검색할 때만 외부로 메시지가 나가도록 설정하고 싶습니다.

실습과제 4 :
	상대방이 어떤 문자을 암호를 걸어서 보냈습니다.
	상대방이 보낸 문자 p를 (=plain text;평문)를 우리들만의 암호 k(key)로 xor을 하고,
	암호문 c에(=cyper text;암호문) 저장하세요.
	암호를 k로 xor하여 원래 문장이 되는 것을 확인하세요.

	and, or로도 암호를 만들 수 있을까요?
*/