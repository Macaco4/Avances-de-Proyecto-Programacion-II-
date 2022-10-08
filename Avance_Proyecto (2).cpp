#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
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
//------------------------------
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
//------------------------------
class Avion: public Vehiculos {
  public:
    int id;
	string nombre;
	float capacidad;
    void etiqueta(int i) {
    	id = i;
    }
    int get_etiqueta_avion() {
      return id;
    }
    void avion(string a) {
    	nombre = a;
    }
    string get_a_avion() {
		return nombre;
    }
	void contenedores(float c){
		capacidad = c;
	}
	float get_cotenedores() {
		return capacidad;
	}
};
//------------------------------
class camion: public Vehiculos {
  public:
    int id;
	string nombre;
	float capacidad;
    void etiqueta(int i) {
    	id = i;
    }
    int get_etiqueta_camion() {
      return id;
    }
    void avion(string b) {
    	nombre = b;
    }
    string get_a_camion() {
		return nombre;
    }
	void contenedores(float c){
		capacidad = c;
	}
	float get_cotenedores() {
		return capacidad;
	}
	};
//------------------------------
//apartado de contenedores
class Contenedores{
	protected:
    int id;
    string nombre;
	string tipos;
	string tipos_carga_normales;
	string tipos_carga_inertes;
	string tipos_carga_solida;
	string tipos_carga_gaseosa;
	string tipos_carga_liquida;
	int tonelaje;	
	};
class contenedores_generales: public Contenedores {
	public:
		int id;
    	string tipos;
		string tipos_carga_normales;
		string tipos_carga_inertes;
		string tipos_carga_solida;
		string tipos_carga_gaseosa;
		string tipos_carga_liquida;
		string tipos_carga_refrigerada;
		string tipos_carga_inflamable;
		int tonelaje;
   void etiqueta(int a) {
    	id = a;
    }
    int get_etiqueta_contenedores() {
      return id;
    }
	void tipos_contenedores(string c){
		tipos = c;
	}
	string get_tipos_cotenedores() {
		return tipos;
	}
	void contenedores_tonelaje(int b){
        tonelaje = b;
	}
	int get_contenedores_tonelaje() {
		return tonelaje;
	}
	void cargas_normales(string a){
		tipos_carga_normales = a;
	}
	string get_cargas_normales() {
		return tipos_carga_normales;
	}
	void cargas_inerte(string a){
		tipos_carga_inertes = a;
	}
	string get_cargas_inerte() {
		return tipos_carga_inertes;
	}
	void cargas_solida(string a){
		tipos_carga_solida = a;
	}
	string get_cargas_solida() {
		return tipos_carga_solida;
	}
	void cargas_gaseosa(string a){
		tipos_carga_gaseosa = a;
	}
	string get_cargas_gaseosa() {
		return tipos_carga_gaseosa;
	}
	void cargas_liquida(string a){
		tipos_carga_liquida = a;
	}
	string get_cargas_liquida() {
		return tipos_carga_liquida;
	}
	void cargas_refrigerada(string a){
		tipos_carga_refrigerada = a;
	}
	string get_cargas_refrigerada() {
		return tipos_carga_refrigerada;
	}
	void cargas_inflamable(string a){
		tipos_carga_inflamable = a;
	}
	string get_cargas_inflamable() {
		return tipos_carga_inflamable;
	}
};


int main() {
//saludo de Bienvenida
	Saludo_Bienvenida();
//--------------------------------------
cout << " CLASES DE VEHICULOS \n" << endl;
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
//----------------------------------------------------------------
//Tren
Tren valores_t;
valores_t.etiqueta(2);
valores_t.nombre = "Tren";
valores_t.capacidad = 250;
cout <<  "Su nombre es  " << valores_t.get_t_vehiculo() << "\n";
cout << "Este es el vehiculo " << valores_t.get_etiqueta_tren() << "\n";
cout <<  "la capacidad total de contenedores es de " << valores_t.get_cotenedores() << " contenedores estandar \n";
cout << "\n";
//----------------------------------------------------------------
//Avion
Avion valores_avion;
valores_avion.etiqueta(3);
valores_avion.nombre = "Avion";
valores_avion.capacidad =10;
cout <<  "Su nombre es  " << valores_avion.get_a_avion() << "\n";
cout << "Este es el vehiculo " << valores_avion.get_etiqueta_avion() << "\n";
cout <<  "la capacidad total de contenedores es de " << valores_avion.get_cotenedores() << " contenedores estandar \n";
cout << "\n";
//----------------------------------------------------------------
//Camion
camion valores_camion;
valores_camion.etiqueta(4);
valores_camion.nombre = "Camion";
valores_camion.capacidad = 1;
cout << "Su nombre es " << valores_camion.get_a_camion() << "\n";
cout << "Este es el vehiculo " << valores_camion.get_etiqueta_camion() << "\n";
cout <<  "la capacidad total de contenedores es de " << valores_camion.get_cotenedores() << " contenedores estandar \n";
cout << "\n";
//----------------------------------------------------------------
//.

//Listado de Contenedores 
//Normales  
cout << "LISTADO DE CONTENEDORES " << "\n";
cout << "Normales";
cout << "\n";
cout << "\n";
contenedores_generales normales_pequenos;
contenedores_generales normales_grandes;
normales_pequenos.etiqueta(1);
normales_pequenos.tipos = "Pequeno";
normales_pequenos.tipos_carga_normales = "normal";
normales_pequenos.tipos_carga_inertes = "inerte";
normales_pequenos.tipos_carga_solida = "solida";
normales_pequenos.tonelaje = 12;

normales_grandes.etiqueta(2);
normales_grandes.tipos = "Grande";
normales_grandes.tipos_carga_normales = "normal";
normales_grandes.tipos_carga_inertes = "inerte";
normales_grandes.tipos_carga_solida = "solida";
normales_grandes.tonelaje = 24;
cout << normales_pequenos.get_tipos_cotenedores() << "\n";
cout << "Este contenedor se  puede usar para transportar carga de tipo  " << normales_pequenos.get_cargas_normales() << "\n";
cout << "ademas  este contenedor se puede usar para transportar carga  de tipo " << normales_pequenos.get_cargas_inerte() << "\n";
cout << "y  este contenedor se puede usar para transportar carga  de tipo " << normales_pequenos.get_cargas_solida() << "\n";
cout << "por ultimo la capacidad de tonelaje de este contenedor es de " << normales_pequenos.get_contenedores_tonelaje() << " toneladas \n";
cout << "\n";

cout << normales_grandes.get_tipos_cotenedores() << "\n";
cout << "Este contenedor se  puede usar para transportar carga de tipo  " << normales_grandes.get_cargas_normales() << "\n";
cout << "Ademas contenedor se  puede usar para transportar carga de tipo  ," << normales_grandes.get_cargas_inerte() << "\n";
cout << "y contenedor se  puede usar para transportar carga de tipo  ," << normales_grandes.get_cargas_solida() << "\n";
cout << "la capacidad de tonelaje de este contenedor es de " << normales_grandes.get_contenedores_tonelaje() << " toneladas \n";
cout << "\n";

//Refrigerados
cout << "Refrigerados";
cout << "\n";
cout << "\n";
contenedores_generales refrigerados_pequenos;
contenedores_generales refrigerados_grandes;
refrigerados_pequenos.etiqueta(1);
refrigerados_pequenos.tipos = "Pequeno";
refrigerados_pequenos.tipos_carga_normales = "normal";
refrigerados_pequenos.tipos_carga_refrigerada = "refrigerada";
refrigerados_pequenos.tipos_carga_inertes = "inerte";
refrigerados_pequenos.tipos_carga_solida = "solida";
refrigerados_pequenos.tonelaje = 10;
//-----------------------------------------------------------------------------
refrigerados_grandes.etiqueta(2);
refrigerados_grandes.tipos = "Grande";
refrigerados_grandes.tipos_carga_normales = "normal";
refrigerados_grandes.tipos_carga_refrigerada = "refrigerada";
refrigerados_grandes.tipos_carga_inertes = "inerte";
refrigerados_grandes.tipos_carga_solida = "solida";
refrigerados_grandes.tonelaje = 20;
//------------------------------------------------------------------------------
cout << refrigerados_pequenos.get_tipos_cotenedores() << "\n";
cout << "Este contenedor se  puede usar para transportar carga de tipo  " << refrigerados_pequenos.get_cargas_normales() << "\n";
cout << "Ademas este contenedor se  puede usar para transportar carga de tipo  " << refrigerados_pequenos.get_cargas_refrigerada() << "\n";
cout << "y contenedor se  puede usar para transportar carga de tipo  " << refrigerados_pequenos.get_cargas_inerte() << ",\n";
cout << "la capacidad de tonelaje de este contenedor se  puede usar para transportar carga de tipo  " << refrigerados_pequenos.get_cargas_solida() << "\n";
cout << "la capacidad de tonelaje de este contenedor es de " << refrigerados_pequenos.get_contenedores_tonelaje() << " toneladas \n";
cout << "\n";
// ------------------------------------------------------------------------------

cout << refrigerados_grandes.get_tipos_cotenedores() << "\n";
cout << "Este contenedor se  puede usar para transportar carga de tipo  " << refrigerados_grandes.get_cargas_normales() << "\n";
cout << "Ademas este contenedor se  puede usar para transportar carga  de tipo  " << refrigerados_grandes.get_cargas_refrigerada() << "\n";
cout << "y este contenedor se  puede usar para transportar carga de tipo  " << refrigerados_grandes.get_cargas_inerte() << "\n";
cout << "y este  contenedor se  puede usar para transportar carga de tipo " << refrigerados_grandes.get_cargas_solida() << "\n";
cout << "la capacidad de tonelaje de este contenedor es de " << refrigerados_grandes.get_contenedores_tonelaje() << "toneladas \n";
cout << "\n";
cout << "\n";
// ------------------------------------------------------------------------------

//Estanques Liquidos estandar y inflamables
cout << "Estanques Liquidos y Inflamables";
cout << "\n";
cout << "\n";
contenedores_generales estanques_liquidos;
contenedores_generales estanques_liquidos_inflamables;
estanques_liquidos.etiqueta(1);
estanques_liquidos.tipos = "Estandar Liquido";
estanques_liquidos.tipos_carga_inertes = "inerte";
estanques_liquidos.tipos_carga_liquida = "liquida";
estanques_liquidos.tipos_carga_gaseosa = "gas";
estanques_liquidos.tonelaje = 24;
//--------------------------------------------------------------------------------
estanques_liquidos_inflamables.etiqueta(2);
estanques_liquidos_inflamables.tipos = "Estandar Liquido Inflamables";
estanques_liquidos_inflamables.tipos_carga_inertes = "inerte";
estanques_liquidos_inflamables.tipos_carga_inflamable = "solida";
estanques_liquidos_inflamables.tipos_carga_liquida = "liquida";
estanques_liquidos_inflamables.tipos_carga_gaseosa  = "gas";
estanques_liquidos_inflamables.tonelaje = 20;
//--------------------------------------------------------------------------------
cout << estanques_liquidos.get_tipos_cotenedores() << "\n";
cout << "Este contenedor se  puede usar para transportar carga de tipo  " << estanques_liquidos.get_cargas_inerte() << "\n";
cout << "Ademas este contenedor se  puede usar para transportar carga  de tipo  " << estanques_liquidos.get_cargas_inflamable() << "\n";
cout << "y contenedor se  puede usar para transportar carga de tipo  " << estanques_liquidos.get_cargas_liquida() << "\n";
cout << "y contenedor se puede usar para transportar carga de tipos  " << estanques_liquidos.get_cargas_gaseosa() << "\n";
cout << "la capacidad de tonelaje de este contenedor es de  " << estanques_liquidos.get_contenedores_tonelaje() << "\n";
cout << "\n";
//--------------------------------------------------------------------------------
cout << estanques_liquidos_inflamables.get_tipos_cotenedores() << "\n";
cout << "Este contenedor se  puede usar para transportar carga de tipo  " << estanques_liquidos_inflamables.get_cargas_inerte() << "\n";
cout << "Ademas este contenedor se  puede usar para transportar carga  de tipo  " << estanques_liquidos_inflamables.get_cargas_inflamable() << "\n";
cout << "y contenedor se  puede usar para transportar carga de tipo  " << estanques_liquidos_inflamables.get_cargas_liquida() << "\n";
cout << "y contenedor se puede usar para transportar carga de tipo  " << estanques_liquidos_inflamables.get_cargas_gaseosa() << "\n";
cout << "la capacidad de tonelaje de este contenedor es de " << estanques_liquidos_inflamables.get_contenedores_tonelaje() << "\n";
return 0;
}
