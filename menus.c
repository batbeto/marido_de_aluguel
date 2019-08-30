#include <stdio.h>
#include <stdlib.h>
#include <windows.h>



int menu_princ (void) {
   int opcao;
   system("cls||clear");
   printf("1 - Cadastrar Cliente.\n");
   printf("2 - Login.\n");
   printf("0 - Fechar Programa.\n");
   scanf("%d",&opcao);
   return opcao;

}
int imp_menu(void) {
  int opcao;
  system("cls||clear");
  printf("# # # # # # # SIG - FINANCE # # # # # # # # # # # # # #\n");
  printf("# # # # # # # SISTEMA FINÁNCEIRO DOMÉSTICO # # # # # #\n" );
  printf("# # # # # # # # # # # # # # # # # # # # # # # # # # #\n\n");
  printf("1 - Contas.\n");
  printf("2 - Sobre.\n");
  printf("0 - Sair.\n");
  scanf("%d",&opcao);
  return opcao;
}
//Alterações, simplicação do Menu.
int menu_Contas (void){
  int opcao;
  system("cls||clear");
  printf("1 - Criar novo registro.\n");
  printf("2 - Visualizar Registro.\n");
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
  printf("4 - Visualizar registros.\n");
  printf("5 - Registrar Novo.\n");
  printf("6 - Deletar Usuário.\n");
  printf("0 - Voltar.\n");
  scanf("%d",&opcao);
  return opcao;
}
//Menu Relatório.
int menu_relatorio (void){
  int opcao;
  system("cls||clear");
  printf("1 - Exibir Contas.\n");
  printf("2 - Exibir Relatório\n");
  scanf("%d",&opcao);
  return opcao;
}

void menu_sobre (void){
 //Adicionado e corrigido o nome do professor
  system("cls||clear");
  printf("Esse projeto foi desenvolvido por Adalberto Maia da Silva.(+55 84 9709-6080) e Brhemme da Cunha Prudêncio.(+55 84 98145-8282).\n" );
  printf("Durante o periódo letivo na UFRN - CAICÓ.\n");
  printf("Administrada pelo professor Flávius Gorgônio.\n");
  Sleep(1000);
  
}

