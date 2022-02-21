//Find out the three statements in for(1;2;3){};
#include<stdio.h>
#include<windows.h>

int main(){
    int i;
    for (i = 2; i < 2; i++){
        //We can see clearly that "for" execute statement 1 at the beginning for only once (and it must be executed once).
        //then if statement 2 is "Ture", do the following statements.
        printf("Now still in \"for\", and i = %d\n", i);

        //after all the statement in "for", do the statement 3.
        //until statement 2 is "False", break;
    }
        //Therefore, you will find as long as statement 2 is executed at least once, statement 3 will be the last statement to be executed.
    printf("now out of \"for\", and i = %d\n", i);//This showed how i will finally be. Actually, i will be the val that don't match with stat.2
    system("pause");
    return 0;
}