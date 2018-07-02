/*-------File Main.c------*/
#include<stdio.h>
#include<math.h>
//#include<conio.h> //for vstudio or borland c
int main(void){
  double a,b,x,h,S1,S2,S; 
  int N;
  printf("\nПрограмма вычисления площади под кривой графика функции y=sin(x)\n");
  printf("Enter a,b and N: ");
  scanf("%Lf %Lf %d ",&a,&b,&N);
  
  /*----------------Trapezium algrithm:-------------*/
  h=(b-a)/N;
  S1=(sin(a) + sin(b))/2;
  S2=0;
  for(x=a+h;x<b; x=x+h){
  
    S2=S2+sin(x);
  }
  S=h*(S1+S2);
  
  /*------------------------------------------------*/
  
  printf("\nFor a=%Lf, b=%Lf, N=%d, S=%Lf ",a,b,N,S);
  //system("pause");
 //getch(); //for vstudio  or borland c
  return 0;
}
