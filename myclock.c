#include <stdio.h>
#include <time.h>

int main(){

  time_t nt = time(NULL); //func time() set time

  printf("%s",ctime(&nt)); // ctime convert sec to time 
                           // Unix epoch 00.00.00 1 Jan 1970 Year
    return 0;
}