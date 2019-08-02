#include<stdio.h>
#include<winsock.h>

int main(){
    char Sendbuf[100];
    char Receivebuf[300];
    int SendLen;
    int ReceiveLen;

    SOCKET socket_send;
    SOCKADDR_IN Server_add;

    WORD wVersionRequested;
    WSADATA wsaData;
    int error;

    wVersionRequested = MAKEWORD(2, 2);
    error = WSAStartup(wVersionRequested, &wsaData);
    if (error!=0){
        printf("init socket fail！");
        return 0;
    }
    if (LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 2){
        WSACleanup();
        return 0;
    }

    Server_add.sin_family=AF_INET;
    // "47.92.220.76"
    Server_add.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
    Server_add.sin_port = htons(6000);
    socket_send = socket(AF_INET, SOCK_STREAM, 0);

    if (connect(socket_send, (SOCKADDR*)&Server_add, sizeof(SOCKADDR)) == SOCKET_ERROR) {
        printf("connect error!");
        return 0;
    }

    while (1){
        printf("Enter message: ");
        scanf("%s", Sendbuf);
//        strcpy(Sendbuf, "GET /api3/hello HTTP/1.1\r\nHost: www.baidu.com\r\n\r\n");
        SendLen = send(socket_send, Sendbuf, 100, 0);
        if (SendLen < 0){
            printf("send error!\n");
        }

        ReceiveLen = recv(socket_send, Receivebuf, 300, 0);
        if (ReceiveLen < 0){
            printf("receive fail!\nexit!\n");
            break;
        } else{
            printf("Server say: \n%s\n", Receivebuf);
        }
//        return 0;
    }
    closesocket(socket_send);
    WSACleanup();
    return 0;
}