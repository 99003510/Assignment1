PROJECT_NAME = ASSIGNMENT1

SRC = Src/mystring.c\
Src/test.c\
Src/bitmask.c\
Src/myutils.c\

INC = -Iinc

$(PROJECT_NAME).out: $(SRC)
	gcc $^ -o $@ $(INC)

run: $(PROJECT_NAME).out
	./$^
		
clean:	
	rm -rf *.o *.out		

