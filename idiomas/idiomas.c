/*
* Ping Pong OS
* idiomas.c
* Projeto da disciplina Sistemas Operacionais - UTFPR - 2016.02
* Professor: Copetti
* Alunos: Leonardo Winter Pereira (leonardowinterpereira@gmail.com)
*         Lucas Zimmermann Cordeiro ()
*/

/////////////////////////////////////////////////////////////////////
//                      Diretivas de Compilação                    //
/////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>       // calloc
#include <stdarg.h>       // va_*
#include <string.h>       // strlen, strcpy

#include "idiomas.h"

/////////////////////////////////////////////////////////////////////
//                              DEFINEs                            //
/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////
//                           Prototipações                         //
/////////////////////////////////////////////////////////////////////

char* concat(int count, ...);

char* leArquivo(char* pathCompletoIdioma, int linhaParaLer);

/////////////////////////////////////////////////////////////////////
//                   Funções definidas em idiomas.h                //
/////////////////////////////////////////////////////////////////////

char* getMensagemPorIdioma(char* pathIdiomas, int msg, char* idioma)
{
    char* pathIdioma = concat(3, pathIdiomas, idioma, ".txt");

    return leArquivo(pathIdioma, msg);
}

/////////////////////////////////////////////////////////////////////
//                        Funções Prototipadas                     //
/////////////////////////////////////////////////////////////////////

char* concat(int count, ...)
{
    va_list ap;
    
    // Find required length to store merged string
    int len = 1; // room for NULL
    
    va_start(ap, count);
    
    for(int i = 0 ; i < count ; i++)
        len += strlen(va_arg(ap, char*));
    
    va_end(ap);

    // Allocate memory to concat strings
    char *merged = calloc(sizeof(char),len);
    int null_pos = 0;

    // Actually concatenate strings
    va_start(ap, count);
    
    for(int i = 0 ; i < count ; i++)
    {
        char *s = va_arg(ap, char*);
        strcpy(merged + null_pos, s);
        null_pos += strlen(s);
    }
    va_end(ap);

    return merged;
}

char* leArquivo(char* pathCompletoIdioma, int linhaParaLer)
{
    char* mensagem = "";

    FILE *fd = fopen(pathCompletoIdioma, "r");

    int end;
    int loop;
    
    char str[128];

    if (fd == NULL)
    {
        printf("Failed to open file\n");
    
        return (char *)-1;
    }

    for(end = loop = 0; loop < linhaParaLer; ++loop)
    {
        if(0 == fgets(str, sizeof(str), fd))
        {//include '\n'
            end = 1; // can't input (EOF)
        
            break;
        }
    }

    if(!end)
        mensagem = str;
    
    fclose(fd);

    return mensagem;
}