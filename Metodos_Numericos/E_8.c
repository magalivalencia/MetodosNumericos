#include <stdio.h>
#include <stdlib.h>
int main(){
    int x=15;
    int y=10;
    int z=++x*y--;
    printf("x:%d\n",x);
    printf("y:%d\n",y);
    printf("z:%d\n",z);
    return 0;
}