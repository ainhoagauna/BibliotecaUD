#ifndef _GESTION_H_
#define _GESTION_H_

#ifdef __cplusplus
extern "C" {
#endif

using namespace std;
typedef struct
{
	char *nombre;
	char genero;
	double precio;
	char valoracion;

}Pelicula;

void altaUsuario();

void ventas();

void anyadirPelicula();

void imprimirAlquiladas(Pelicula a[], int total);

void alquilarPelicula(Pelicula *a, int total);

void comentarPelicula();

void verComentarios();

void listaPelicula();

int menuAdmin(void);

int menuUsuario(void);

#ifdef __cplusplus
}
#endif

#endif