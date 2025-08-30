#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* app;
    char* pass;
} password;

void opt1();
void opt2();
void passgenerator();

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
    password pass;
    char temp[100] = "/0";

    printf("\n aaaaaaaaaa");



}

void passgenerator() {

}


void opt2() {

}