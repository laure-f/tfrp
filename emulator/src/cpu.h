#ifndef CPU_H
#define CPU_H
#endif


/* Instruction set*/

#define LDR 0x0
#define STR 0x1 
#define MOV 0x2 
#define LSH 0x3  
#define RSH 0x4
#define OR_ 0x5
#define AND 0x6
#define NOT 0x7
#define ADD 0x8
#define SUB 0x9
#define MUL 0XA
#define DIV 0xB
#define POP 0xC
#define BRC 0xD
#define CMP 0xF

void ldr
(
	struct ram *memory,
	int src,
	int addr

)
{
	write
}


void str
(
	struct ram *memory,
 	int *dest,
	int addr
)
{
	
}
