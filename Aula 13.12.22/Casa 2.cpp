#include <stdio.h>;

#define Q '#'// Q é a constante

void parede(int a){
	for(int i=0; i<a; i++){
		printf("%c", Q);
	}
		printf("\n");
}

void casa(int h, int t=6){
	parede(h-2);
	parede(h-2);
	parede(h);
	parede(h);
	parede(h-2);
	parede(h-2);
	printf("\n");
}


int main (){
	casa(3, 2);
	casa(9);
	casa(15);
	casa(9);
	casa(20);
	printf("\n");
	
	return 0;
}
