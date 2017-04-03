#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "gestion.h"

#define MAX_LENGHT 50

void clear_if_needed(char *str);

void ventas()
{
	FILE* f;

	f=fopen("peliculas.txt", "r");

	if(f==NULL)
	{
		printf("Archivo no encontrado\n");
		
	}


	char str[30];

	float e;
	
	float suma;

	while(fgets(str, 50, f))
   {
   	
       if(sscanf(str, "%f", &e)!=0)
      {
       		suma=suma+e;

       		printf("%.2f\n", e );
       }
    }



    printf("El precio total de las peliculas es: %.2f\n", suma );
    printf("\n");
}
void listaPelicula()
{
	FILE *f;
	f = fopen("peliculas.txt", "r");

	if(f==NULL)
	{
		printf("Archivo no encontrado\n");
	}
	
	char str[70];
  	int d;

  	printf("PELICULAS ACTUALES: \n");
  	while(fgets(str, 100, f)) 
  	{ 
  		//recorrer hasta que lea un 0
      
   		printf("%s", str);

    	clear_if_needed(str); //siempre antes del siguiente fgets
 	}

}

int buscarPelicula(char* palabra)
{
	FILE *f;
	f = fopen("peliculas.txt", "r");

	char texto[80];

    int i,tmp1,tmp2,konta=0;

	while (feof(f)==0)

      {
      	
            fgets(texto,80,f);

            for(i=0;i<strlen(texto);i++)

            {

               if (palabra[0]==texto[i])

               {
               		
                  tmp1=0;

                  tmp2=i;

                  while ((palabra[tmp1]==texto[tmp2])&&(tmp2<strlen(texto))&&(tmp1!=strlen(palabra)))

                  {
                        tmp1++;

                        tmp2++;

                        if (tmp1==strlen(palabra))

                           konta++;
                       
                  }
               }
            }


            
      }

     if(konta>0)
      {
      	printf("Ya existe una pelicula registrada con ese nombre\n");
      	printf("Introduzca los datos de la nueva pelicula: \n");
		printf("NOMBRE: \n");
		gets(palabra);
      	buscarPelicula(palabra);
      	

      }

      fclose(f);
}

void anyadirPelicula()
{
	char *str;
	int d;
	char palabra[30];
	FILE *f;
	f = fopen("peliculas.txt", "a");
	

	if(f==NULL)
	{
		printf("Archivo no encontrado\n");
		exit(1);
	}

	printf("Introduzca los datos de la nueva pelicula: \n");
	printf("NOMBRE: \n");
	
	gets(palabra);
	
	buscarPelicula(palabra);
	fprintf(f, "%s\n", palabra);

	printf("GENERO:\n");
	gets(palabra);
	fprintf(f, "%s\n", palabra);

	printf("PRECIO:\n");
	printf("(Sin el signo del euro)\n" );
	gets(palabra);
	fprintf(f, "%s\n", palabra);

	printf("VALORACION:\n");
	printf("Muy mala/ Mala/Regular/Buena/Excelente\n");
	gets(palabra);
	fprintf(f, "%s\n", palabra);


	printf("PELICULA ANADIDA!!\n");
	printf("\n");

	fclose(f);

}
int compararPelicula(char* palabra)
{
	FILE *f;
	f = fopen("peliculas.txt", "r");

	char texto[80];
	

    int i,tmp1,tmp2,konta=0;

   

	while (feof(f)==0)

      {
      	
            fgets(texto,80,f);

            for(i=0;i<strlen(texto);i++)

            {

               if (palabra[0]==texto[i])

               {
               		
                  tmp1=0;

                  tmp2=i;

                          

                  while ((palabra[tmp1]==texto[tmp2])&&(tmp2<strlen(texto))&&(tmp1!=strlen(palabra)))

                  {
                        tmp1++;

                        tmp2++;

                        
                        if (tmp1==strlen(palabra))
                        {
						
                        	konta++;
                        }
                                                
                  }
               }
            }  
      }

       if(konta>0)
        {
        	printf("Pelicula alquilada!\n");
	      	
        }
        else
        {
        	printf("Vuelva a intentarlo \n");
	      	gets(palabra);
	      	compararPelicula(palabra);
        }
     

      fclose(f);
}
void alquilarPelicula(Pelicula *a, int total)
{
	char palabra[30];

		printf("Introduzca el titulo de la pelicula que desea alquilar: \n");
		gets(palabra);
		compararPelicula(palabra);
		printf("Peliculas alquiladas: (%d)\n", total + 1);
		printf("\n");  
		
}



/*
void eliminarPelicula()
{
	FILE *file, *fileAux;
	Pelicula pelicula;

	fileAux = fopen("peliculas_aux.txt", "w");
	file = fopen("peliculas.txt", "r");

	if(!file)
	{
		printf("El fichero de peliculas se encuentra vacio.\n");
		menuAdmin();
	}
	else
	{
		char nombre[20];

		printf("Introduzca el nombre de la pelicula a eliminar: \n");
		fflush(stdin);
		gets(nombre);
		//Recibe los mismos parametros que fwrite
		while(fread(&pelicula, sizeof(Pelicula),1,file))
		{
			if(strcmp(pelicula.nombre, nombre)!=0)
			{
				fwrite(&pelicula, sizeof(Pelicula), 1, fileAux);
			}
		}

		fileAux = fopen("peliculas_aux.txt", "r");
		file = fopen("peliculas.txt", "w");

		while(fread(&pelicula, sizeof(Pelicula), 1, fileAux))
		{
			fwrite(&pelicula, sizeof(Pelicula), 1, file);
		}

	}

	printf("Pelicula eliminada.\n");
	
	fclose(file);
	fclose(fileAux);
	remove("peliculas_aux.txt");

}
*/

void eliminarPelicula()
{
	FILE *file;
	Pelicula pelicula;

	//fileAux = fopen("peliculas_aux.txt", "w");
	file = fopen("peliculas.txt", "r");

	if(file==NULL)
	{
		printf("Archivo no encontado.\n");
		menuAdmin();
	}

	char palabra[30],texto[80];

    int i,tmp1,tmp2,konta=0;

     printf("Introduzca el titulo de pelicula completa:\n");
     gets(palabra);

	
	char nombre[20];
	
	while (feof(file)==0)

      {
      	
            fgets(texto,80,file);

            for(i=0;i<strlen(texto);i++)

            {

               if (palabra[0]==texto[i])

               {

                  tmp1=0;

                  tmp2=i;

                  while ((palabra[tmp1]==texto[tmp2])&&(tmp2<strlen(texto))&&(tmp1!=strlen(palabra)))

                  {
                        tmp1++;

                        tmp2++;

                        if (tmp1==strlen(palabra))

                           konta++;
                       	  
                  }
               }
            }


            
      }

       

      getchar();

      fclose(file);
}

void comentarPelicula()
{
	char *str;
	int d;
	char palabra[30];
	FILE *f;
	f = fopen("comentarios.txt", "a");	

	if(f==NULL)
	{
		printf("Archivo no encontrado\n");
		exit(1);
	}

	printf("Introduzca el nombre de la pelicula a comentar: \n");
	printf("NOMBRE: \n");
	
	gets(palabra);
	fprintf(f, "\n%s\n", palabra);

	printf("COMENTARIO:\n");
	gets(palabra);
	fprintf(f, "%s.\n", palabra);

	printf("COMENTARIO ANYADIDO!!\n");
	printf("\n");

	fclose(f);

}

void verComentarios()
{
	FILE *f;
	f = fopen("comentarios.txt", "r");

	if(f==NULL)
	{
		printf("Archivo no encontrado\n");
	}
	
	char str[700];
  	int d;

  	printf("COMENTARIOS ACTUALES: \n");
  	while(fgets(str, 1000, f)) 
  	{ 
  		//recorrer hasta que lea un 0
      
   		printf("%s", str);

    	clear_if_needed(str); //siempre antes del siguiente fgets
 	}

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

int menuUsuario(void)
{
	char str[MAX_LENGHT];
	int option;
	int len;
	do
	{

		printf("BIENVENIDO A VIDEOCLUB UD!!\n");
		printf("Indique su opcion: \n");
		
		printf("1. Alquilar pelicula\n");
		printf("2. Lista de peliculas\n");
		printf("3. Ver comentarios \n");
		printf("4. Valorar pelicula\n");
		printf("(q para salir)\n");
		printf("\n");
		
		fgets(str, 50, stdin);
		clear_if_needed(str); 

		len = sscanf(str, "%d", &option); 
		printf("\n");

	}while ((len == 0 && str[0] != 'q') || (len > 0 && (option > 4 || option < 1)));
	
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


