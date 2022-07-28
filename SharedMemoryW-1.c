#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
  // ftok to generate unique key
  key_t key = ftok("shmfile",65);

  //returns an identifier for the shared memory segment
  int shmid = shmget(key,1024,0666|IPC_CREAT);

  //Before you can use a shared memory segment, you have to attach yourself to it using shmat().
  //shmid is shared memory id.
  //shmaddr specifies specific address to use but we should set
  //it to zero and OS will automatically choose the address.
  char *str = (char*) shmat(shmid,(void*)0,0);

  printf("Write Data : ");
  scanf("%s", str);

  printf("Data written in memory: %s\n",str);

  //detach from shared memory
  shmdt(str);

  return 0;
}
