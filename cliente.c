/* 
 * File:   cliente.c
 * Author: André
 *
 * Created on 12 de Maio de 2017, 20:48
 */

//Bibliotecas
#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <string.h>
#include "biblioteca.h"

//Definições globais
#define LEN 4096

/*
 * 
 */
int main(int argc, char** argv) {
    
//Declaração de variáveis
    struct addrinfo auxiliar, *socketInfo;
    struct sockaddr_in6 servidor; 
    int tamanhoServidor, meuSocket, conectado = 1, numeroMensagem = 0, slen = 0, i = 0;
    char envia[556];
    char recebe[556];
    char buffer[LEN];
}

