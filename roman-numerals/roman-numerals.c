/*
	roman-numerals.c 


*/
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#define MAX_LENGTH 256

typedef struct _roman_numeral_record {
	int value;
	char symbol;
} roman_numeral_record;

void convert_roman_numeral(
	char* out, 
	int out_buffer_length, 
	int value
	)  
{
	memset(out, 0, out_buffer_length);

	const roman_numeral_record rn_lookup[] = {
		{ 1, 'I' }, // 1
		{ 5, 'V' }, // 5
		{ 10, 'X' }, // 10
		{ 50, 'L' }, // 50
		{ 100, 'C' }, // 100
		{ 500, 'D' }, // 500
		{ 1000, 'M' }  // 1000
	};
	int out_index = 0;
	int level = (sizeof(rn_lookup)/sizeof(roman_numeral_record)) - 1;
	while(value > 0) {
		roman_numeral_record* rn = &rn_lookup[level]; 
		while(value >= rn->value) {
			if(out_index >= out_buffer_length) {
				return;
			}
			out[out_index++] = rn->symbol;
			value -= rn->value;
		}
		//
		if(level > 0) {
			int prefix_index = ((level - 1) & 0xFE);
			roman_numeral_record* prn = &rn_lookup[prefix_index];
			if(value >= (rn->value - prn->value) ) {
				if(out_index + 1 >= out_buffer_length) {
					return;
				}				
				out[out_index++] = prn->symbol;
				out[out_index++] = rn->symbol;
				value -= (rn->value - prn->value);		
			}
		}
		level--;
	}
}


int main(int argc, char**argv) {
	if(argc < 2
		|| argc > 2) {
		printf("Usage: roman-numerals <number>");
		return -1;
	}

	int value = atoi(argv[1]);
	if(value <= 0) {
		printf("Only values > 0 can be converted.");
		return -1;
	}	
	if(value > 5000) {
		printf("The maximum convertable value is 5000.");
		return -1;
	}

	char out[MAX_LENGTH];
	convert_roman_numeral(out, MAX_LENGTH, value);
	printf("%s\n", out);

	return 0;
}