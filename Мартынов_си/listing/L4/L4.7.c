/*-------File Main.c------*/
/*******************************************/
/*          WORK "C" Collection            */
/*           education  src                */
/*******************************************/
#include<stdio.h>
#include<conio.h> //for vstudio or borland c

/*----------Function prototypes---------*/
   void ReversePhrase(char ar[]);
   
   

int main(int argc, char *argv[]){
     
   char myT[] = "Hello, world";
   
   ReversePhrase(myT);
   
   printf("Words in reverse symbol order\n");
   printf("-----------------------------\n");
   printf("%s", myT);
   
  //system("pause");
  getch(); //for vstudio  or borland c
  return 0;
}

/*----------------------------------------*/

void ReversePhrase(char ar[]){
  int i=0, size=0;
  char temp;

  while(ar[i] != 0) i++;
  
  size = i;
  
  for(i= 0; i<size/2; i++){
  
   temp = ar[size-1-i];
   ar[size-1-i] = ar[i];
   ar[i] = temp;
  
  }
}
