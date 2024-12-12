//viratkohli12@PUSHKARPC:~/DOS_2241011160/DOS_Assignment4$ code q2i.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main( ) 
       { 
         if(fork( )==0) 
         { 
               printf("1"); 
          } 
          else 
          { 
                wait(NULL); 
                printf("2"); 
                printf("3"); 
            } 
            return 0; 
          } 