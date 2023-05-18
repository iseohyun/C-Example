/*
 * 동적 할당(new, delete)
 * 
 * 동적할당은 C에서 malloc함수를 사용합니다.
 * CPP에서는 new 예약어를 통해 include없이 생성할 수 있습니다.
 * 반드시, delete[]로 해제 할 수 있도록 합시다.
 * 
 * 코드 시나리오 :
 *   사용자 입력을 받고,
 *   동적할당을 이용하여, 사용자가 입력한 만큼'만' 할당받아 메모리를 사용합니다.
 * 
 */ 

#include <iostream>
#include <string>
using namespace std;

int main()
{

    char str[100]; // 사용자는 총 100글자 까지 입력할 수 있습니다.
    int len = 0; // 사용자가 입력한 글자수를 저장합니다.

    // 사용자 입력을 받습니다.
    cout << "input: ";
    cin >> str;
    for (int i = 0; i < 100;i++) { // 몇 글자를 입력한지 찾습니다.
        if (str[i] == '\0') { // Null문자를 찾습니다.
            len = i;
            break;
        };
    }

    // 입력 값을 사용자에게 확인시킵니다.
    cout << "> " << str << "(" << len << ")" << endl;

    // 동적 할당을 받습니다.(사용자가 입력한 글자수 만큼'만' 할당)
    char* p = new char[len + 1];
    for (int i = 0; i < len; i++) {
        // 각 문자의 다음 문자를
        p[i] = str[i] + 1;
    }
    p[len] = 0; // null문자를 삽입합니다.

    // 결과를 확인합니다.
    cout << "Result: " << p << endl;

    delete[] p;

    // double pointer의 경우도 동일하게 해제 합니다.
    int* pp = new int;
    delete pp;
}