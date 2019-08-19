#include <stdio.h>
#include <stdlib.h>



void imp_menu (void) {
  system("clear");
  printf("# # # # # # SEU FINANCEIRO DOMÉSTICO # # # # # #\n\n");
  printf("1 - Contas.\n");
  printf("2 - Manutenção da casa.\n");
  printf("3 - Sobre.\n");
  printf("0 - Sair.\n");

}

void menu_Contas (void){
  system("clear");
  printf("1 - Água/Energia/Telefone.\n");
  printf("2 - Transporte.\n");
  printf("3 - Alimentação.\n");
  printf("4 - Vestuário.\n");
  printf("5 - Higiene em geral.\n");
  printf("6 - Voltar.\n");

}

void menu_manuCasa (void){
  system("clear");
  printf("1 - Móveis.\n");
  printf("2 - Pintura.\n");
  printf("3 - Jardinagem.\n");
  printf("4 - Outros gastos.\n");
  printf("5 - Voltar.\n");
  
}

void menu_sobre (void){
 //Adicionado e corrigido o nome do professor
  printf("Esse projeto foi feito atráves por dois alunos, Brhemme da Cunha Prudêncio e Adalberto Maia da Silva, da disciplina de programação administrada pelo professor, Flávius Gorgónio" );

}

