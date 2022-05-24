#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <errno.h>

#include "ram.h"


void ram_init
(
	struct ram *memory
)
{
	memory->buffer=calloc(memory->size, sizeof(uint8_t));
}

void ram_write_byte
(
	struct ram  *memory,
	uint32_t addr,
	uint8_t data
)
{
	if(sizeof(data)>sizeof(uint8_t))
	{
		printf("Unable to write data at %d : data size over à byte");
	}
 	else if(addr>memory->size)
	{
		printf("Unable to write data at %d : memory address over the limit");
	}
	else
	{
		memory->buffer[addr]=data;
	}
}

void ram_write
(
	struct ram *memory,
	uint32_t addr,
	uint32_t size,
	void *data
)
{
	uint8_t *data8 = (uint8_t*)data;
	for(int i=0; i<=size; i++)
	{
		ram_write_byte(memory, addr+i, data8[i]);
	}
}

uint8_t ram_read_byte
(
	struct ram *memory,
	uint32_t addr
)
{
	return(memory->buffer[addr]);
}
