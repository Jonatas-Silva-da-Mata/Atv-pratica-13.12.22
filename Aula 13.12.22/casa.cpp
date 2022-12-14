#include <stdio.h>

#define Q '#'

void casa(int h)
{
	printf("%c%c%c%c\n", '#', '#', '#', '#');
	printf("%c%c%c%c\n", '#', '#', '#', '#');
	printf("%c%c%c%c%c%c\n", '#', '#', '#', '#', '#', '#');
	printf("%c%c%c%c%c%c\n", '#', '#', '#', '#', '#', '#');
	printf("%c%c%c%c\n", '#', '#', '#', '#');
	printf("%c%c%c%c\n", '#', '#', '#', '#');
	printf("%c\n", '#');
}

int main(){
	
	casa(h); //primeira
	casa(l); //segunda
	
	return 0;
}
