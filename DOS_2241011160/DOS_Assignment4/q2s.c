//viratkohli12@PUSHKARPC:~/DOS_2241011160/DOS_Assignment4$ code q2t.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

 int main( ) 
          { 
           if(fork() == 0) 
           if(fork()) 
           printf("1\n"); 
           return 0; 
          } 