/* 
 * File:   biblioteca.h
 * Author: André
 *
 * Created on 12 de Maio de 2017, 23:31
 */

//Definição do tamanho da mensagem que pode ser recebida
#define LEN 4096

//Definição da estrutura que vai guardas as mensagens
typedef struct Mensagem
{
	char texto[LEN];
	int pos;
	int tempo;
	
}Mensagem;

//Declaração dos cabeçalhos das funções da biblioteca
void ordenaMensagens (Mensagem *mensagensDesordenadas, int quantidadeMensagens);
void arrumaMensagem (char buffer[]);
int mensagemTempo (char buffer[]);
int conectaSocketCliente(char *endereco, char *porta);
int conectaSocketServidor(char *porta);