CC       = gcc
CFLAGS   = -Wall
LDFLAGS  =
OBJFILES = lrange.o userinput.o main.o
TARGET   = lrange.exe

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~
