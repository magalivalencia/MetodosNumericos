#include <stdio.h>
#include <string.h>
int main(){
   char cadena [10];
   printf("un int ocupa %d bytes",sizeof(int));
   printf("un char  ocupa %d bytes",sizeof(char));
   printf("un float ocupa %d bytes",sizeof(float));
   printf("un double ocupa %d bytes",sizeof(double));
   printf("un cadena ocupa %d bytes",sizeof(cadena));
  return 0;

}