/*-------File Main.c------*/
/*******************************************/
/*          WORK "C" Collection              */
/*           education  src                */
/*******************************************/
#include<stdio.h>
//#include<conio.h> //for vstudio or borland c
int MySum(int M, int N){
     int i,Sum;
     i=M;
     Sum=0;
     while(i<=N){
     Sum=Sum+i;
     i++;
     }
     return Sum;
  }
int main(void){
  int i,N,Sum;
  i=137;
  N=895; 
  Sum=MySum(i,N);
  Sum=MySum(5,555);
  Sum=MySum(Sum,Sum+1);
  Sum=MySum(N,N+3)+4;
  MySum(11,123);
  
  printf("Sum = %d\n",Sum);
  system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}
