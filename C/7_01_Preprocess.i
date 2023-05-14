# 0 "C:\\Users\\iseoh\\OneDrive\\Document\\git\\C\\C-Example\\C\\6_09a_Preprocess.cpp"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "C:\\Users\\iseoh\\OneDrive\\Document\\git\\C\\C-Example\\C\\6_09a_Preprocess.cpp"
# 16 "C:\\Users\\iseoh\\OneDrive\\Document\\git\\C\\C-Example\\C\\6_09a_Preprocess.cpp"
int main()
{
 printf("LOG(%d)\t: %s",18, "#define을 이용한 출력\n");
 printf("ABC\t: %d\n", 10);
 printf("XXX(3)\t: %d\n", 3 +1);
 printf("MIN(3,4): %d\n", (3>4?4:3));
 printf("MIN(5,4): %d\n\n", (5>4?4:5));

 const int NeverChange = 1;

 printf("LOG(%d)\t: %s",26, "Const를 이용한 출력\n");
 printf("Never\t: %d\n", NeverChange);
 printf("NeverChange" " = %d\n", NeverChange);

 int a[10];
 for (int i = 0; i < 10; i++) {
  a[i] = i;

  printf("a" "[%d] = %d\n", i, a[i]);
 }
}
