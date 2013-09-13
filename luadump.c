#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

char *opcodes[] = {
"MOVE",
"LOADK",
"LOADBOOL",
"LOADNIL",
"GETUPVAL",
"GETGLOBAL",
"GETTABLE",
"SETGLOBAL",
"SETUPVAL",
"SETTABLE",
"NEWTABLE",
"SELF",
"ADD",
"SUB",
"MUL",
"DIV",
"MOD",
"POW",
"POW",
"UNM",
"NOT",
"LEN",
"CONCAT",
"JMP",
"EQ",
"LT",
"LE",
"TEST",
"TESTSET",
"CALL",
"TAILCALL",
"RETURN",
"FORLOOP",
"FORPREP",
"TFORLOOP",
"SETLIST",
"CLOSE",
"CLOSURE",
"VARARG"
};

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


header_data *read_header(FILE *ifp)
{
    header_data *ret = malloc(sizeof(header_data));
    assert(ret);
    
    fread(ret->raw, 12, 12, ifp);
}

int is_header_valid(header_data *hd);

//todo handle big endianss
void process_chunk(FILE *ifp)
{
    unsigned string_size = 

}

int main(int argc, char *argv[])
{
	FILE *ifp = fopen(argv[1], "r");
	assert(ifp);

    header_data *hd = read_header(ifp);

}
