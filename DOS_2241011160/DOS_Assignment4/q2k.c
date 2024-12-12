//viratkohli12@PUSHKARPC:~/DOS_2241011160/DOS_Assignment4$ code q2l.c


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main( ) 
       { 
        pid_t c1; 
        int n=10;  
        c1=fork( ); 
        if(c1==0) 
        { 
               printf(" Child\n"); 
               n=20; 
               printf("n=%d \n",n);  
         } 
         else 
        { 
                wait(NULL); 
                printf("Parent\n"); 
                printf("n=%d \n",n); 
          }  
           return 0; 
        } 