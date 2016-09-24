/*

*/
#include <stdio.h>
#include <stdlib.h>


void fibbonaci(int first, int second, int count) {
	printf("%d\n", second );
	if(count > 0)
	{
		fibbonaci(second, first + second, count - 1 );
	}
}


int main(int argc, char**argv) {
	int count = 0;

	if(argc < 2
		|| argc > 2) {
		printf("Usage: fibbonaci-r <count>");
		return -1;
	}
	count = atoi(argv[1]);

	fibbonaci(0, 1, count-1);

	return 0;
}