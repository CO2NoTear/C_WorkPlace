#include<stdio.h>
//Find out the value arrange of char
#include<windows.h>

int main(){
    char c = 127;   //victim
    printf("c is now %d\n", (int)c);
    printf("c+1 is %d\n", ++c);     //Interestingly, if output c+1, it will be an int. So ++c is ok.
    system("pause");                //You'll find the arrange of char in Windows is -128~127
    printf("Here, alert!\a");       //Let's make an alert sound
    system("pause");                //Well, this alert is kind of normal one...
    return 0;
}