#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h" 

char* passgenerator(int charnumber) {

}


void opt1(int charnumber) {
    password alpha;
    char temp[100] = "/0";

    printf("\nInsere o nome da app\n->> ");
    while(getchar() != '\n');
    fgets(temp, sizeof(temp), stdin);

    alpha.app = (char*)malloc(sizeof(char) * (strlen(temp) + 1));
    strcpy(alpha.app, temp);
    strcpy(temp, "/0");

    printf("\nGerando uma password segura...\n");
    strcpy(temp, passgenerator(charnumber));

    alpha.pass = (char*)malloc(sizeof(char) * (strlen(temp) + 1));
    strcpy(alpha.pass, temp);

}

