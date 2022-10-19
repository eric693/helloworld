#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/wait.h>

#define PORT 1500 //埠號
#define BACKLOG 5 /*最大監聽數*/

int main()
{
    int sockfd, new_fd;            /*socket控制代碼和建立連線後的控制代碼*/
    struct sockaddr_in my_addr;    /*本方地址資訊結構體，下面有具體的屬性賦值*/
    struct sockaddr_in their_addr; /*對方地址資訊*/
    int sin_size;

    sockfd = socket(AF_INET, SOCK_STREAM, 0); //建立socket
    if (sockfd == -1)
    {
        printf("socket failed:%d", errno);
        return -1;
    }
    my_addr.sin_family = AF_INET;                /*該屬性表示接收本機或其他機器傳輸*/
    my_addr.sin_port = htons(PORT);              /*埠號*/
    my_addr.sin_addr.s_addr = htonl(INADDR_ANY); /*IP，括號內容表示本機IP*/
    bzero(&(my_addr.sin_zero), 8);               /*將其他屬性置0*/
    if (bind(sockfd, (struct sockaddr *)&my_addr, sizeof(struct sockaddr)) < 0)
    { //繫結地址結構體和socket
        printf("bind error");
        return -1;
    }
    listen(sockfd, BACKLOG); //開啟監聽 ，第二個引數是最大監聽數
    while (1)
    {
        sin_size = sizeof(struct sockaddr_in);
        new_fd = accept(sockfd, (struct sockaddr *)&their_addr, &sin_size); //在這裡阻塞知道接收到訊息，引數分別是socket控制代碼，接收到的地址資訊以及大小
        if (new_fd == -1)
        {
            printf("receive failed");
        }
        else
        {
            printf("receive success");
            send(new_fd, "Hello World!", 12, 0); //傳送內容，引數分別是連線控制代碼，內容，大小，其他資訊（設為0即可）
        }
    }
    return 0;
}