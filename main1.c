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
	


}Pelicula;


void anadirPelicula();


void clear_if_needed(char *str)
{
	if (str[strlen(str) - 1] != '\n')
	{
		int c;    
    	while ( (c = getchar()) != EOF && c != '\n');
    }
}

void anadirPelicula()
{

	char* str;
	int d;
	FILE* f;
	f=fopen("peliculas.txt", "a");

	if(f==NULL)
	{
		printf("Archivo no encontrado\n");
		//return -1;
	}

	printf("Introduzca los datos de la nueva pelicula: \n");
	printf("NOMBRE: \n");
	fgets(str, MAX_LENGHT, stdin);
	clear_if_needed(str);
	fprintf(f, "%s", str);
	
	printf("GENERO: \n");
	fgets(str, MAX_LENGHT, stdin);
	clear_if_needed(str);
	fprintf(f, "%s", str);
	

	printf("PRECIO: \n");
	fgets(str, MAX_LENGHT, stdin);
	clear_if_needed(str);
	fprintf(f, "%s", str);
	

	printf("VALORACION: \n");
	fgets(str, MAX_LENGHT, stdin);
	clear_if_needed(str);
	fprintf(f, "%s\n", str);
	

	printf("PELICULA ANADIDA!!\n");
	printf("\n");



	fclose(f);


}

void listaPelicula()
{


	FILE* f;
	f=fopen("peliculas.txt", "r");

	if(f==NULL)
	{
		printf("Archivo no encontrado\n");
	}
	
	char str[70];
  	int d;

  	printf("PELICULAS ACTUALES: \n");
  	while(fgets(str, 100, f)) { //recorrer hasta que lea un 0
    
   
   	printf("%s", str);

    clear_if_needed(str); //siempre antes del siguiente fgets
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


	len = sscanf(str, "%d", &option); 
	printf("\n");

	}while ((len == 0 && str[0] != 'q') || (len > 0 && (option > 4 || option < 1)));
	
	return (str[0] == 'q')?0:option;

}



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

				anadirPelicula();				
				break;

			case 2: //eliminarPelicula();
			
				break;


			case 3: 
				
				listaPelicula();
				break;

			case 4: 
			printf("cuarta opcion\n");
			//printf("Ventas:%.2f\n", CalcularVentas(peliculas, total));
				break;

			default:
				return -1;
				break;

			
		}
	}while(option!=0);

	

	return 0;
}




