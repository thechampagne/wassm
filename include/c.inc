extrn printf
extrn dprintf
extrn atoi
extrn socket
extrn htons
extrn inet_aton
extrn inet_ntoa
extrn bind
extrn close
extrn listen
extrn accept
extrn strlen
extrn strcmp
extrn read
extrn isalpha
extrn isalnum
extrn strchr
extrn signal
extrn exit
extrn setsockopt
extrn open
extrn lseek
extrn sendfile
extrn usleep

struc sockaddr_in m0, m1, m2, m3
{
.sin_family dw m0
.sin_port dw m1
.sin_addr dd m2
.sin_zero dq m3
}

virtual at 0
  sockaddr_in sockaddr_in 0, 0, 0, 0
  sizeof.sockaddr_in = $ - sockaddr_in
end virtual

define AF_INET 2
define SOCK_STREAM 1
define SOCK_NONBLOCK 2048
define SOL_SOCKET 1
define SO_REUSEADDR 2

define SIGINT 2

define O_RDONLY 0

define SEEK_SET 0
define SEEK_CUR 1
define SEEK_END 2
