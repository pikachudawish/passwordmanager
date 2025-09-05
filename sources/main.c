#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

#include "opt1.h"
#include "opt2.h"
#include "fileusage.h"

extern char *optarg;
extern int opterr;
extern int optopt;

int  main(int argc, char *argv[]) {
    int opt = 0;
    int charnumber = 0;
    bool end = false; bool special = false; bool M = false;

    int mode;
    while((mode = getopt(argc, argv, "hsmn:")) != -1) {
        switch(mode) {
            case 'h':
                printf("||MENU DE AJUDA||");  
                printf("  -h           mostra a ajuda para o utilizador e termina\n");
                printf("  -s           obriga a haver caractereres especiais     \n");  
                printf("  -m           obriga a haver, pelo menos, uma maiuscula \n");    
                printf("  -n number    numero de caracteres na password          \n");
                break;

            case 'n':
                charnumber = atoi(optarg);
                break;

            case 's':
                special = true;
                break;

            case 'm':
                M = true;
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

            case 3:
            end = true;
            break;
        }
    } while(!end);

    return 0;
}


