#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

/* for read/write buffers */
#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1

/* for command chaining */
#define CMD_NORM	0
#define CMD_OR		1
#define CMD_AND		2
#define CMD_CHAIN	3

/* for convert_number() */
#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2

/* 1 if using system getline() */
#define USE_GETLINE 0
#define USE_STRTOK 0

#define HIST_FILE	".simple_shell_history"
#define HIST_MAX	4096

extern char **environ;


/**
 * struct liststr - singlyy linkedd listtt
 * @num: the no.  fieldd
 * @str: a string
 * @next: points to the next nodee
 */
typedef struct liststr
{
	int num;
	char *str;
	struct liststr *next;
} list_t;
#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

/* for read/write buffers */
#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1

/* for command chaining */
#define CMD_NORM	0
#define CMD_OR		1
#define CMD_AND		2
#define CMD_CHAIN	3

/* for convert_number() */
#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2

/* 1 if using system getline() */
#define USE_GETLINE 0
#define USE_STRTOK 0

#define HIST_FILE	".simple_shell_history"
#define HIST_MAX	4096
extern char **environ;

/**
 * struct liststr - singly linked list
 * @num: the number field
 * @str: a string
 * @next: points to the next node
 */
typedef struct liststr
{
	int num;
	char *str;
	struct liststr *next;
} list_t;

/**
 * struct passinfo - containss pseudo-arguements to pass into a function,
 * allowing uniform prototype for function pointer sstruct
 * @arg: a string generated from getline containingg arguements
 * @argv:an array of strings generated from arg
 * @path: a string path for   ccurrent command
 * @argc:   argument count
 * @line_count:   error count
 * @err_num:   error code for exit()s
 * @linecount_flag: if   count this line of input
 * @fname:   program filenamee
 * @env: linked list locall copy of environ
 * @environ: custom modified copy of environ from LL env
 * @history: the history node
 * @alias: the alias node
 * @env_changed: on if environ wass changed
 * @status: the return status of   last exec'd cmd
 * @cmd_buf: address   pointer to cmd_buf, on if chaining
 * @cmd_buf_type: CMD_type ||, &&, ;
 * @readfd: the fd from which to read line input
 * @histcount: the history line no  count
 */
typedef struct passinfo
{
	char *arg;
	char **argv;
	char *path;
	int argc;
	unsigned int line_count;
	int err_num;
	int linecount_flag;
	char *fname;
	list_t *env;
	list_t *history;
	list_t *alias;
	char **environ;
	int env_changed;
	int status;

	char *cmd_buf; /* pointer to cmd ; chain buffer, for memory mangement */
	int cmd_buf_type; /* CMD_type ||, &&, ; */
	int readfd;
	int histcount;
} info_t;

#define INFO_INIT \
{NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
		0, 0, 0}

/**
 * struct builtin - contains bbuiltin string n related function
 * @type: builtin command flagg
 * @func: functionnn
 */
typedef struct builtin
{
	char *type;
	int (*func)(info_t *);
} builtin_table;


/* toem_l00p_shell.c */
int hsh(info_t *, char **);
void fork_cmd(info_t *);
int find_builtin(info_t *);
void find_cmd(info_t *);

/* loophsh.c */
int loophsh(char **);


/* toem_simple_ataio.c*/
int _atoi(char *);
int is_delim(char, char *);
int interactive(info_t *);
int _isalpha(int);

/* toem_Exibutlin.c */
int _myexit(info_t *);
int _mycd(info_t *);
int _myhelp(info_t *);

/* toem_exibutlin1.c */
int _myhistory(info_t *);
int _myalias(info_t *);

/* toem_prinenvroin.c */
int _myenv(info_t *);
int populate_env_list(info_t *);
char *_getenv(info_t *, const char *);
int _mysetenv(info_t *);
int _myunsetenv(info_t *);

/* toem_0ors.c */
void _eputs(char *);
int _putsfd(char *str, int fd);
int _eputchar(char);
int _putfd(char c, int fd);

/* toem_strinpuprin1.c */
int _erratoi(char *);
void print_error(info_t *, char *);
void remove_comments(char *);
int print_d(int, int);
char *convert_number(long int, int, int);

/* toem_stcopyext.c */
char *_strchr(char *, char);
char *_strncat(char *, char *, int);
char *_strncpy(char *, char *, int);

/*toem_buferGet.c */
ssize_t get_input(info_t *);
void sigintHandler(int);
int _getline(info_t *, char **, size_t *);


/* toem_strinenvi.c */
char **get_environ(info_t *);
int _unsetenv(info_t *, char *);
int _setenv(info_t *, char *, char *);

/* toem_strucinf.c */
void clear_info(info_t *);
void free_info(info_t *, int);
void set_info(info_t *, char **);

/* toem_Strfilhist.c*/
char *get_history_file(info_t *info);
int read_history(info_t *info);
int build_history_list(info_t *info, char *buf, int linecount);
int renumber_history(info_t *info);
int write_history(info_t *info);

/* toem_nodlist.c */
list_t *add_node(list_t **, const char *, int);
void free_list(list_t **);
list_t *add_node_end(list_t **, const char *, int);
size_t print_list_str(const list_t *);
int delete_node_at_index(list_t **, unsigned int);

/* toem_nulmem.c */
int bfree(void **);

/* toem_patpar.c */
int is_cmd(info_t *, char *);
char *find_path(info_t *, char *, char *);
char *dup_chars(char *, int, int);
char **list_to_strings(list_t *);
size_t print_list(const list_t *);

/* toem_consloc.c */
char *_memset(char *, char, unsigned int);
void *_realloc(void *, unsigned int, unsigned int);
void ffree(char **);


/* toem_l00p_shell.c */
int hsh(info_t *, char **);
void fork_cmd(info_t *);
int find_builtin(info_t *);
void find_cmd(info_t *);

/* toem_leng_strin.c */
int _strlen(char *);
char *_strcat(char *, char *);
int _strcmp(char *, char *);
char *starts_with(const char *, const char *);

/* toem_eng_strin1.c */
char *_strcpy(char *, char *);
char *_strdup(const char *);
int _putchar(char);
void _puts(char *);

/* toem_worztok.c */
char **strtow2(char *, char);
char **strtow(char *, char *);

/* toem_ch_vars.c */
void check_chain(info_t *, char *, size_t *, size_t, size_t);
int replace_alias(info_t *);
int replace_vars(info_t *);
int replace_string(char **, char *);
int is_chain(info_t *, char *, size_t *);

/* toem_nodlist1.c */
ssize_t get_node_index(list_t *, list_t *);
list_t *node_starts_with(list_t *, char *, char);
size_t list_len(const list_t *);


#endif
