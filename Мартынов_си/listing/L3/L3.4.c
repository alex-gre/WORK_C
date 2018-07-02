/*-------File Main.c------*/
/*******************************************/
/*          WORK "C" Collection            */
/*           education  src                */
/*******************************************/
#include<stdio.h>
//#include<conio.h> //for vstudio or borland c
int main(void){
  int i;
  int ar[4];
  
  //array ar contains 4 elements
  ar[0] = 7;
  ar[1] = 4;
  ar[2] = 2;
  ar[3] = 1;
  
  for(i=0;i<=5;i++){
    printf("ar[%d] = %d\n",i,ar[i]);
    if (i == 5) printf("array overlov!");
  }
  system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}
