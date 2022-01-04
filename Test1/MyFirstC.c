#include<stdio.h>
#include<math.h>
int main(){
    int a, b;
    
    b = (a = 1, 2, 3);

    printf("a = %d  b = %d\n", a, b);

    return 0;
}