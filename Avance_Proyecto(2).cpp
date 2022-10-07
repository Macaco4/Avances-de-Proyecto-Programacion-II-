#include <iostream>
#include <sstream>
#include <fstream>
#define lista_csv "ejemplo_lista.csv"
using namespace std;


void Saludo_Bienvenida() {
cout <<  "BIENVENIDO AL PROGRAMA \n";
cout <<  "ES UN OPTIMIZADOR DE LISTAS DE PRODUCTOS EN FORMATO CSV \n";
cout << "################################################# \n";


};

class Vehiculos {
	protected:
	int id;
    string nombre;
	string capacidad;
		
};
class Barco: public Vehiculos {
  public:
    int id;
	string nombre;
	float capacidad;
    void etiqueta(int i) {
    	id = i;
    }
    int get_etiqueta() {
      return id;
    }
    void barco(string a) {
    	nombre = a;
    }
    string get_n_vehiculo() {
		return nombre;
    }
	void contenedores(float c){
		capacidad = c;
	}
	float get_cotenedores() {
		return capacidad;
	}
};
class Tren: public Vehiculos {
  public:
    int id;
	string nombre;
	float capacidad;
    void etiqueta(int i) {
    	id = i;
    }
    int get_etiqueta_tren() {
      return id;
    }
    void tren(string a) {
    	nombre = a;
    }
    string get_t_vehiculo() {
		return nombre;
    }
	void contenedores(float c){
		capacidad = c;
	}
	float get_cotenedores() {
		return capacidad;
	}
};

int main() {
//saludo de Bienvenida
	Saludo_Bienvenida();
cout << "Listado de Vehiculos \n" << endl;
//clase Vehiculos
//Barco
Barco valores_b;
valores_b.etiqueta(1);
valores_b.nombre ="Barco";
valores_b.capacidad =24,000;
cout <<  "Su nombre es  " << valores_b.get_n_vehiculo() << "\n";
cout <<"Este es el vehiculo " << valores_b.get_etiqueta() << "\n";
cout <<  "la capacidad total de contenedores es de " << valores_b.get_cotenedores() << "  mil contenedores estandar \n";
cout << "\n";
//Tren
Tren valores_t;
valores_t.etiqueta(2);
valores_t.nombre = "Tren";
valores_t.capacidad = 250;
cout <<  "Su nombre es  " << valores_t.get_t_vehiculo() << "\n";
cout << "Este es el vehiculo " << valores_t.get_etiqueta_tren() << "\n";
cout <<  "la capacidad total de contenedores es de " << valores_t.get_cotenedores() << " contenedores estandar \n";
return 0;
}
