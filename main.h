#ifndef MAIN_H
#define MAIN_H

#define COMMAND_ENV 1
#define COMMAND_EXIT 2
#define COMMAND_CUSTOM 3

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/wait.h>
ssize_t read_comand(char **lin, size_t *len);
int remove_whitespace(char *stre);
void print_env(void);
extern char **environ;
void shell(void);
int get_comand_type(const char *lin);
int is_valid_exit_number(char *arg);
int execute_comd(char **arg, char *fulll, char *lin);
void path_e(char *bin, char *path, char **full);
void handle_exit(char *arg[], char *line, int exitstatus);
int chouf_num(const char *stre);
void ayoub(void);
int tokenize_string(char *line, char **arg);


#endif
