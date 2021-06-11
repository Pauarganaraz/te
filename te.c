#include <stdio.h>

int main(){

int saquitoTe = 0;
int aguaCaliente = 0;
int cucharasAzucar= 0;

printf(" Seleccione cantidad de sacos de te\n");
scanf ( "%d", &saquitoTe) ;

printf(" Seleccione cantidad de agua caliente en ml\n");
scanf ( "%d", &aguaCaliente) ;

printf(" Seleccione cantidad de cucharadas de azucar \n");
scanf ( "%d", &cucharasAzucar) ;

printf("has agregado %d saquito de te en , %d de agua con,  %d  de azucar \n", saquitoTe , aguaCaliente , cucharasAzucar );

	/* code */
	return 0;
}
