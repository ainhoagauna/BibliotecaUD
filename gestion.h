#ifndef _GESTION_H_
#define _GESTION_H_

typedef struct
{
	char nombre;
	char genero;
	double precio;
	double valoracion;


}Pelicula;

void anyadirPelicula();

void eliminarPelicula();

void listaPelicula();

int menuAdmin(void);

int menuUsuario(void);

#endif