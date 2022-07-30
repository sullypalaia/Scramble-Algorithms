out: makeres.o algor0.o algor1.o main.o
	gcc makeres.o algor0.o algor1.o main.o -o out
	#The preprocessing is done. Now execute the out file with desired parameters.
	#Execute the out file with a parameter of help if you need a list of arguments included in this program.
	#Use make clean to remove the object files.

makeres.o: /users/sullypalaia/downloads/programs/scramblealgors/funcs/makeres.c /users/sullypalaia/downloads/programs/scramblealgors/funcs/makeres.h
	gcc -c /users/sullypalaia/downloads/programs/scramblealgors/funcs/makeres.c

algor0.o: /users/sullypalaia/downloads/programs/scramblealgors/funcs/algor0.c /users/sullypalaia/downloads/programs/scramblealgors/funcs/algors.h
	gcc -c /users/sullypalaia/downloads/programs/scramblealgors/funcs/algor0.c

algor1.o: /users/sullypalaia/downloads/programs/scramblealgors/funcs/algor1.c /users/sullypalaia/downloads/programs/scramblealgors/funcs/algors.h
	gcc -c /users/sullypalaia/downloads/programs/scramblealgors/funcs/algor1.c

main.o: /users/sullypalaia/downloads/programs/scramblealgors/main/main.c
	gcc -c /users/sullypalaia/downloads/programs/scramblealgors/main/main.c

clean:
	rm *.o out
