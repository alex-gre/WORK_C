/*-------main.c------*/
#include<stdio.h>
#include<math.h>
//#include<conio.h> //for vstudio or borland c

/*----------------Trapezium function:-------------*/
double MyTrapezSquare(double a,double b,int N){
  double x,h,S1,S2;
  h=(b-a)/N;
  S1=(sin(a) + sin(b))/2;
  S2=0;
  for(x=a+h;x<b; x=x+h){
  
    S2=S2+sin(x);
  }
    return h*(S1+S2);
 } 
  /*------------------------------------------------*/

int main(void){
  double a,b,S; 
  int N;
  printf("\nПрограмма вычисления площади под кривой графика функции y=sin(x)\n");
  printf("Enter a,b and N: ");
  scanf("%Lf%Lf%d ",&a,&b,&N);
  
      S=MyTrapezSquare(a,b,N);  
  
  printf("\nFor a=%Lf, b=%Lf, N=%d, S=%Lf ",a,b,N,S);
  system("pause");
 //getch(); //for vstudio  or borland c
  return 0;
}
