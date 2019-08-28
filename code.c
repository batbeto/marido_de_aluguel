#include <string.h>
#include <stdio.h>
#include <regex.h>


struct cadastro_usuario{
    char user[20];
    char passw[10];
    char nome[20];
}cadastro_usuario;



int validar_user(cadastro_usuario){

}

char cadastra_usr(){
    const char* re = "[A-Za-z1-9]+";
    printf("Digite seu nome de usuário: ");
    printf("Padrão aceito(A-Z a-z 0-9)");
    gets(cadastro_usuario.user);
    if (match(re, cadastro_usuario.user)){
        printf("Digite a senha: ");
        printf("Padrão aceito(A-Z a-z 0-9)");
        gets(cadastro_usuario.passw);
        if (match(re, cadastro_usuario.passw)){
            printf("Digite seu nome: ");
            printf("Padrão aceito(A-Z a-z)");
            gets(cadastro_usuario.nome);
            if (match(re, cadastro_usuario.nome)){
                printf("Usuario cadastrado!");
            }else{
                printf("Nome invalido! ");
            }
        }else{
            printf("Senha invalida! ");
        }
    }else {
        printf("Usuario invalido! ");
    }
    
}




