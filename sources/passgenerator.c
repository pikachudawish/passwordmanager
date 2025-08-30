#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* app;
    char* pass;
} password;

void opt1();
void opt2();
char* passgenerator();
void usefile();

int  main() {
    int opt = 0;

    printf("\n// PASSWORD MANAGER \\\\ \n\n");
    do{
        printf("Options:\n1- Criar Password\n2- Ver passwords\n->> ");
        if(scanf("%d", &opt) != 1 || opt < 1 || opt > 2) {
            printf("\nInvalid Output! Escolhe entre a opçao 1 e 2!\n\n");
        } else {
            break;
        }
    }while(1);

    switch(opt) {
        case 1:

        opt1();
        
        break;



        case 2:

        break;
    }


    return 0;
}

void opt1() {
    password alpha;
    char temp[100] = "/0";

    printf("\nInsere o nome da app\n->> ");
    while(getchar() != '\n');
    fgets(temp, sizeof(temp), stdin);

    alpha.app = (char*)malloc(sizeof(char) * (strlen(temp) + 1));
    strcpy(alpha.app, temp);
    temp = "/0";

    printf("\nGerando uma password segura...\n");
    strcpy(temp, passgenerator());

    alpha.pass = (char*)malloc(sizeof(char) * (strlen(temp) +1));
    strcpy(alpha.pass, temp);


}

char* passgenerator() {

}

void usefile() {
    
}


void opt2() {

}