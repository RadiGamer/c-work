#include <stdio.h>

int main()
{
    int depreciacion, depreciaciona, valor, ano, printfcantidad;
    
    printfcantidad=0;
    depreciaciona=0;
    
    printf("Inserte su valor de depreciacion:\n");
    scanf (" %d", &depreciacion);

    printf("\nInserte su valor total\n");
    scanf (" %d", &valor);
    
    printf("\nInserte su año de inicio\n");
    scanf (" %d", &ano);
    
    while(printfcantidad<=10){
    
    depreciaciona=depreciaciona+depreciacion;
    valor=valor-depreciacion;
    
    printf("Ano      Depreciacion      Depreciacion Acumulada      Valor Anual");
    printf("\n");
    printf("%d      %d                  %d           %d",ano++, depreciacion, depreciaciona+depreciacion, valor-depreciacion);
     printf("\n");
     
    
    
    printfcantidad++;
    
        }return 0;
    
}
