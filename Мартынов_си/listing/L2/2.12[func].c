/*-------File Main.c------*/
/*******************************************/
/*          WORK "C" Collection            */
/*           education  src                */
/*******************************************/
#include<stdio.h>
//#include<conio.h> //for vstudio or borland c

/*----------Global variables-------------*/
int M,N;
void MySwapMN(void){
    int temp;
    temp = M;
    M = N;
    N = temp;
  }

int main(void){
  
  M = 1; N = 5;
  
  MySwapMN();
  
  printf("M = %d N = %d\n",M,N);
  system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}

