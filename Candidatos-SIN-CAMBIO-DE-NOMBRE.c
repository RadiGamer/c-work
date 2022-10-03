#include<stdio.h>
#define CANDIDATOSCUENTA
#define CANDIDATO1 "El Profe"
#define CANDIDATO2 "EPN"
#define CANDIDATO3 "AMLO"
int cuentavotos1=0;
int cuentavotos2=0;
int cuentavotos3=0;
void darvoto(){
    
   int eleccion;
   printf("\n\n Vote por alguien\n\n");
   printf("\n 1. %s", CANDIDATO1);
   printf("\n 2. %s", CANDIDATO2);
   printf("\n 3. %s", CANDIDATO3);
   printf("\n4. %s", "Ninguno");
   printf("\nPor favor digite el numero de su eleccion ");
   scanf("%d",&eleccion);
   switch(eleccion){
      case 1: cuentavotos1++; break;
      case 2: cuentavotos2++; break;
      case 3: cuentavotos3++; break;
      default: printf("\n Error");
      getchar();
   }
}
void conteovotos(){
   printf("\n\n Votos");
   printf("\n %s - %d ", CANDIDATO1, cuentavotos1);
   printf("\n %s - %d ", CANDIDATO2, cuentavotos2);
   printf("\n %s - %d ", CANDIDATO3, cuentavotos3);
}
int main(){
   int i;
   int eleccion;
   do{
      printf("\n\n 1. Votar");
      printf("\n 2. Conocer votos");
      printf("\n 0. Salir");
      printf("\n Por favor elija una opcion ");
      scanf("%d", &eleccion);
      switch(eleccion){
         case 1: darvoto();break;
         case 2: conteovotos();break;
         default: printf("\n Error");
      }
   }while(eleccion!=0);
   getchar();
   return 0;
}
