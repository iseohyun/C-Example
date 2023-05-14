/*
**** Func_inc.h파일과, Func_inc.cpp파일을 해당파일에 복사하세요.
* 
// * include *
// 외부 파일을 불러올 때, 쓰이는 명령어 입니다.
// 본격적으로 컴파일을 하기 전에 실행하는 명령어이기 때문에,
// pre-Process라고 합니다.
// 꺽쇠(<>)로 감싸있는 파일은, 이미 컴파일러에 등록된 라이브러리에서 불러올때 사용됩니다.
// 따옴표("")는 실행되는 파일의 위치를 기준으로 파일을 불러옵니다.
// 만약 절대경로를 가지고 있다면, 절대경로도 이용할 수 있습니다.
// 문법은 아래와 같습니다 :
//		#include "파일경로\파일명.h"
// 주의 : c의 경우, 추가 라이브러리 등록 작업이 필요합니다.
//		cpp의 경우 헤더(.h)를 포함하면, 자동으로 cpp를 검색하도록 합니다.

// 외부 터미널에서 수행하려고 할 때,
// gcc -o 4_08_Include 4_08_Include.cpp include.cpp

// Path환경설정이 적용되지 않았을 때,
// 'C:\Program Files\mingw64\bin\gcc.exe' -o 4_08_Include 4_08_Include.cpp include.cpp

// 또는 task.json에 빌드 인자에 "${fileDirname}\\include.cpp"를 전달해주어야 합니다.
*/

#include <stdio.h>
#include "include.h"

int main() {
    OuterFunc();
}

/*
실습과제 :
    include.cpp 파일에 함수(max)를 만듭니다.
    인자를 2개 받아서 큰 수를 출력하는 기능을 합니다.

실습과제 2:
    include2.cpp 파일을 새로 만듦니다.
    min함수를 만들어서, 2개 인자 중 작은 수를 출력하는 기능을 합니다.
*/