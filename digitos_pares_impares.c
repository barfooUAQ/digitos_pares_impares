#include<stdio.h>
int main(){
  int numero,centenas,decenas,unidades;
  printf("Proporcione un numero entero de 3 digitos: ");
  scanf("%d",&numero);
  if(numero>999||numero<100){
    printf("\nEl numero propocionado no es valido\n");
  }
  else{
    centenas=numero/100;
    decenas=(numero-centenas*100)/10;
    unidades=numero-((centenas*100)+(decenas*10));

    printf("%d es ",centenas);
    if(centenas%2==0){printf("par\n");}
    else{printf("impar\n");}

    printf("%d es ",decenas);
    if(decenas%2==0){printf("par\n");}
    else{printf("impar\n");}

    printf("%d es ",unidades);
    if(unidades%2==0){printf("par\n");}
    else{printf("impar\n");}
  }
}
