#include <stdio.h>
#include <stdlib.h>
#include "menus.h"
 

int main(void) {
  int opcao,opcaologin;
  do{
    opcaologin = menu_princ();
    switch (opcaologin){
      case 1 : cadastro_cliente();
              break;
      case 2 : login_cliente();
              if (login_cliente()){
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
                                  break;
      
                    }while (opcao != 0);
    case 0 : exit(0);
    }
  }while(opcaologin != 0);
      
  
  return 0;
}
