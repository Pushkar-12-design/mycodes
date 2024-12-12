//viratkohli12@PUSHKARPC:~/DOS_2241011160/DOS_Assignment4$ code q2b.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main( )
{
if(vfork()==0)
{
printf("1");
_exit(0);
}
else
printf("2");
printf("3");
}

