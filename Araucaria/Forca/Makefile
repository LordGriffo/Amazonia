CC = g++
CFLAGS = -O3 -pipe -std=c2x -v -Wall -Wextra -pedantic -Wunused-parameter -Wunused-variable -march=native -mtune=native
LDFLAGS = -static 

SRCDIR = src
OBJDIR = obj
BINDIR = bin

SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))
TARGET = $(BINDIR)/forca

LIBDIR = src/lib

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@ 
#   strip -s $@  # Executa o comando strip -s no TARGET Desoomente para ativar!

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@
#strip -s $@  # Executa o comando strip -s no TARGET Desoomente para ativar!
clean:
	rm -f $(OBJS) $(TARGET)

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(TARGET): | $(BINDIR)

$(BINDIR):
	mkdir -p $(BINDIR)
