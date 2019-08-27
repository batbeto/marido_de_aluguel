#include <stdio.h>
#include <stdlib.h>

//Diminuiu o tamanho do menu.
int imp_menu(void) {
  int opcao;
  system("cls||clear");
  printf("# # # # # # # SIG - FINANCE # # # # # # # # # # # # # #");
  printf("# # # # # # # SISTEMA FINÁNCEIRO DOMÉSTICO # # # # # #" );
  printf("# # # # # # # # # # # # # # # # # # # # # # # # # # #\n\n");
  printf("1 - Contas.\n");
  printf("2 - Manutenção da casa.\n");
  printf("3 - Sobre.\n");
  printf("0 - Sair.\n");
  scanf("%d",&opcao);
  return opcao;
}
//Alterações, simplicação do Menu.
int menu_Contas (void){
  int opcao;
  system("cls||clear");
  printf("1 - Água/Energia/Telefone.\n");
  printf("2 - Transporte.\n");
  printf("3 - Alimentação.\n");
  printf("4 - Vestuário.\n");
  printf("5 - Higiene em geral.\n");
  printf("6 - Voltar.\n");
  scanf("%d",&opcao);
  return opcao;
}
//Menu Alterações, simplicações nos nomes.
int menu_manuCasa (void){
  int opcao;
  system("cls||clear");
  printf("1 - Móveis.\n");
  printf("2 - Pintura.\n");
  printf("3 - Jardinagem.\n");
  printf("4 - Outros gastos.\n");
  printf("5 - Voltar.\n");
  scanf("%d",&opcao);
  return opcao;
  
}
//Menu Cadastro.
int menu_Cadastro (void){
  int opcao;
  system("cls||clear");
  printf("1 - Digite o nome do usúario.\n");
  printf("2 - Digite o login do usuário.\n");
  printf("3 - Digite a senha desejada do usuário.(Somente números)\n");
  printf("4 - Registrar Novo.\n");
  printf("0 - Voltar.\n");
  scanf("%d",&opcao);
  return opcao;
}

int menu_relatorio (void){
  int opcao;
  system("cls||clear");
  printf("1 - Exibir Contas.\n");
  printf("2 - Exibir Custos da Manutenção.\n");
  scanf("%d",&opcao);
  return opcao;
}

void menu_sobre (void){
 //Adicionado e corrigido o nome do professor
  system("cls||clear");
  printf("Esse projeto foi feito atráves por dois alunos, Brhemme da Cunha Prudêncio e Adalberto Maia da Silva, da disciplina de programação administrada pelo professor, Flávius Gorgónio.\n" );

}

