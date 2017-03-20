#include <stdio.h>

int menu()
{
	printf("Hola");
}
class Pelicula
{
    string nombre, genero;
    double precio;
    bool alquilado;

    public string Nombre
    {
        get{ return nombre; }
        set { nombre = value; }
    }

    public string Genero
    {
        get{ return genero;}
        set{ genero = value;}

    }

    public double Precio
    {
        get{ return precio;}
        set{ precio = value;}

    }

    public bool Alquilado
    {
        get{ return alquilado;}
        set{ alquilado = value;}

    }
}

class Videoclub
{
    Pelicula[] peliculas = new Pelicula[cantpelis]; //Array de peliculas

    const int cantpelis = 1000; //Constante de número de pelis

    double ventas; //Variable que guarda las ventas

    int num_peliculas = 0; //Variable que guarda la cantidad de peliculas que se han guardado

    public Videoclub
    {
        for(int i=0; i<cantpelis; i++)
        {
            peliculas[i] = new Pelicula();
        }
    }

    //Nos devuelve el número de peliculas que hay en el Videoclub
    public int Num_Peliculas
    {
        get{ return num_peliculas;}
    }

    //Nos dice cuanto dinero hay en alquiler
    public double Dinero
    {
        get
        {
            double dinero = 0;
            for(int i=0; i<=num_peliculas; i++)
                if(peliculas[i].Alquilado)
                {
                    dinero += peliculas[i].Precio;
                }

            return dinero;
        }
    }

    //Nos calcula las ventas totales de las peliculas
    public void CalcularVentas()
    {
        ventas = 0;
        if(num_peliculas != 0)
        {
            for(int i=0; i<=num_peliculas; i++)
            {
                if(peliculas[i].Alquilado)
                {
                    ventas += peliculas[i].Precio;
                }
            }
        }
    }

    //Método que agrega peliculas
    public void AgregaPelicula(string n, string g, double p, bool a, DataGridView dGV)
    {
        for(int elem = 0; elem < cantpelis; elem++)
        {
            if(peliculas[elem].Nombre == null)
            {
                peliculas[elem].Nombre = n;
                peliculas[elem].Genero = g;
                peliculas[elem].Precio = p;
                peliculas[elem].Alquilado = a;

                if(dGV.RowCount <= elem)
                    dGV.RowCount += 1;
                    dGV.Rows[elem].setValues(peliculas[elem].Nombre, peliculas[elem].Genero, peliculas[elem].Precio, peliculas[elem].Alquilado);
                    num_peliculas++;
                    break;
            }
        }
    }

    //Método que elimina peliculas
    public void EliminarPelicula(int pos, DataGridView dGV)
    {
        if(num_peliculas != 0 && pos<num_peliculas)
        {
            peliculas[pos - 1] = new Pelicula();
            dGV.Rows[pos - 1].setValues(null, null, null, false);
            num_peliculas--;
        }
    }

    //Método que devuelve una cadena con el nombre de las peliculas alquiladas y su precio junto con la cantidad de dinero total en alquilados
    public string Regresa()
    {
        string ret = " ";
        if(num_peliculas != 0)
        {
            for(int i=0; i<=num_peliculas; i++)
            {
                if(peliculas[i].Alquilado)
                {
                    ret += peliculas[i].Nombre + " " + peliculas[i].Genero + " € " + peliculas[i].Precio + "\r\n";

                }
            }
        }

        ret += "Total €" + ventas;
        return ret;
    }

}