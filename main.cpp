#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "gestion.h"
#include "gestion.hpp"
#include "Persona.hpp"
#include "Usuario.hpp"
#include <iostream>


using namespace std;

void clear_if_needed(char *str);

#define MAX_LENGHT 50
#define ADMIN_IN "admin"
#define ADMIN_PASSWORD "admin"
#define USU_IN "usuario"
#define USU_PASSWORD "usuario"
#define MAX_PELICULAS 	5

int main(int argc, char **argv)
{
	int option;
	int total = 0;

	Pelicula peliculas[MAX_PELICULAS];
		

	if(argc < 3 || argc > 3)
	{
		printf("Se esperan recibir 3 argumentos. Ten en cuenta que se suma el nombre del archivo. \n");
		exit(1);
	}
	if(argc == 3)
	{		
		if(strcmp(argv[1],ADMIN_IN)==0 && strcmp(argv[2],ADMIN_PASSWORD)==0)
		{
			do
			{

				option = menuAdmin();

				switch (option)
				{
					case 1: 

						anyadirPelicula();				
						break;

					case 2: 
				
						listaPelicula();
						break;

					case 3: 
						
						ventas();						
						break;

					case 4:

						altaUsuario();
						break;

					default:
						return -1;
						break;
			
				}
			}while(option!=0);	

		}
		else if(strcmp(argv[1],USU_IN)==0 && strcmp(argv[2],USU_PASSWORD)==0)
		{
			do
			{

				option = menuUsuario();


				switch (option)
				{
					case 1:

					if (total < MAX_PELICULAS) 
					{
						alquilarPelicula(&peliculas[total], total);
						total++;
					} else
					{
						printf("No puedes alquilar mas peliculas\n");
					}
					break;	


					case 2: 
						listaPelicula();
						break;

					case 3: 				
						verComentarios();
						break;

					case 4: 
						
						comentarPelicula();
						break;
					case 5:
					
						imprimirAlquiladas(peliculas, total);
						break;

					default:
						return -1;
						break;
			
				}
			}while(option != 0);	
		}
		else
		{
			printf("Nombre y/o contraseña incorrectos\n");
			exit(1);
		}
	}
	return 0;


	
}

int menuAdmin(void)
{
	char str[MAX_LENGHT];
	int option;
	int len;
	do
	{

		printf("BIENVENIDO A VIDEOCLUB UD!!\n");
		printf("Indique su opcion: \n");
		printf("1. Anyadir pelicula\n");
		printf("2. Lista de peliculas \n");
		printf("3. Consultar ventas\n");
		printf("4. Alta usuario\n");
		printf("(q para salir)\n");
		printf("\n");

		fgets(str, 50, stdin);
		clear_if_needed(str); 

		len = sscanf(str, "%d", &option); 
		printf("\n");

	}while ((len == 0 && str[0] != 'q') || (len > 0 && (option > 4 || option < 1)));
	
	return (str[0] == 'q')?0:option;

}

int menuUsuario(void)
{
	char str[MAX_LENGHT];
	int option;
	int len;
	do
	{
		printf("\n");
		printf("BIENVENIDO A VIDEOCLUB UD!!\n");
		printf("Indique su opcion: \n");
		
		printf("1. Alquilar pelicula\n");
		printf("2. Lista de peliculas\n");
		printf("3. Ver comentarios \n");
		printf("4. Valorar pelicula\n");
		printf("5. Listado de peliculas alquiladas\n");
		printf("(q para salir)\n");
		printf("\n");
		
		fgets(str, 50, stdin);
		clear_if_needed(str); 

		len = sscanf(str, "%d", &option); 
		printf("\n");

	}while ((len == 0 && str[0] != 'q') || (len > 0 && (option > 5 || option < 1)));
	
	return (str[0] == 'q')?0:option;

}


void clear_if_needed(char *str)
{
	if (str[strlen(str) - 1] != '\n')
	{
		int c;    
    	while ( (c = getchar()) != EOF && c != '\n');
    }

}
void liberarMemoria(Pelicula *a, int total)
{
	int i;
	for (i = 0; i < total; i++)
		free(a[i].nombre);
}









