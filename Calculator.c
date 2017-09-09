#include <stdio.h>
int main(){

	float resultado, num1, num2;
	int opc, son;

	printf("\nCalculadora Yaxtron2000\n\n");

	while (1){ 
		printf("o p e r a c i o n e s \n");
		printf("( 1 ) Suma \n");
		printf("( 2 ) Resta \n");
		printf("( 3 ) Multiplicación \n");
		printf("( 4 ) División \n");
		printf("( 5 ) Salir\n");
		printf("Escoja el número de su opción y presione enter \n");
		scanf("%d", &opc);
		printf("\n");

		if (opc == 1 || opc == 2 || opc == 3 || opc == 4){
			printf("Inserte los dos numeros\n");
			scanf("%f %f", &num1, &num2);
			printf("\n");

			if (opc == 1){
				resultado = num1 + num2;
			}else{
				if (opc == 2){
					resultado = num1 - num2;
				}
				else{
					if(opc == 3){
						resultado = num1 * num2;
					} else { 
						if(opc == 4){
							resultado = num1 / num2;
						}
					}
				}
			}
			printf("El resultado es: %f \n\n", resultado);
			printf("¿Desea realizar otra operación?\n");
			printf("( 1 ) Si \n");
			printf("( 2 ) No \n");
			scanf("%d", &son);
			if(son == 1){
				continue;
			}else{
				break;
			}
		}else{
			if(opc == 5){
				break;
			} else {
				printf("Opción no válida\n\n");
				break;
			}
		}
		break;
	}
	return 0;
}