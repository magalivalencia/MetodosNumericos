#include <stdio.h>
#include <string.h>
int main(){
    int x=17,y;
    int *p;
    p=&x;
    printf("El valor de x es %d",*p);
    y=*p+3;
    printf("El valor de y es %d",y);
return 0;
}