#include <stdlib.h>
#include <stdio.h>

int main() {
	int tipo;
	float temp, c, k, r, f;
	printf("Informe a temperatura em graus\n");
	scanf("%f", &temp);
	printf("Escolha a unidade de temperatura\n 1 - Celsius\n 2 - Rankine\n 3 - Kelvin\n 4 - Fahrenheit\n");
	scanf("%d", &tipo);	

  switch(tipo){
     case 1 : printf("A escala escolhida foi 'Celsius'\n"); 
     		  printf("Temperatura convertida: \n");
			  printf("1 - Celsius     %15f\n", temp);
	 		  printf("2 - Rankine     %15f\n", ((temp - 491.67))/ 1.8000);
    		  printf("3 - Kelvin      %15f\n", (temp + 273.15));
    		  printf("4 - Fahrenheit  %15f\n", ((temp * 1.8000)) + 32);
     break;
 
     case 2 : printf("A escala escolhida foi 'Rankine'\n"); 
     		  printf("Temperatura convertida: \n");
			  printf("1 - Celsius     %15f\n", ((temp - 491.67) / 1.800) );
	 		  printf("2 - Rankine     %15f\n", temp);
    		  printf("3 - Kelvin      %15f\n", ((temp - 491.67) / 1.800) + 273.15);
    		  printf("4 - Fahrenheit  %15f\n", (temp -  491.67)  + 32.00 );
     break;
 
     case 3 : printf("A escala escolhida foi 'Kelvin'\n"); 
     		  printf("Temperatura convertida: \n");
			  printf("1 - Celsius     %15f\n", (temp - 273,15));
	 		  printf("2 - Rankine     %15f\n", (((temp - 273.15) * 1.8000 )+ 491.67));
    		  printf("3 - Kelvin      %15f\n", temp);
    		  printf("4 - Fahrenheit  %15f\n", (((temp - 273.15)* 1.8000) + 32.00) );
     break;
 
     case 4 : printf("A escala escolhida foi 'Fahrenheit'\n"); 
     		  printf("Temperatura convertida: \n");
			  printf("1 - Celsius     %15f\n", ((temp - 32) / 1.800));
	 		  printf("2 - Rankine     %15f\n", ((temp - 32) + 491.67));
    		  printf("3 - Kelvin      %15f\n", (((temp - 32) / 1.800) + 273.15));
    		  printf("4 - Fahrenheit  %15f\n", temp);
     break;
  
     default : printf ("Valor invalido!\n");
  }

	return 0;
}


