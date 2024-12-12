//viratkohli12@PUSHKARPC:~/DOS_2241011160/DOS_Assignment4$ code q2q.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

   int main( ) 
         { 
          int i=5; 
          if(vfork()==0) 
          {  
                 i=i+1; 
                 _exit(0); 
            } 
            else 
                  i=i-1; 
             fprintf(stderr,"%d",i); 
             return 0; 
             } 