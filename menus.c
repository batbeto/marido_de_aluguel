#include <stdio.h>
#include <stdlib.h>



void imp_menu (void) {
  system("clear");
  printf("# # # # # # SEU FINANCEIRO DOMÉSTICO # # # # # #\n\n");
  printf("1 - Contas.\n");
  printf("2 - Alimentação.\n ");
  printf("3 - Manutenção da casa.\n");
  printf("4 - Sair.");
  printf("5 - Sobre.");

}

void menu_Contas (void){
  system("clear");
  printf("1 - Luz");
  printf("2 - Água");
  printf("3 - Gasolina");
  printf("4 - Roupas");
  printf("5 - Higiene em geral");
  printf("6 - Produtos de Limpeza");
  printf("7 - Telefone");
  printf("8 - Voltar.");

}

void menu_manuCasa (void){
  system("clear");
  printf("Móveis");
  printf("Despesa com encanamento");
  printf("Pintura");
  printf("Jardinagem");
  
}

void menu_Alimentacao (void){
  system("clear");
  printf("Compras.");
  printf("Custos.");

}

void menu_sobre (void){
  printf("Esse projeto foi feito atráves por dois alunos, Brhemme da Cunha Prudêncio e Adalberto Maia da Silva, da disciplina de programação administrada pelo professor, Flávios Gorgónio" )


}
return 0;

