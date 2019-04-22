#ifndef _DIRTREE_H_
#define _DIRTREE_H_

#include "linkedlist.h"

#include <time.h>

struct dirtree;
typedef struct dirtree *DirTree;

long BLOCK_SIZE;

DirTree makeDirTree(char *name, int is_file);

void flushDirTree(DirTree tree);

DirTree getDirSubtree(DirTree tree, char *path[]);

DirTree getTreeParent(DirTree);

int addDirToTree(DirTree tree, char *path[]);

int addFileToTree(DirTree tree, char *path[]);

int rmfileFromTree(DirTree tree, char *path[]);

int rmdirFromTree(DirTree tree, char *path[]);

long filesizeOfDirTree(DirTree tree, char *path[]);

long numFilesInTreeDir(DirTree tree, char *dir[], int recursive);

long treeFileSize(DirTree tree, char *filepath[]);

int isTreeFile(DirTree tree);

LList getDirTreeChildren(DirTree tree, int alphabetize);

char **pathVecOfTree(DirTree tree);

char *getTreeFilename(DirTree tree);

time_t getTreeTimestamp(DirTree);

LList getTreeFileBlocks(DirTree file);

void updateFileSize(DirTree, long);

void updateTimestamp(DirTree);

void setTimestamp(DirTree, time_t);

void assignMemoryBlock(DirTree file, long b);

long releaseMemoryBlock(DirTree file);

#endif
