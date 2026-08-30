#include <stdio.h>

int main (){

float temperatura[24];
float temperaturaMaxima,temperaturaMinima,temperaturaLimite,promedio=0;
int numSupTemp; //numero de veces que se supera la temperatura limite
printf("Mi invernadero\n Control de tempertura durante el dia\n");
printf("Ingresa la temperatura limite que no deba superar el invernadero\n");
scanf("%f",&temperaturaLimite);

for(int i=0;i <= 23; i++){
  printf("Ingrese la temperatura de las %d 00:00\n", i);
  scanf("%f",&temperatura[i]);
}

temperaturaMaxima= temperatura[0];
temperaturaMinima= temperatura[0];

for(int i=0;i<=23;i++){
  promedio= promedio + temperatura[i];
  
  if(temperaturaMaxima < temperatura[i]){
    temperaturaMaxima = temperatura[i];
}

 if(temperaturaMinima > temperatura[i]){
   temperaturaMinima = temperatura[i];
}

if(temperatura[i] > temperaturaLimite){
  numSupTemp++;
 }
}

promedio = promedio/24;
printf("La temperatura maxima fue %f, la minima %f \n", temperaturaMaxima, temperaturaMinima);
printf("El promedio de temp es 	%f y la temp limite se supero %d veces", promedio, numSupTemp);
}
