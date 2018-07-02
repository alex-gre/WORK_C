/*-------File Main.c------*/
/*******************************************/
/*          WORK "C" Collection            */
/*           education  src                */
/*******************************************/
#include<stdio.h>
//#include<conio.h> //for vstudio or borland c
int main(void){
  char str1[128] = "Los Angeles"; 
  char str2[] = "Moskow";
  int len;
  
  len = strlen(str1);
  printf("Before concatenation\n"
         "str1 --> %s len = %d\n",str1,len);
         
         /*------ Concatenation -----*/
  strcat(str1," "); strcat(str1,str2);
  
  len = strlen(str1);
  
  printf("\nAfter concatenation: \n"
         "str1 --> %s len = %d\n",str1,len);       
  system("pause");
  //getch(); //for vstudio  or borland c
  return 0;
}
