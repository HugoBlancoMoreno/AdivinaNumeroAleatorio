#include <iostream>
#include <time.h>
#include <stdlib.h>

main(){
	
	int aleatorio, numero, intentos;
	
	srand(time(NULL));
	aleatorio=rand()%(1-100);
	
	do{
		
		printf("\nAcertaras el numero?: ");
		scanf("%d", &numero);
		
		if(numero>aleatorio){
			printf("\nEl numero es menor\n");
		}else{
			printf("\nEl numero es mayor\n");
		}
		
		intentos++;
		
	}while(numero != aleatorio);
	
	printf("Adivinaste el numero");
	printf("\nNumero de intentos: %d\n\n", intentos);
	system("pause");
}
