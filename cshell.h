#ifndef __CSHELL_H
#define __CSHELL_H

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <errno.h>

#define ARG_MAX 100
extern char **environ;

/*  custom functions */
int my_strcmp(char *st1, char *st2);
int exec_cmd(char **av, char *loc, char **argv, char **envr);

size_t my_strlen(const char *st);
void continue(char **av, char **envr);

char *my_strtok(char *st, const char *delimit);
void isComment(char *st);

char *my_strpbrk(const char *st1, const char *st2);
void print_err(char *av, int respond, char *argv);

char *my_strcpy(char *dest, const char *src);
int _putchar(char c);

char *find_path(char *loc, char *argv, char *av, int mod, int ctr);

void envVar(void);
char *findEnvVar(const char *key);

char *find_loc(char *argv, char *av,  int mod, int ctr);
void handle_ctrl_c(int flag);

char *my_strcat(char *st1, char *st2);
char *my_strdup(const char *st);

char *my_strchr(const char *st, int q);
int my_strncmp(const char *st1, const char *st2, size_t n);

void fr_argv(char **argv);

void tokenize(char *buff, char **argv, const char *delim);

int isBuiltInCmd(char *buff, char **argv);





#endif /*__CSHELL_H */
