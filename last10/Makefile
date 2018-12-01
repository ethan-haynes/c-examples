CC       = gcc
CFLAGS   = -Wall
LDFLAGS  =
OBJFILES = last10.o main.o
TARGET   = last10.exe

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~
