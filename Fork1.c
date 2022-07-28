#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main ()
{
    //   printf("hello");
    //   fflush(stdout);
    fork();
    fork();
    printf("hi");
    return 0;
}
