//viratkohli12@PUSHKARPC:~/DOS_2241011160/DOS_Assignment4$ code q2o.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

 int main( ) 
          { 
           int i=5; 
           if(fork()==0) 
           i=i+1; 
           else 
           i=i-1; 
           printf("%d",i); 
           return 0; 
          } 