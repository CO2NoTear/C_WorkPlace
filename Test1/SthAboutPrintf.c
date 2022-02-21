#include<stdio.h>
//Sth about dec,octal,hex
#include<windows.h>

int main(){
    int dec = 100;
    int hex = 0x3f;
    int oct = 077;
    printf("dec = %3d = %3d\n", dec, dec);
    printf("hex = %#3x = %3d\n", hex,hex);
    printf("otcal = %#3o = %3d\n", oct, oct);
    system("pause");
    return 0;
}