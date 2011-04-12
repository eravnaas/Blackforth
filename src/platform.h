#ifndef PLATFORM_H
#define PLATFORM_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int cell;
typedef unsigned int ucell;
typedef unsigned char uchar;

typedef void (*code)(void); 
typedef code *xtk; //execution token


//NOTE: On win32 sizeof cell, code, xtk are all 4-bits
#define CELL_SIZE sizeof(cell)
#define ALIGN_SIZE CELL_SIZE

#define BIG_ENDIAN 1
#define SMALL_ENDIAN 2
#define ENDIAN SMALL_ENDIAN

#define LINEFEED '\n'

extern cell mem[];

#define MEMSIZE (64*1024/CELL); 
#define DATA_STACK_SIZE (1024/CELL);
#define RETURN_STACK_SIZE (8192/CELL);
#define USER_AREA (400/CELL);
#define TB (80/CELL);                                       // terminal buffer

//PLATFORM SPECIFIC I/O

inline char getCharacter()
{
   return getchar();
}

inline void putCharacter(char ch)
{
   putchar(ch);
}

#endif
