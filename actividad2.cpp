/************PRESENTACION************
 NOMBRE: Victor Hugo Gutierrez Alvarado
 FECHA: 26/ENERO/2024
 PROGRAMA: Actividad2.cpp
 CENTRO UNIVERSITARIO DE LOS ALTOS/ UNIVERSIDAD DE GUADALAJARA
 INGENIERIA EN COMPUTACIón/ 2do SEMESTRE
 PROFESOR: Carlos Javier Cruz Franco
 DESCRIPCION: EL programa pedira datos para verficar el uso de los diferentes secuencias de escape y 
 el control de tipo de salida.
***************************************/
#include <stdio.h>
int ent;
char pala[20], carac;
float dec, suma,division,multiplicacion;
int main (){
printf("hola como estas\?\n");
printf("por favor ingrese un numero entero\n");
scanf("%d",&ent);
printf("Ingrese un numero con decimal\n");
scanf("%f",&dec);
printf("Ingresa una palabra\n");
scanf("%s",pala);
suma=dec+ent;
division=ent/dec;
multiplicacion=ent*dec;
printf("el numero que ingresaste fue:\t%d\n", ent);
printf("el numero decimal que ingresaste fue:\t%f\n",dec);
printf("Y la suma de estos numeros son\t%f\n",suma);
printf("la multiplicacion es:\t%f\n",multiplicacion);
printf("la division de esos numero es\t%f\n",division);
printf("La palabra que ingresaste fue:\t\"%s\"\n\n",pala);
printf("una cancion\n\n");
printf("Para todas las chicas lindas\v\rEn especial para mi corazoncito\v\rQué linda flor, qué hermosa flor, qué linda flor\v\rQué hermosa flor es esa chiquilla, esa chiquilla\v\rQué linda flor, qué hermosa flor, qué linda flor\v\rQué hermosa flor es esa chiquilla, esa chiquilla\n\n");
printf("O quieres otra cancion\n\n");
printf("We could leave the Christmas lights up 'til January\v\rAnd this is our place, we make the rules\v\rAnd there's a dazzling haze, a mysterious way about you dear\v\rHave I known you 20 seconds or 20 years?\v\rCan I go where you go?\v\rCan we always be this close forever and ever?\v\rAnd ah, take me out, and take me home\v\rYou're my, my, my, my\v\rLover\v\r");

}