#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fileio.h"

#define DELIM_STR "|"

int main(){


}

int menu(){

     int escolha;
     char resposta[10];

     printf("\n\n\n\n\t PROGRAMA PARA CADASTRO DE ALUNOS CANDIDATOS AO VESTIBULAR\n");
     printf("\n\nSelecione uma opção:\n\n");
     printf("\t1. Importar dados\n");
     printf("\t2. Inserir um novo aluno \n");
     printf("\t3. Remover um aluno \n");
     printf("\t4. Buscar ou exibir um aluno \n");
     printf("\t5. Compactar o arquivo de registros \n");
     printf("\t6. Terminar o programa\n\n");
     printf("Digite o numero da sua escolha: ");
     gets(resposta);
     escolha = atoi(resposta);
     return(escolha);

}

int inserirAluno(){
    char inscricao[6],nome[],curso[],notaFinal[];
    char recbuff[MAX_REC_SIZE +1];

    printf("\n\nDigite o numero de inscricao do aluno\n>>>");
    gets(inscricao);

    //verificar se já existe o numero de inscricao

    recbuff[0] = '\0';
    strcat(recbuff,inscricao)
    strcat(recbuff, DELIM_STR);

    printf("\nDigite o Nome do aluno\n>>>");
    gets(nome);
    strcat(recbuff,nome);
    strcat(recbuff, DELIM_STR);

    printf("\nDigite o curso que este aluno concorreu\n>>>");
    gets(curso);
    strcat(recbuff,curso);
    strcat(recbuff, DELIM_STR);

    printf("\nDigite a nota final obtida pelo aluno\n>>>");
    gets(notaFinal);
    strcat(recbuff,notaFinal);
    strcat(recbuff, DELIM_STR);


}
