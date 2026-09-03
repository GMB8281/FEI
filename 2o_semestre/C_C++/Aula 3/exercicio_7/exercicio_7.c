#include<stdio.h>
#include <string.h> // necessario para comparar strings
// em C, não é possivel declarar string diretamente
// é necessario usar um array, um "vetor" de caracteres
// por isso     char login="admin"; char password="123456"; esta errado
int main(){
    char login[]="admin";
    char password[]="123456";
    char user_input_login[20];
    char user_input_password[20];
    printf("Digite o usuário: ");
    scanf("%s",&user_input_login);
    printf("Digite a senha: ");
    scanf("%s",&user_input_password);

    if (strcmp(user_input_login, login) == 0 && strcmp(user_input_password, password) == 0) {
        printf("Logado!\n");
    } else {
        printf("Usuário ou senha incorretos!\n");
    }
}

//refazer depois