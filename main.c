#include <stdio.h>
#include <code.h>
#include <menus.h>

int main(void) {
  int opcao;
  opcao = imp_menu();
  while (opcao != 0) {
    switch (opcao) {
      case 1 : contas = menu_Contas();
               break;
      case 2 : manutencao = menu_manuCasa();
               break;
      case 3 : menu_sobre();
               break;
    }
    opcao = imp_Menu();
  }
  return 0;
}




}