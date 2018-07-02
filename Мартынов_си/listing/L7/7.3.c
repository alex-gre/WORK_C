/*-------File Main.c------*/
/*******************************************/
/*          WORK "C" Collection            */
/*           education  src                */
/*******************************************/
#include<stdio.h>
//#include<conio.h> //for vstudio or borland c
int main(void){

  int arr[5],i;
    for(i=0;i<5;i++){
    arr[i]=i+3;
  }
    
      for(i=0;i<5;i++){
      printf("%d\n",arr[i]); 
    }
      
  //system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}
