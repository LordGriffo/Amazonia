CC = gcc
CFLAGS = -O3 -pipe -v -std=c2x -Wall -Wextra -pedantic -march=native -mtune=native
LDFLAGS = -static

SRCDIR = src
OBJDIR = obj
BINDIR = bin

SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))
TARGET = $(BINDIR)/abacaxi

LIBDIR = src/lib

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(TARGET): | $(BINDIR)

$(BINDIR):
	mkdir -p $(BINDIR)

