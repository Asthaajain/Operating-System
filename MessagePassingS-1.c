// C Program for Message Queue (Writer Process)
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
//#include <types.h>

// structure for message queue
struct mesg_buffer {
    long mesg_type;
    int a; //store the data
} message;

int main()
{
    key_t key;
    int msgid, i;

    // ftok to generate unique key
    key = ftok("vinay", 100);

    // msgget creates a message queue and returns identifier
    msgid = msgget(key, 0666 | IPC_CREAT);
    message.mesg_type = 1;

    printf("Enter Data 1: ");
    scanf("%d", &message.a);

   // msgsnd to send message 
    msgsnd(msgid, &message, sizeof(message), 0);

    // display the message
    //printf("Data send is : %s \n", message.mesg_text);

    return 0;
}
