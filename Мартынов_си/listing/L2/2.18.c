/*-------main.c------*/
#include<stdio.h>
#include<math.h>
#include<conio.h> //for vstudio or borland c
// Function prototypes

double MyTrapezSquare(double a,double b,int N);
double TrapezSquare(double a,double b,double eps);
double MyFun(double x);


  /*------------------- MAIN Function -----------------------------*/

int main(void){
  double a;
  double b;
  double eps;
  double S; 
  
  printf("\nПрограмма вычисления площади под кривой графика функции y=sin(x)\n");
  printf("Enter a,b and eps: ");
  scanf("%Lf%Lf%Lf ",&a,&b,&eps);
  
      S=MyTrapezSquare(a,b,eps);  
  
  printf("\nFor a=%Lf, b=%Lf, eps=%d, S=%Lf ",a,b,eps,S);
  system("pause");
 //getch(); //for vstudio  or borland c
  return 0;
}

/*---------------- Trapezium function: -------------*/
double MyTrapezSquare(double a,double b,int N){
  double x,h,S1,S2;
  h=(b-a)/N;
  S1=(MyFun(a) + MyFun(b))/2;
  S2=0;
  for(x=a+h;x<b; x=x+h){
  
    S2=S2+MyFun(x);
  }
    return h*(S1+S2);
 } 