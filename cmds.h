#ifndef _CMDS_H_
#define _CMDS_H_

typedef int (*SimCmd)(char **);

char **str_to_vec(char *, char);
void free_str_vec(char **);
void mergesort_longs(long *, int, int);

void cmd_exec(char *argv[]);

int cmd_cd(char *argv[]);

int cmd_ls(char *argv[]);

int cmd_mkdir(char *argv[]);
int cmd_create(char *argv[]);

int cmd_append(char *argv[]);
int cmd_remove(char *argv[]);

int cmd_delete(char *argv[]);

int cmd_exit(char *argv[]);

int cmd_dir(char *argv[]);

int cmd_prfiles(char *argv[]);
int cmd_prdisk(char *argv[]);

int cmd_defrag(char *argv[]);

#endif
