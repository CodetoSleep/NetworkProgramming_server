CC = gcc
CFLAGS = -Wall -Wextra
LIBS = -lpthread -lsqlite3 -lssl -lcrypto

all: server client

server: server.c queue.c user.c database.c server.h user.h database.h
	$(CC) $(CFLAGS) -o server server.c queue.c user.c database.c $(LIBS)

client: client.c 
	$(CC) $(CFLAGS) -o client client.c $(LIBS)

clean:
	rm -f server client
