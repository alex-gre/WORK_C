/*-------File Main.c------*/
/*******************************************/
/*          WORK "C" Collection            */
/*           education  src                */
/*******************************************/
#include<stdio.h>
#include<conio.h> //for vstudio or borland c
int main(void){
   int i;
   printf("ASCII code \t ASCII - symbol\n");  
   printf("--------------------------------\n");
   for(i=33;i<55;i++){
     printf("%d\t\t%c\n",i,i);
   }
  system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}
