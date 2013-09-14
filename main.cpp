/**
 * A cool thing to do would be to inherete the fstrem
 * such that the header and everything is all cool
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "opcodes.h"

typedef struct {
	char signiture[4];
	char version;
	char official;
	char endianness;
	char size_of_int;
	char size_of_size_t;
	char size_of_instruction;
	char size_of_lua_number;
	char integral_flag;
} header_fields;

typedef union {
	header_fields fields;
	char raw[12];
} header_data;

typedef struct {
	char size[]
	
	
} lua_string;

header_data *read_header(FILE *ifp)
{
	header_data *ret = malloc(sizeof(header_data));
	assert(ret);
	
	fread(ret->raw, sizeof(header_data), 12, ifp);
}

lua_string *read_string(FILE *ifp, header_data hd)
{

	
}

int header_valid(header_data *hd){ return 1; }

//todo handle big endianss
void process_chunk(FILE *ifp)
{
	fread()
	
	unsigned string_size = 
	
}

int main(int argc, char *argv[])
{
	FILE *ifp = fopen(argv[1], "r");
	assert(ifp);
	
	header_data *hd = read_header(ifp);
	
}
