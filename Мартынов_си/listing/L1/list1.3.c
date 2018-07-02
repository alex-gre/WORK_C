#include<stdio.h>
#include<math.h>
//#include<conio.h> //for vstudio or borland c
int main(void){
  double res,x1,x2;
  x1=4.5; x2=5.6; 
  res=sqrt(x1*x1+x2*x2);
  printf("Root is %Lf ",res);
  system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}
