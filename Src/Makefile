PROJECT_NAME = ASSIGNMENT1

SRC = mystring.c\
test.c\
bitmask.c\
myutils.c\



$(PROJECT_NAME).out: $(SRC)
	gcc $^ -o $@

run: $(PROJECT_NAME).out
	./$^
		
clean:	
	rm -rf *.o *.out		

