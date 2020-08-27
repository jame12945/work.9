#include<stdio.h>
main() {
	int a;
	int b;
	int c;
	int d;
	printf("input a= ");
	scanf_s("%d", &a);
	printf("input b= ");
	scanf_s("%d", &b);
	printf("input c= ");
	scanf_s("%d", &c);
	printf("input d= ");
	scanf_s("%d", &d);

	if (a <= b) {
		printf("output a= %d\n", b);

	}
	if (a <= c) {
		printf("output b=%d\n", a);

	}
	if (a <= d) {
		printf("output c=%d\n", d);

	}
	if (a <= a) {
		printf("output d=%d\n", c);

	}




}