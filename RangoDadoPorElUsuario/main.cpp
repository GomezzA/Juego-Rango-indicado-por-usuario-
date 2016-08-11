#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, s, perdio=0, b, jugo=0, r, a, ds, hs, i;
	float pc;

	printf("\tBIENVENIDOS!");
	printf("\n\nHay alguna persona que desee jugar?: S/N ");
	r=getch();
	r=tolower(r);
	printf("\n\nIngrese el rango:");
	printf("\n\nDesde: ");
	scanf("%d", &ds);
	printf("\nHasta: ");
	scanf("%d", &hs);
	
		
	
	while(r=='s'){
		jugo++;
		printf("\n\n\nIngrese un numero entero: ");
		scanf("%d", &n);
		
		a=(hs-ds)/2;
		i=a+ds;
		b=i+n;
		
	if(b>=ds && b<=hs){
		printf("\n\n\tGANADOR");
		printf("\nEl numero se encuentra dentro del rango.");
	}
	else{
		printf("\n\nLo sentimos, perdio.");
		printf("\nEl numero no se encuentra dentro del rango.");
		perdio++;
	}
	printf("\n\nDesea jugar otra vez?: S/N");
	r=getch();
	r=tolower(r);
	
	printf("\n\nLa mitad del rango es: %d", i);
}
	pc=(perdio*100)/jugo;
	printf("\n\nEl porcentaje de las veces que salio del rango es: %.2f", pc);
	system("pause");
	
	return 0;
	

}
