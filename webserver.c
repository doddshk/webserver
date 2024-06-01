#include <sys/socket.h>
#include <stdio.h>

int main(){
  int s= socket(AF_INET, SOCK_STREAM, 0);
  struct sockaddr_in addr = {
    AF_INET,
    0x901f,
    0
  };
  bind(s,&addr, sizeof(addr));

  listen(s, 10);

  int client_fd = accept(s, 0,0);

  char buffer[256] = {0};
  recv(clientfd, buffer, 256, 0);

  //GET /file.html ....

  char* f = buffer + 5;

}
