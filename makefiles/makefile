flags = -Wno-implicit-function-declaration

all : final
	@echo "Running final.."
	./final

final : main.o sub.o
	@echo "Linking files and creating application"
	gcc $(flags) main.o sub.o -o final

main.o : main.c
	@echo "Compiling main.c"
	gcc $(flags) -c main.c

sub.o : sub.c
	@echo "Compiling sub.c"
	gcc $(flags) -c sub.c
clean :
	@echo "Cleaning everything except source files"
	del final main.o sub.o 2>nul