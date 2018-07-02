#include<stdio.h>
//#include<conio.h> //for vstudio or borland c
int main(void){
  double res,x1,x2,x3;
  x1=4.5; x2=5.6; x3=7.8;
  res=(x1+x2+x3)/3;
  
  printf("Result is %Lf ",res);
  system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}