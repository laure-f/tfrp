#ifndef RAM_H
#define RAM_H
#endif

#include <stdint.h>

#define RAM_LIMIT 4194000

struct ram
{
	uint32_t size;
	uint8_t *buffer;
};

void ram_init(struct ram *memory);

