/* Autor: Andriks Imanol Ruiz M�rtinez, Realizado: 24/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programaci�n Estructrada
Ciclo: 01/2022

Este es un programa de ciclos y condicionales en Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:

    -Variables flotantes y enteras
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librer�as
    -Ciclos
    -Contador
    -Condicionales
    -Comentarios para la documentaci�n interna del programa
*/
#include<stdio.h>
int main(){
	//Declaraci�n de variables
	int i=0;
	float f,c;
	//ciclo
	do{
		printf("Introduce la temperatura en Centigrados: ");
		scanf("%f",&c);
			if(c<999){ //Condicional
				f=(9/5.0*c)+32;
				i++;
				printf("La temperatura en Fahrenheit es %.2f \n", f); //Salida
			} 
			if(c==999){
				printf("No es valido\n");
			}
	}while(c<999);
	printf("Finalizado");
	return 0;
}
