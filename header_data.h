#ifndef HEADER_DATA_H_INCLUDED
#define HEADER_DATA_H_INCLUDED

#include <cstdio>
#include <cstdlib>
#include <cstdint>

class header_data {
public:
	header_data(FILE *ifp);

	union {
		struct {
			uint8_t signiture[4];
			uint8_t version;
			uint8_t format_version;
			uint8_t size_of_int;
			uint8_t size_of_size_t;
			uint8_t size_of_instruction;
			uint8_t size_of_number;
			uint8_t number_integral;
		} feilds;
		uint8_t raw[12];
	} data;
};


#endif//HEADER_DATA_H_INCLUDED