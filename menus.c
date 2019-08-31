#include <stdio.h>
#include <stdlib.h>
#include <string.h>



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

int menu_Cadastro (void){

    /*definir nome estrutura e não declarar */
    struct Agenda
    {
    char nome[50];       //nome
    char senha[30];      //senha
    int login;                //login do usúario//
    }

     //declarar estrutura //
     struct Agenda Cadastro;      /// Cadastro é o nome da estrutura *//

  Cadastro.nome;
  Cadastro.senha;
  Cadastro.login;

  int opcao=1;
    do {
           printf("\t------------------------");
           printf("\t CADASTRAR NOVO USUÁRIO.");
           printf("\t------------------------");
           printf("\n\n\n");
           printf("Nome do usuário: ");
           fgets(cadastro.nome,30,stdin);
           printf("Login do usuário: ");
           fgets(cadastro.login,5,stdin);
           printf("Digite a Senha do usuário no máximo 12 números. (apenas números) ");
           fgets(cadastro.senha,12,stdin);
           fflush(sdtin);
        if 
         printf("Formato de senha incorreta!")
    

           printf("Digite "1" para Novo Cadastro ou " 0 " para sair: ");
           scanf("%d", &opcao);
        
    }
           while (opcao==1);

          return 0;
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

