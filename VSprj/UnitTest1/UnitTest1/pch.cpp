// pch.cpp: 미리 컴파일된 헤더에 해당하는 소스 파일

#include "pch.h"
// 미리 컴파일된 헤더를 사용하는 경우 컴파일이 성공하려면 이 소스 파일이 필요합니다.

// 입력신호가 4 ~ 14 사이면 On(1)
// 입력신호가 1 ~ 3 또는 15 ~ 19 Off(0)
// 그 밖의 신호 Error(-1)

int tuneOnAt3to15V(int voltage) {
	if ((voltage > 3) && (voltage < 15)) {
		return 1;
	}
	else if ((voltage > 0) && (voltage < 20)) {
		return 0;
	}
	else {
		return -1;
	}
}