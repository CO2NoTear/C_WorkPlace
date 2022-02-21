//Something about case
#include<stdio.h>
#include<windows.h>

int main(){
    int a;
    scanf("%d", &a);
    switch (a&1)
    {
    case 1/* constant-expression(can't be a+1 or sth.) */:
        printf("a is an odd.\n");
        break;
    case 0:
        printf("a is an even.\n");
        break;
    default:
        break;
    }
    system("pause");
    return 0;
}