#include <string.h>
#include <stdio.h>


struct cadastro_usuario{
    char user[20];
    char passw[10];
    char nome[20];
}cadastro_usuario;

char cadastra_usr(){
    printf("Digite seu nome de usuário: ");
    printf("Padrão aceito(A-Z a-z 0-9)");
    gets(cadastro_usuario.user);
    preg_match('A-Za-z0-9', cadastro_usuario.user);
    printf("Digite a senha: ");
    printf("Padrão aceito(A-Z a-z 0-9)");
    gets(cadastro_usuario.passw);
    preg_match('A-Za-z0-9', cadastro_usuario.user);
    printf("Digite seu nome: ");
    printf("Padrão aceito(A-Z a-z)");
    gets(cadastro_usuario.nome);
    preg_match('A-Z a-z', cadastro_usuario.user);

    
}


