/*
* Ping Pong OS
* main.c
* Projeto da disciplina Sistemas Operacionais - UTFPR - 2016.02
* Professor: Copetti
* Alunos: Leonardo Winter Pereira (leonardowinterpereira@gmail.com)
*         Lucas Zimmermann Cordeiro ()
*/

/////////////////////////////////////////////////////////////////////
//                      Diretivas de Compilação                    //
/////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "config/config.h"
#include "idiomas/idiomas.h"
#include "p00/queue.h"

/////////////////////////////////////////////////////////////////////
//                            Constantes                           //
/////////////////////////////////////////////////////////////////////

int main () 
{
    printf(getMensagemPorIdioma(PATH_IDIOMAS_MAIN, ERR_ELEM_OUTRA_FILA, IDIOMA_ATUAL));

    return 0;
}