#include <stdio.h>
#include <stdlib.h>
#include "menus.h"
 

int main(void) {
  int opcao;
  do{
    opcao = imp_menu();
  	switch (opcao) {
	    case 1 : opcao = menu_Contas();
               break;
      case 2 : opcao = menu_manuCasa();
               break;
      case 3 : menu_sobre();
               break;
      case 4 : opcao = menu_relatorio();
               break;
      default :
            printf("Digite um numero valido");
  }
  
  }while (opcao != 0);  
  
  return 0;
}
