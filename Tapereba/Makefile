CC = g++
CFLAGS = -O3 -pipe -v -std=c++23 -Wall -Wextra -pedantic -g3 -march=native -mtune=native
LDFLAGS = -static -lstdc++

SRCDIR = src
OBJDIR = obj
BINDIR = bin

CLIENT_SRCS = $(SRCDIR)/cliente.cpp
CLIENT_OBJ = $(OBJDIR)/cliente.o
CLIENT_TARGET = $(BINDIR)/cliente

SERVER_SRCS = $(SRCDIR)/server.cpp
SERVER_OBJ = $(OBJDIR)/server.o
SERVER_TARGET = $(BINDIR)/server

.PHONY: all clean

all: $(CLIENT_TARGET) $(SERVER_TARGET)

$(CLIENT_TARGET): $(CLIENT_OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

$(CLIENT_OBJ): $(CLIENT_SRCS)
	$(CC) $(CFLAGS) -c $< -o $@

$(SERVER_TARGET): $(SERVER_OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

$(SERVER_OBJ): $(SERVER_SRCS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(CLIENT_OBJ) $(SERVER_OBJ) $(CLIENT_TARGET) $(SERVER_TARGET)

$(CLIENT_OBJ): | $(OBJDIR)

$(SERVER_OBJ): | $(OBJDIR)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(CLIENT_TARGET): | $(BINDIR)

$(SERVER_TARGET): | $(BINDIR)

$(BINDIR):
	mkdir -p $(BINDIR)
