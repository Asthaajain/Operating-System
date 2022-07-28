// C Program for Message Queue (Reader Process)
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

// structure for message queue
struct mesg_buffer {
    long mesg_type;
    int a;
} message;

int main()
{
    key_t key;
    int msgid;

  // ftok to generate unique key
    key = ftok("vinay", 100);

    // msgget creates a message queue and returns identifier
    msgid = msgget(key, 0666 | IPC_CREAT);

   // msgrcv to receive message
    msgrcv(msgid, &message, sizeof(message), 1, 0);

    // display the message 
    printf("Data read is : %d \n", message.a);

    return 0; 

}
