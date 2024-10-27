#include <stdio.h>
 /* подсчет символов! */
#define STOP '*'
int main(){
	
	char ch;
	int count = 0;  /* инициализация счетчика символов 0 */
	while ((ch = getchar()) != STOP) {
	   putchar (ch);
	   count++;       /* прибавить 1 к счетчику */
    }
    printf (" \n Всего было прочитано %d символов \n " , count);
return 0;
}
