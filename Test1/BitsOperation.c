#include<stdio.h>
#include<windows.h>
int main(){
    unsigned int a = 0x1;      //0001
    printf("size of a is: %d\n", sizeof(a));
    printf("a is %d\na = ~a;\n", a);
    a = ~a;
    printf("a is %d\na++;\n", a++);
    printf("a is %d\n;", a);
    system("pause");
    return 0;
}