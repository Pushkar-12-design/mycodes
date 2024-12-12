#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        // Fork failed
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("Child: PID = %d\n", getpid());
        while (1) {
            // Infinite loop
        }
    } else {
        // Parent process
        printf("Parent: PID = %d\n", getpid());
        wait(NULL); // Wait for the child process to complete
    }

    return 0;
}
