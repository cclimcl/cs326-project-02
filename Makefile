# Set the following to '0' to disable log messages:
DEBUG ?= 1 

CFLAGS += -Wall -g
LDFLAGS +=

read_file: read_file.c liblineread.so
	$(CC) $(CFLAGS) $(LDFLAGS) -DDEBUG=$(DEBUG) -L. -llineread read_file.c -o $@

liblineread.so: lineread.c lineread.h
	$(CC) $(CFLAGS) $(LDFLAGS) -DDEBUG=$(DEBUG) -shared -fPIC lineread.c -o $@

docs: Doxyfile
	doxygen

clean:
	rm -f liblineread.so read_file
	rm -rf docs

# Tests --

test: read_file ./tests/run_tests
	./tests/run_tests $(run)

testupdate: testclean test

./tests/run_tests:
	rm -rf tests
	git clone https://github.com/USF-OS/L2-Tests.git tests

testclean:
	rm -rf tests
