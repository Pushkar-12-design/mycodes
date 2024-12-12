//viratkohli12@PUSHKARPC:~/DOS_2241011160/DOS_Assignment4$ code q2o.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


void fun1(){ 
            fork(); 
            fork(); 
            printf("1\n"); 
            } 
          
             int main() { 
             fun1(); 
             printf("1\n"); 
             return 0; 
             } 