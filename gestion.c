#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "gestion.h"

#define MAX_LENGHT 50

void liberarMemoria(Pelicula *a, int total);

void clear_if_needed(char *str);

int eliminarBuscar(char* palabra)
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
        	printf("Pelicula existente!\n");
	      	
        }
        else
        {
        	printf("Vuelva a intentarlo \n");
	      	gets(palabra);
	      	eliminarPelicula(palabra);
        }
     

      fclose(f);
}
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
	fprintf(f, "%[^\n]s\n", palabra);

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
	fprintf(f, "%[^\n]s\n", palabra);


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
	char str[MAX_LENGHT];
	char frm_str[MAX_LENGHT];

		printf("Introduzca el titulo de la pelicula que desea alquilar: \n");
		fgets(str,MAX_LENGHT,stdin);
		compararPelicula(str);
		clear_if_needed(str);
		sscanf(str, "%[^\n]s", frm_str);

		a->nombre=(char *)malloc((strlen(frm_str) + 1) *sizeof (char));
		strcpy(a->nombre, frm_str); 		
		
		printf("Peliculas alquiladas: (%d)\n", total + 1);
		printf("\n");  

		liberarMemoria(a, total);
	
		
}

void imprimirAlquiladas(Pelicula a[], int total)
{
	
	int i;
	printf("Total: %d\n", total);

	if(total==0)
	{
		printf("No tienes ninguna pelicula alquilada\n");
	}

	else
	{
		printf("Listado de peliculas alquiladas: \n\n");	

	for (i = 0; i <total; i++)
	{
		printf("Pelicula--> %s\n", a[i].nombre);
		printf("\n");
	}
	printf("------------------------------\n");
	}
	
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
 	fclose(f);

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



