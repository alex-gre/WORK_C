/*-------File Main.c------*/
#include<stdio.h>
#include<math.h>
//#include<conio.h> //for vstudio or borland c
int main(void){
  double A,B,C,D,x1,x2;
  printf("Enter A,B and C: ");
  scanf("%Lf%Lf%Lf",&A,&B,&C);
  D=B*B-4*A*C;
  if(D>=0 && A!=0){
   x1=(-B+sqrt(D))/(2*A);
   x2=(-B-sqrt(D))/(2*A);
   printf("\nx1=%Lf x2=%Lf ",x1,x2);
    
  }
    else{
    
      printf("\nCan't solve equation");
     
    }
  system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}