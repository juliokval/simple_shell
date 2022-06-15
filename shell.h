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

int prompt(void);
char *read(void);
int checkbuiltins(char **av, char *buffer, int *exitstatus);
char *_getenv(char *name);
char *strdup(char *str);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int prompt(void);
char *_fullpathbuffer(char **av, char *PATH, char *copy);
int _forkprocess(char **av, char *buffer, char *fullpathbuffer);
int _splitstring(char *str);
char *_strcat(char *dest, char *src);
char **tokenize(char *buffer);
int _splitPATH(char *str);
int _PATHstrcmp(const char *s1, const char *s2);
char *_concat(char *tmp, char **av, char *tok);
int _env(void);
void _puts(char *str);
char *_memset(char *s, char b, unsigned int n);

#endif
