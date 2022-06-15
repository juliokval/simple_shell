#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/wait.h>
#include <limits.h>

extern char **environ;

int get_path(char **arguments);
int getbuiltins(char **arguments, int exit_stat);
char *append_command(char *dir_path, char *command);
int _mprint(const char *prompt, unsigned int size);
void free_mem(char *entry);
int getcmd_inputs(char *entry, char **arguments);
int err_stat(int n);
int p_error(char **arguments, int counter);
int check_file(char *pathname);
int execute(char **arguments);
void free_grid(char **grid, int height);
char *_getenv(char *global_var);
char *strdup(char *str);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
int _strlen(const char *str);

#endif
