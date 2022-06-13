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

char *_getenv(char *global_var);
char *strdup(char *str);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
int _strlen(const char *str);

#endif
