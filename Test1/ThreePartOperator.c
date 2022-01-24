//三元运算符?:
#include<windows.h>
#include<stdio.h>
#include<time.h>
int main(){
    int a = 1;
    int b = 1;
    srand((unsigned)time(NULL));
    int c = rand();
    c & 1 ? a++ : b++; //if rand() returns an odd, a++; else, b++
    printf("c is an %s, so:\na = %d, b = %d\n",c&1?"odd":"even", a,b);
    system("pause");
    return 0;
}