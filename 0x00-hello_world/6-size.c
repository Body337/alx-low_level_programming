#include<stdio.h>

int main(){

	int a;
	long int b;
	long long int c;
	float d;
	char e;

	printf("Size of a char: "+sizeof(e)+" byte(s)");
	printf("Size of a int: "+sizeof(a)+" byte(s)");
	printf("Size of a long int: "+sizeof(b)+" byte(s)");
	printf("Size of a long long int: "+sizeof(c)+" byte(s)");
	printf("Size of a float: "+sizeof(d)+" byte(s)");
	return(0);

}
