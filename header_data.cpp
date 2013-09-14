#include "header_data.h"

header_data::header_data(FILE *ipf)
{
	fread(&this->data, sizeof(typeid(this->data)), 12, ifp);
}