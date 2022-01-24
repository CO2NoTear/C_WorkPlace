#include<stdio.h>
#include<math.h>
int main(){
    int a, b;
    
    b = (a = 1, 2, 3);          //a comma will return the val of right.
                                //what's more, eqaul is prior to comma.

    printf("a = %d  b = %d\n", a, b);

    return 0;
}