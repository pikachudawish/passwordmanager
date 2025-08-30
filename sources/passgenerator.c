#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

extern char *optarg;
extern int opterr;
extern int optopt;

typedef struct {
    char* app;
    char* pass;
} password;

void opt1(int charnumber);
void opt2();
char* passgenerator(int charnumber);
void usefile();

int  main(int argc, char *argv[]) {
    int opt = 0;
    int charnumber = 0;
    bool end = false;

    int mode;
    while((mode = getopt(argc, argv, "hn:")) != -1) {
        switch() {
            case 'h':
                printf("||MENU DE AJUDA||");  
                printf("  -h           mostra a ajuda para o utilizador e termina\n");  
                printf("  -n number    numero de caracteres na password          \n");
                break;

            case 'n':
                charnumer = atoi(optarg);
                break;
            
            default:
                return 1;
        }
    }

    printf("\n// PASSWORD MANAGER \\\\ \n\n");

    do {
        do{
            printf("Options:\n1- Criar Password\n2- Ver passwords\n3- Exit\n->> ");
            if(scanf("%d", &opt) != 1 || opt < 1 || opt > 3) {
                printf("\nInvalid Output! Escolhe entre a opçao 1, 2 e 3!\n\n");
            } else {
                break;
            }
        }while(1);

        switch(opt) {
            case 1:

            opt1(charnumber);
            
            break;



            case 2:

            break;

            case 3;
            end = true;
            break
        }
    } while(!end);

    return 0;
}

void opt1(int charnumeber) {
    password alpha;
    char temp[100] = "/0";

    printf("\nInsere o nome da app\n->> ");
    while(getchar() != '\n');
    fgets(temp, sizeof(temp), stdin);

    alpha.app = (char*)malloc(sizeof(char) * (strlen(temp) + 1));
    strcpy(alpha.app, temp);
    temp = "/0";

    printf("\nGerando uma password segura...\n");
    strcpy(temp, passgenerator(charnumber));

    alpha.pass = (char*)malloc(sizeof(char) * (strlen(temp) + 1));
    strcpy(alpha.pass, temp);

}

char* passgenerator(int charnumber) {

}

void usefile() {
    
}


void opt2() {

}