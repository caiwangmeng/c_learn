#include<stdio.h>
#include<winsock.h>

int main(){
    char Sendbuf[100];
    char Receivebuf[100];
    int SendLen;
    int ReceiveLen;

    SOCKET socket_server;
    SOCKET socket_receive;
    SOCKADDR_IN Server_add;
    SOCKADDR_IN Client_add;

    WORD wVersionRequested;
    WSADATA wsaData;
    int error;

    wVersionRequested = MAKEWORD(2, 2);
    error = WSAStartup(wVersionRequested, &wsaData);
    if (error != 0){
        printf("init socket fail!");
        return 0;
    }
    if (LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 2){
        WSACleanup();
        return 0;
    }

    Server_add.sin_family = AF_INET;
    Server_add.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
    Server_add.sin_port = htons(6000);

    socket_server = socket(AF_INET, SOCK_STREAM, 0);

    if (bind(socket_server, (SOCKADDR*)&Server_add, sizeof(SOCKADDR)) == SOCKET_ERROR){
        printf("bind error!");
        return 0;
    }
    if (listen(socket_server, 5) < 0){
        printf("listen error!");
    }

    int Length = sizeof(SOCKADDR);
    socket_receive = accept(socket_server, (SOCKADDR*)&Client_add, &Length);
    if (socket_receive == SOCKET_ERROR){
        printf("accept error!");
        return 0;
    }
    while (1){
        ReceiveLen = recv(socket_receive, Receivebuf, 100, 0);
        if (ReceiveLen<0){
            printf("receive error!\nexit!\n");
            break;
        }else{
            printf("Client say: %s\n",Receivebuf);
        }

        printf("Enter message: ");
        scanf("%s",Sendbuf);
        SendLen = send(socket_receive, Sendbuf, 100, 0);
        if (SendLen < 0){
            printf("send error!\n");
        }
    }
    closesocket(socket_receive);
    closesocket(socket_server);
    WSACleanup();
    return 0;
}