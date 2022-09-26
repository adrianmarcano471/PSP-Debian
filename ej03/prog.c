#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc, char const *argv[])
{
    pid_t p;

    p = fork();
    if (p == 0)
    {
        sleep(1);
        printf("Soy el hijo\n");
    }
    else
    {

        printf("Soy papá\n");
    }
    printf("hola soy: %d\n ",getgid());
    return 0;
}
