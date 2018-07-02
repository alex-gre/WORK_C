/*-------File Main.c------*/
#include<stdio.h>
//#include<conio.h> //for vstudio or borland c
int main(void){
  int i,sum;
  sum=0;
  for(i=1;i<=100;i++){
    
    sum=sum+i*i;
    printf("\nfor {%d} sum = %d ",i,sum);
  }
  system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}
