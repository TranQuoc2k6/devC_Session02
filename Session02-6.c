#include<stdio.h>
int main(){
	const float pi = 3.14;
	int r = 5;
	float perimeter = 2*r*pi;
	printf("chu vi hinh tron la %.2f\n", perimeter);
	float acreage = r*r*pi;
	printf("dien tich hinh tron la %.2f", acreage);
	return 0;
	
}
