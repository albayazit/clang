#include <stdio.h>

int main(){
	float mass, height, imt;
	
	scanf("%f%f", &mass, &height);
	imt = mass/(height*height);

	printf("%f\n", imt);

	return 0;
}
