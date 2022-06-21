all: sib

sib: main.c
	gcc main.c -o sib

install: sib
	cp sib /usr/local/bin

uninstall:
	rm -f /usr/local/bin/sib

clean:
	rm -f sib
