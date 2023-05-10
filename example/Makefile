CC = gcc

CFLAGS = -Wall -Wextra
LDFLAGS = -lcrypto

TARGET = crypto_example

all: $(TARGET)

$(TARGET): crypto_example.o
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

cripto.o: crypto_example.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(TARGET) *.o
