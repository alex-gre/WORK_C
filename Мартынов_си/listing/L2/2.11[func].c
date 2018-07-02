/*-------File Main.c------*/
/*******************************************/
/*          WORK "C" Collection            */
/*           education  src                */
/*******************************************/
#include<stdio.h>
//#include<conio.h> //for vstudio or borland c
void MySwap(int M,int N){
    int temp;
    temp = M;
    M = N;
    N = temp;
  }

int main(void){
  
  int x=1;
  int y=5;
  
  MySwap(x,y);
  
  printf("x = %d y = %d\n",x,y);
  system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}

