/*-------File Main.c------*/
/*******************************************/
/*          WORK "C" Collection            */
/*           education  src                */
/*******************************************/
#include<stdio.h>
//#include<conio.h> //for vstudio or borland c
#include"MyConstans.h"

int main(void){

  int arr[NUM],i;
    for(i=0;i<NUM;i++){
    arr[i]=i+ADD;
  }
    
      for(i=0;i<NUM;i++){
      printf("%d\n",arr[i]); 
    }
      
  //system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}
