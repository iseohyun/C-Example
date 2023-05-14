// * 파일 입출력 *
// 파일입출력모드는 다음과 같습니다.
//	1. r (read mode)	: 읽기 전용 모드
//	2. w (write mode)	: 쓰기 전용 모드
//	3. a (append mode)	: 추가 모드
//
//	1. t (text mode)	: 해당 파일의 데이터를 텍스트 파일로 인식하고 입출력함.
//	2. b (binary mode)	: 해당 파일의 데이터를 바이너리 파일로 인식하고 입출력함.
//
//	1. x (exclusive mode) : 열고자 하는 파일이 이미 존재하면 파일 개방에 실패함.
//	2. + (update mode)	  : 파일을 읽을 수도 있고 쓸 수도 있는 모드
//
// 위의 모드를 조합해서 사용할 수 있습니다.
//	> wx, rb, wb, wbx, ab, r+, w+, w+x, a+, r+b, rb+, a+b, ab+, w+bx, wb+x

#include <stdio.h>

int main()
{
    // FILE* pFile = fopen("example.txt", "a+");
    FILE *pFile;
    char Buf[100];

    // 파일을 엽니다.
    fopen_s(&pFile, "log.txt", "a+");

    if (pFile == NULL)
    {
        puts("파일을 열 수가 없습니다!");
        return false;
    }
    else
    {
        puts("파일을 성공적으로 열었습니다!");
    }

    // 파일을 읽어옵니다.
    while (fgets(Buf, sizeof(Buf), pFile) != NULL)
    {
        printf("%s", Buf);
    }

    // pFile에 추가할 문구를 Buf에 작성합니다.
    sprintf_s(Buf, sizeof(Buf), "%s %s(%d): %s\n", __DATE__, __TIME__, __LINE__, __FILE__);
    printf("추가 문구 : %s\n", Buf);

    fputs(Buf, pFile); // 문구를 추가합니다.

    // 파일을 닫습니다.
    if (fclose(pFile) != 0)
    {
        puts("파일을 닫을 수가 없습니다!");
        return false;
    }
    else
    {
        puts("파일을 성공적으로 닫았습니다!");
    }
}