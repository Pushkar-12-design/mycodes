//viratkohli12@PUSHKARPC:~/DOS_2241011160/DOS_Assignment4$ code q1a.c

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        
        printf("Child: PID = %d\n", getpid());
        while (1) {
            
        }
    } else {
        
        printf("Parent: PID = %d\n", getpid());
        while (1) {
        
        }
    }

    return 0;
}
