CC       = gcc
CFLAGS   = -Wall
LDFLAGS  =
OBJFILES = stack.o main.o
TARGET   = stacktest.exe

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~
