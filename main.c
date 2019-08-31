#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "menus.h"
#include <ctype.h>
#include <locale.h>


int main(void) {
        setlocale(LC_ALL, "Portuguese");        
  int opcao,opcaologin;
  do{
    opcao = imp_menu();
    switch (opcao) {
      case 1 : opcao = menu_Contas();
              break;
      case 2 : opcao = menu_manuCasa();
              break;
      case 3 : menu_sobre();
              break;
      case 4 : opcao = menu_Cadastro();
              break;
      case 5 : opcao = menu_relatorio();
              break;
      case 0: break;

      default : 
                
                printf("Digite um numero valido");
                Sleep(300);
              
    }
  }while (opcao != 0);
      
  return 0;
}

