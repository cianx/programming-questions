

#include <stdio.h>
#include <stdlib.h>



int main(int argc, char**argv) {

	int count = 0;
	if(argc < 2|| argc > 2) {
		printf("Usage: fibbonaci-i <count>\n");
		return -1;
	}
	count = atoi(argv[1]);

	int first  = 0;
	int second = 1; 


	for( int i = 0; i < count; ++i) {
		printf("%d\n", second);
		int next = first + second;
		first = second;
		second = next;
	}


	return 0;
}