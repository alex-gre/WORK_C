/*-------File Main.c------*/
/*******************************************/
/*          WORK "C" Collection            */
/*           education  src                */
/*******************************************/
#include<stdio.h>
//#include<conio.h> //for vstudio or borland c
void MyPrint(int M){
 printf("\n\n---------------");
 printf("\n---------------");
 printf("\nParameter is \n"
        " equal to %d",M);
 printf("\n---------------");
 printf("\n---------------\n");

}
int main(void){
  MyPrint(7);
  MyPrint(5);  
  system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}
