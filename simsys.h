#ifndef _SIMSYS_H_
#define _SIMSYS_H_

#include "dirtree.h"

void init_filesystem(long blks, long size);

void flush_filesystem();

DirTree getRootNode();
DirTree getWorkDirNode();

void setWorkDirNode(DirTree);

long blockSize();

long numBlocks();
long numSectors();

void freeBlock(long n);

long allocBlock();

int enoughMemFor(long n);

LList getAllocData();

long blocksAllocated();
long nextBlock();

DirTree getRelTree(DirTree, char **);

#endif
