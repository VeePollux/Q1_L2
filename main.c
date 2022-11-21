#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "./libs/bib.h"


int main(){
Robot robot;
char string[1500];
int maxwidth, maxlength, end = 0;

while(end == 0){
    printf("Digite a largura e comprimento do ambiente: ");
    scanf("%d %d", &maxwidth, &maxlength);
    printf("Digite o caminho: ");
    scanf("%s", string);
    robotPath(robot,string,maxwidth, maxlength);
    printf("0 - Continuar\n1 - Sair\n");
    scanf("%d", &end);}

return 0;
}

