PROJECT = linked_list
COMPILE = gcc -std=c11 -g
FLAGS = -Wall -Werror -Wextra
SOURCE = $(wildcard *list.c)
TEST = $(wildcard test.c)
LIB = $(PROJECT).a

all: $(LIB)

$(LIB): 
	@$(COMPILE) $(FLAGS) -c $(SOURCE) stack.c
	@ar -rcs $(LIB) *.o
	@rm -f *.o

clean:
	@rm -f $(PROJECT) *.log *.a *.out *.exe *.o *.info *.gcda *.gcno .clang-format ./test_dec ./test/*.a ./test/test_dec
	@rm -rf report *.dSYM test/*.dSYM

rebuild: clean all

build: $(LIB)
	@$(COMPILE) $(FLAGS) $(TEST) -L. $(LIB) -o ll.out

ex:
	@./ll.out

rex: 
	@make clean
	@make build
	@make ex

