#include<stdio.h>
//output sth funny like \a \b and \v \r \111 \x3f etc.
#include<windows.h>

int main(){
    char a = '*';
    char vert = '\v';
    for (int i = 1; i <= 10;++i){
        printf("%c", a);
        if(i==5)    //\b just move the cursor back for a unit.(no erasing)
            printf("\b --INSERT-- ");
    }
    putchar('\n');
    for (int i = 1; i <= 10;++i){
        printf("%c", a);
        if(i==5)    //oops, \v seems to have sth wrong.
            printf("\v --INSERT-- ");
    }
    putchar('\n');
    for (int i = 1; i <= 10;++i){
        printf("%c", a);
        if(i==5)    //A Re, zen bu ki e de ru!
            printf("\r --INSERT-- ");
    }
    putchar('\n');
    system("pause");
    return 0;
}