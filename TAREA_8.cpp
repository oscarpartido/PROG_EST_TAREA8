/*AUTOR: OSCAR VIVALDI PARTIDO RAMIREZ, REALIZADO EL DIA 10/02/2022 

programa para que le pedira al autor escribir el precio neto de cada 
ejemplar de la novela y el numero estimado de ejemplares que vendera 
imprimir las regalias en cada opcion y la mejor opcion que el autor
 podra escoger
*/

#include <stdio.h>

int main(){
	// declarar variables 
	float ejemplares,precioNeto,valorUno,valorDos;
	float totalPrimeraOpcion, totalSegundaOpcion, totalTerceraOpcion;
	
	printf("Introduzca el precio Neto de cada Ejemplar:");
	scanf("%f",&precioNeto);
	
	printf("Introduzca el numero estimado de ejemplares que Vendera:");
	scanf("%f",&ejemplares);
	
	//proceso
	totalPrimeraOpcion=25000;
	totalSegundaOpcion=(precioNeto*0.12)*ejemplares;
	

if (ejemplares<=4000){
	totalTerceraOpcion=(precioNeto*0.10)*ejemplares;
}
	
	
else
valorUno=(precioNeto*0.10)*4000;
valorDos=(precioNeto*0.14)*(ejemplares-4000);
totalTerceraOpcion=valorUno+valorDos;




printf("primera opcion: %f\n",totalPrimeraOpcion);
printf("segunda opcion:%f\n",totalSegundaOpcion);
printf("tercera opcion:%f\n",totalTerceraOpcion);

if (totalPrimeraOpcion>=totalSegundaOpcion && totalPrimeraOpcion>=totalTerceraOpcion){
	printf("la primera opcion te da mayor regalia: %f", totalPrimeraOpcion);
}
if(totalSegundaOpcion>=totalTerceraOpcion && totalSegundaOpcion>= totalPrimeraOpcion){
	printf("la segunda opcion te da mayor regalia:%f",totalSegundaOpcion);
}
if (totalTerceraOpcion>=totalPrimeraOpcion && totalTerceraOpcion>=totalSegundaOpcion ){
	printf("la tercera opcion te da mayor regalia: %f", totalTerceraOpcion);
}
	return 0;
}

