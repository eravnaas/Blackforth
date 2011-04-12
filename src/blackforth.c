#include "platform.h"

// Virtual machine memory 
cell mem[MEMSIZE];

//MEMORY MAP:
//memory consists of 3 types:
// 1. Virtual machine registers
// 2. Code memory
// 3. Data memory


//VIRTUAL MACHINE REGISTERS
cell ip; //interpreter pointer
cell w;  // working register
cell r0; // bottom of return stack
cell s0; // bottom of data stack
cell rp; // return stack pointer
cell sp; // data stack pointer
cell x;  // extra working register

// Code memory will be handled by the compiler and linker
// mem 0 - 50 
// Data memory map:

// System and user variables





//the dictionary
// struct dict_header
// {
//    char suffix[SUFFIX_LENGTH]; 
//    unsigned char length;
//    struct dict_header *link;
// };

// struct dict_entry
// {
//    struct dict_header header;
//    code code;
// };

// //Two dictionaries
// static struct dict_name *forth;
// static struct dict_name *macro;

char ch;
void main()
{
    printf("%d \n", sizeof(xtk));
	
	ch = getchar();
}
 
