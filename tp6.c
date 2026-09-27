#include <stdio.h>

#define PI 3.141592

float calcularAreaRectangulo(float longitud, float altura);
float calcularPerimetroRectangulo(float longitud, float altura);
float calcularAreaCirculo(float radio);
float calcularPerimetroCirculo(float radio);
void imprimirResultado(float area, float perimetro);

int main(void) {
	int opcion = 0;
	float longitud = 0.0f, altura = 0.0f, radio = 0.0f;
	float area = 0.0f, perimetro = 0.0f;
	
	printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo):");
	if (scanf("%d",&opcion)!= 1){
		printf("Error en la entrada de datos.\n");
		return 1;
	}
	
	while(opcion != 1 && opcion != 2){
		printf("Opcion incorreacta. Ingrese 1 para rectangulo o 2 para circulo");
		while (getchar() != '\n');
		scanf("%d", &opcion);
	}
	
	if (opcion==1){
		printf("Opcion de resctangulo seleccionado\n");
		printf("Ingrese la longitud del rectangulo:");
		scanf("%f", &longitud);
		printf ("Ingrese la altura del rectangulo:");
		scanf("%f", &altura);
			
		area = calcularAreaRectangulo(longitud, altura);
		perimetro = calcularPerimetroRectangulo(longitud, altura);
			
		imprimirResultado(area, perimetro);
	}else {
		printf("Opcion de circulo seleccionada\n");
		printf("Ingrese el radio del circulo:");
		scanf("%f", &radio);
		
		area = calcularAreaCirculo(radio);
		perimetro = calcularPerimetroCirculo(radio);
			
		imprimirResultado(area, perimetro);
	}

	return 0;
	
}
float calcularAreaRectangulo(float longitud, float altura) {
	return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura) {
    return 2.0f * (longitud + altura);
}

float calcularAreaCirculo(float radio) {
	return(float)(PI * radio * radio);
}

float calcularPerimetroCirculo(float radio) {
	return(float)(2.0f * PI * radio);
}

void imprimirResultado(float area, float perimetro){
	printf("El area es: %.2f\n", area);
	printf("El perimetro es: %.2f\n", perimetro);
}
