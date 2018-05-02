all: bin/src bin/test

bin/src: build/main.o build/board.o build/board_print_plain.o
	gcc -Wall -Werror build/main.o build/board.o build/board_print_plain.o -o bin/src

build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/board.o: src/board.c
	gcc -Wall -Werror -c src/board.c -o build/board.o

build/board_print_plain.o: src/board_print_plain.c
	gcc -Wall -Werror -c src/board_print_plain.c -o build/board_print_plain.o

bin/test: build/test.o build/board.o build/board_print_plain.o build/ctest.o
	gcc -Wall build/test.o build/board.o build/board_print_plain.o build/ctest.o -o bin/test

build/test.o: test/test.c
	gcc -Wall -c test/test.c -o build/test.o -Ithirdparty -Isrc

build/ctest.o: test/ctest.c
	gcc -Wall -c test/ctest.c -o build/ctest.o -Ithirdparty

test: bin/test
	bin/test
	
.PHONY: clean
clean:
	rm -rf build/*.o