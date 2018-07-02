#include<stdio.h>
#include<math.h>
//#include<conio.h> //for vstudio or borland c
int main(void){
  double res,x1;
  x1=-4.5;
  if(x1>=0){
    res=sqrt(x1);
    printf("Square root is %Lf ",res);
  
  }
  system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}
