#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i, j, n, moda, sqrt, aux, freq, c;
	float v[20], vOrdenado[20], mediaA = 0,  mediaH = 0, maior, menor, vModa[20], modamaior;
	double mediaG = 1;
	int k = 19;
	
	for(i=0;i<20;i++){
		scanf("%f", &v[i]);
		mediaA+= v[i];
		mediaG*= v[i];
		mediaH+= 1/v[i];
		
		if( i == 0){
			menor = v[i];
			maior = v[i];
		}
		
		if( v[i] > maior){
			maior = v[i];
		} else if ( v[i] < menor){
			menor = v[i];
		}	
	}
		
		printf("Moda \n");      
		for (i=0;i<20;i++) {		
		c=1;
		for(j=i+1;j<20;j++){
			if (v[i] == v[j]){
				c++; 
			}
		vModa[i] = c;
		
		if (vModa[i] > modamaior){
			modamaior = v[i];
		}
		}
	}
	
	printf("MODA MAIOR %f \n", modamaior);
		
	for(i = 0; i < 20; i++,k--){
	    for(j = 0; j < k; j++){
	        if(v[j] > v[j+1]){
	            aux = v[j];
	            v[j] = v[j+1];
	            v[j+1]=aux;
	        }
	     }
	  }
	  

	
    mediaA = mediaA/20;
	printf("Media Aritmetica: %f \n", mediaA);
	
	mediaG = pow(mediaG, 1.0/20.0);
	printf("Media Geometrica: %lf \n", mediaG);	
	
	printf("Media Harmonica: %f \n", (20/mediaH));	
	
	printf("Maior: %f \n", maior);	
	printf("Menor: %f \n", menor);	
	
	printf("Vetor ordenado: \n");	
	for(i=0;i<20;i++){
		printf(" %.2f", v[i]);	
	}
	
	printf("\n");
	return 0;
}
