CC= g++
CFLAGS= -lwiringPi

run: main.o
	$(CC) $^ -o $@ $(CFLAGS)

%.o: %.cpp
	$(CC) $< -c -o $@ $(CFLAGS)
