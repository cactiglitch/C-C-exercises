#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};
	
	//raw print
	printf("numbers: %d %d %d %d \n",
			numbers[0],numbers[1],numbers[2],numbers[3]);
	
	printf("name each: %c %c %c %c\n",
			name[0], name[1], name[2], name[3]);
			
	printf("name: %s\n", name);
	
	//set up numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	
	//set up name
	name[0] = 'W';
	name[1] = 'I';
	name[2] = 'N';
	name[3] = '\0';
	
	//print initialised
	printf("numbers: %d %d %d %d \n", 
			numbers[0], numbers[1], numbers[2], numbers[3]);
			
	printf("names: %c %c %c %c\n", 
			name[0], name[1], name[2], name[3]);
			
	printf("name: %s\n", name);
	
	//another way 
	char *another ="Bob";
	printf("another: %s\n", another);
	
	printf("another: %c %c %c %c\n", 
			another[0], another[1], another[2], another[3]);
	
	return 0;
}


/* 
output:
numbers: 0 0 0 0
name each: a
name: a
numbers: 1 2 3 4
names: W I N
name: WIN
another: Bob
another: B o b
*/
