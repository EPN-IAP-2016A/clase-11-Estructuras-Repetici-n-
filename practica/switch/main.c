#include <stdio.h> 
#include <string.h>

int main() {
    int nroDia;
    char dia[10];
    char msg[20];
    printf("Ingrese dia de la semana: ");
    scanf("%d", &nroDia);

    switch(nroDia) {
        case 1:
        case 2:
        strcpy(msg, "Inicio de semana");
        break;
        case 3:
        strcpy(msg, "mitad de semana");
        break;
        case 4:        
        case 5:
        case 6:        
        case 7:
        strcpy(msg, "fin de semana");
        break;
    }
    
//    printf("%d es %s\n",nroDia,dia);
    printf("Es %s\n",msg);
    return 0;
}