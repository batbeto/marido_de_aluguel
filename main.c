#include <stdio.h>
#include <code.h>
#include <menus.h>

int main(void) {
  int opcao;
  opcao = imp_menu();
  while (opcao != 0) {
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
    opcao = imp_Menu();
  }
  return 0;
}
