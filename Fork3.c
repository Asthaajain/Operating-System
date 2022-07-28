#include <stdio.h>
#include <unistd.h>

int main()
{

    //     if (fork()||fork())
    //     {
    //       printf("hi");
    //     }
    int p;
    p=fork();

    if (p>0)
    {
        fork();
        printf("hi");
    }
    printf("bye");
    return 0;
}
