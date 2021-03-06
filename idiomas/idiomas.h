/*
* Ping Pong OS
* idiomas.h
* Projeto da disciplina Sistemas Operacionais - UTFPR - 2016.02
* Professor: Copetti
* Alunos: Leonardo Winter Pereira (leonardowinterpereira@gmail.com)
*         Lucas Zimmermann Cordeiro ()
*/

/////////////////////////////////////////////////////////////////////
//                      Diretivas de Compilação                    //
/////////////////////////////////////////////////////////////////////

#ifndef __IDIOMAS__
#define __IDIOMAS__
#endif

/////////////////////////////////////////////////////////////////////
//                              DEFINEs                            //
/////////////////////////////////////////////////////////////////////

#define ERR_ELEM_NAO_EXISTE                     15
#define ERR_ELEM_VAZIO                          16
#define ERR_ELEM_OUTRA_FILA                     17
#define ERR_ELEM_NAO_PERTENCE_NA_FILA           18

#define ERR_FILA_VAZIA_OU_NAO_EXISTE            19

/////////////////////////////////////////////////////////////////////
//                    Funções a serem definidas                    //
/////////////////////////////////////////////////////////////////////

char* getMensagemPorIdioma(char* pathIdiomas, int msg, char* idioma);