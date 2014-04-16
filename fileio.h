/* fileio.h --- header contendo definições de I/O em arquivo
   pode ser incluído em todos os programas vistos nas aulas práticas */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DELIM_STR "|"
#define DELIM_CHR '|'
#define MAX_REC_SIZE 512

/* macro fld_to_recbuff:
         Concatena a string fld (campo) + DELIM_STR na string rb (buffer) */
#define fld_to_recbuff(rb,fld) strcat((rb),(fld)); \
                               strcat((rb),DELIM_STR)

/* macro out_str: Escreve a string s + DELIM_STR no arquivo fd */
#define out_str(fd,s) fputs((s),(fd)); \
                      fputs(DELIM_STR, (fd))
