/* к книге Брюс  Моли unix/linux теория и практика программирования
who2.c - вторая who 
 выполнить open, прочитать файл UTMP и показать результаты 
 подавляет пустые записи и правильно формирует время
 доп. $> man utmp */

 #include <stdio.h>
 #include <utmp.h>
 #include <fcntl.h>
 #include <unistd.h>
 #include <time.h>
/*
#define SHOWHOST
*/
void show_time(long);
 void show_info(struct utmp *);
 int main(){
            struct utmp utbuf; // сюда читается информация
            int utmpfd;        // чтение происходит из этого дескриптора
            
            if((utmpfd=open(UTMP_FILE,O_RDONLY))==-1){
                perror(UTMP_FILE);
                exit(1);
            }     

            while(read(utmpfd,&utbuf,sizeof(utbuf))==sizeof(utbuf))
                        show_info(&utbuf);
            close(utmpfd);     
    return 0;
 }

 void show_info(struct utmp *utbufp){

    if (utbufp->ut_type != USER_PROCESS)
      return ;
    printf("%-8.8s",utbufp->ut_name);
    printf(" ");
    printf("%-8.8s",utbufp->ut_line);
    printf(" ");
    show_time(utbufp->ut_time);

#ifdef SHOWHOST
    if (utbufp->ut_host[0] != '\0')
       printf("(%s)",utbufp->ut_host);
#endif
  printf("\n");    
}


/*----------------------------------------------------------*/
/* отображает время в формате, удобном для восприятия */
void show_time(long timeval){

     char *cp;
     cp = ctime(&timeval);
     printf("%12.12s",cp+4);

}