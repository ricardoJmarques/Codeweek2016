#include<stdio.h>
int main(){char a;while((a=getchar())!=EOF)if(a!=' ')putchar(a!='\n'?a+2:a);return 0;}
