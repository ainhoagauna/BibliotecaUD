#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGHT 50

typedef struct
{
	char nombre;
	char genero;
	double precio;
	double valoracion;
	//bool alquilado;


}Pelicula;


void clear_if_needed(char *str)
{
	if (str[strlen(str) - 1] != '\n')
	{
		int c;    
    	while ( (c = getchar()) != EOF && c != '\n');
    }
}

int menu(void)
{
	char str[MAX_LENGHT];
	int option;
	int len;
	do{

	printf("BIENVENIDO A VIDEOCLUB UD!!\n");
	printf("Indique su opcion: \n");
	printf("1. Anadir pelicula\n");
	printf("2. Eliminar pelicula\n");
	printf("3. Lista de peliculas \n");
	printf("4. Consultar ventas\n");
	printf("(q para salir)\n");
	printf("\n");

	fgets(str, 50, stdin);
	clear_if_needed(str); 


	len = sscanf(str, "%d", &option); //esto es apra que en caso de un numero metemos un String ppor ejemplo,en vez de dar error devuelve un 0 ( no puede transformar un String a un Integer)
	printf("\n");

	}while ((len == 0 && str[0] != 'q') || (len > 0 && (option > 4 || option < 1)));
	
	return (str[0] == 'q')?0:option;

}

void leerPelicula();
void eliminarPelicula();
void imprimirListado();
void CalcularVentas();

int main(void)
{
	int option;
	int total=0;
	Pelicula peliculas[MAX_LENGHT];

	do{

	option=menu();


	switch (option)
		{
			case 1: 

				{
					printf("Primera opcion\n");
					//leerPelicula(&peliculas[total], total); //el total nos señala la posicion del array, y con el & cogemos su direccion
					//total++;
				}
				
				break;

			case 2: //eliminarPelicula();
			printf("segunda opcion\n");
				break;


			case 3: 
				printf("tercera opcion\n");
			//imprimirListado(peliculas, total); //le pasamos el array, pero esto no pasa el tamaño que tiene por tanto debemos pasar otro parametro que en este caso es total
				break;

			case 4: 
			printf("cuarta opcion\n");
			//printf("Ventas:%.2f\n", CalcularVentas(peliculas, total));
				break;

			default:
				return -1;
				break;

			
		}
	}while(option>4 | option<1);

	

	return 0;
}




