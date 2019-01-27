#include <stdio.h>
//Enumeration (or enum) is a user defined data type in C. 
//It is mainly used
//to assign names to integral constants, the names make a program easy to read and maintain.

enum week{
	mon, //0
	tues, //1
	wed, //2
	thur,
	fri,
}day;

int main(){
	enum week day;
	day = fri;
	printf("The number friday is %d\n", day);
	return 0;
}