#include <stdio.h>
#include <stdlib.h>
#include "menus.h"
 

int main(void) {
  int opcao;
  opcao = imp_menu();
  do{
  	switch (opcao) {
	  case 1 : menu_Contas();
               break;
      case 2 : menu_manuCasa();
               break;
      case 3 : menu_sobre();
               break;
      case 4 : menu_relatorio();
               break;
  }
  
  }while (opcao != 0);  
  
  return 0;
}
