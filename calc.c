#include<stdio.h>
void main(void){
  float a,b,res;
  char op;
  printf("input <first digit><operation><second digit>\n");
  printf("\n[>>> ");
  scanf("%f%c%f",&a,&op,&b);

  switch (op) {
  case '-': res=a-b; printf("%4.2f%c%4.2f=%4.2f\n",a,op,b,res); break;
  case '+': res=a+b; printf("%4.2f%c%4.2f=%4.2f\n",a,op,b,res); break;
  case '*': res=a*b; printf("%4.2f%c%4.2f=%4.2f\n",a,op,b,res); break;
  case '/': res=a/b; printf("%4.2f%c%4.2f=%4.2f\n",a,op,b,res); break;

  default: printf("input error!!!\n");
              }

}
