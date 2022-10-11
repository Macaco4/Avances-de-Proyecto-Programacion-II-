#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iomanip>

#define lista_csv "ejemplo_lista.csv"
using namespace std;


void leer_csv(){
	cout << "\n" << endl;
	cout << "A continuacion se leera el archivo csv" << endl;
}
// Data Array para almacenar los productos del csv
struct productos
{
    int id;
    string producto;
    string nombre_producto;
    string tipo;
    string masa;
    int peso;
};




void Saludo_Bienvenida() {
cout <<  "BIENVENIDO AL PROGRAMA \n";
cout <<  "LEE ARCHIVOS EN CSV\n";
cout << "################################################# \n";


};
// apartado de Vehiculos
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
//clase de combinaciones posibles 
class combinaciones{
	public:
        int id;
        string tipo_carga;
		string Masa;
		int Pequeno_Toneladas;
		int Grandes_Toneladas;
		string Tipo;
    void etiqueta(int a){
        id = a;
    }
    int get_etiqueta_combinaciones() {
        return id;
    }
    void tipo_de_cargas(string b) {
        tipo_carga = b;
    }
    string get_tipo_de_cargas() {
        return tipo_carga;
    }
    void Masa_de_cargas(string c) {
        Masa = c;
    }
    string get_Masa_de_cargas() {
        return Masa;
    }
    void Grandes_de_cargas(int d) {
        Grandes_Toneladas = d;
    }
    int get_Grandes_de_cargas() {
        return Grandes_Toneladas;
    }
    void Pequeno_cargas(int e) {
        Pequeno_Toneladas = e;
    }
    int get_Pequeno_Toneladas() {
        return Pequeno_Toneladas;
    }
    void Tipos(string f) {
        Tipo = f;
    }
    string get_Tipos() {
        return Tipo;
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
//Introduccion Verbal
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
//-----------------------------------------------------------------------------------------------------------------
//leer_csv 
cout << "-----------------------------------------------------------------------------------------------------" << endl;
//Introduccion Verbal
leer_csv();
cout << "\n";
//-----------------------------------------------------------------------------------------------------------------
productos articulo;
ifstream lectura;
lectura.open("ejemplo_lista.csv",ios::in);

for (std::string linea_datos; std::getline(lectura, linea_datos); )
{
    std::stringstream registro(linea_datos);

    for (std::string dato; std::getline(registro, dato, ';'); )
    {
        std::cout << dato << '\t';
    }
    std::cout << '\n';
}

lectura.close();
// termino de lectura de CSV de prueba
cout << "----------------------------------------------------------------------------------------------------------------------------";
cout << "\n";
//--------------------------------------------------------------------------------------------------------------------------------
// restricciones de combinaciones 
combinaciones uno_c;
uno_c.etiqueta(1);
uno_c.tipo_carga = "Normal";
uno_c.Masa = "Solida";
uno_c.Pequeno_Toneladas = 12; 
uno_c.Grandes_Toneladas = 24;
uno_c.Tipo = "Contenedor Grande";
//--------------------------------------------------------------------------------------------------------------------------------
combinaciones dos_c;
dos_c.etiqueta(2);
dos_c.tipo_carga = "Normal";
dos_c.Masa = "Liquida";
dos_c.Pequeno_Toneladas = 12; 
dos_c.Grandes_Toneladas = 24;
dos_c.Tipo = "Estanque";
//--------------------------------------------------------------------------------------------------------------------------------
combinaciones tres_c;
tres_c.etiqueta(3);
tres_c.tipo_carga = "Normal";
tres_c.Masa = "Gas";
tres_c.Pequeno_Toneladas = 12; 
tres_c.Grandes_Toneladas = 24;
tres_c.Tipo = "Estanque";
//--------------------------------------------------------------------------------------------------------------------------------
combinaciones cuatro_c;
cuatro_c.etiqueta(4);
cuatro_c.tipo_carga = "Refrigerada";
cuatro_c.Masa = "Solida";
cuatro_c.Pequeno_Toneladas = 10; 
cuatro_c.Grandes_Toneladas = 20;
cuatro_c.Tipo = "Contenedor";
//--------------------------------------------------------------------------------------------------------------------------------
combinaciones cinco_c;
cinco_c.etiqueta(5);
cinco_c.tipo_carga = "Refrigerada";
cinco_c.Masa = "Liquida";
cinco_c.Pequeno_Toneladas = 10; 
cinco_c.Grandes_Toneladas = 20;
cinco_c.Tipo = "Estanque";
//------------------------------------------------------------------------------------------------------------------------------------------------
combinaciones seis_c;
seis_c.etiqueta(6);
seis_c.tipo_carga = "Refrigerada";
seis_c.Masa = "Gas";
seis_c.Pequeno_Toneladas = 10; 
seis_c.Grandes_Toneladas = 20;
seis_c.Tipo = "Estanque";
//------------------------------------------------------------------------------------------------------------------------------------------------
combinaciones siete_c;
siete_c.etiqueta(7);
siete_c.tipo_carga = "Inflamable";
siete_c.Masa = "Solida";
siete_c.Pequeno_Toneladas = 11; 
siete_c.Grandes_Toneladas = 22;
siete_c.Tipo = "Contenedor";
//-------------------------------------------------------------------------------------------------------------------------------------------------
combinaciones ocho_c;
ocho_c.etiqueta(8);
ocho_c.tipo_carga = "Inflamable";
ocho_c.Masa = "Liquida";
ocho_c.Pequeno_Toneladas = 11; 
ocho_c.Grandes_Toneladas = 22;
ocho_c.Tipo = "Estanque";
//-------------------------------------------------------------------------------------------------------------------------------------------------
combinaciones nueve_c;
nueve_c.etiqueta(9);
nueve_c.tipo_carga = "Inflamable";
nueve_c.Masa = "Gas";
nueve_c.Pequeno_Toneladas = 11; 
nueve_c.Grandes_Toneladas = 22;
nueve_c.Tipo = "Estanque";
//-----------------------------------------------------------------------------------------------------------------------------------------------------
combinaciones diez_c;
diez_c.etiqueta(10);
diez_c.tipo_carga = "Normal";
diez_c.Masa = "Gas";
diez_c.Pequeno_Toneladas = 10;
diez_c.Grandes_Toneladas = 20;
diez_c.Tipo = "contenedor";
//-----------------------------------------------------------------------------------------------------------------------------------------------------
combinaciones once_c;
once_c.etiqueta(11);
once_c.tipo_carga = "Inflamable";
once_c.Masa = "Liquida";
once_c.Pequeno_Toneladas = 10;
once_c.Grandes_Toneladas = 20;
once_c.Tipo = "contenedor";
//-----------------------------------------------------------------------------------------------------------------------------------------------------
combinaciones doce_c;
doce_c.etiqueta(12);
doce_c.tipo_carga = "Refrigerada";
doce_c.Masa = "Gas";
doce_c.Pequeno_Toneladas = 10;
doce_c.Grandes_Toneladas = 20;
doce_c.Tipo = "Estanque";
//-----------------------------------------------------------------------------------------------------------------------------------------------------
combinaciones trece_c;
trece_c.etiqueta(13);
trece_c.tipo_carga = "Inflamable";
trece_c.Masa = "Solida";
trece_c.Pequeno_Toneladas = 10;
trece_c.Grandes_Toneladas = 20;
trece_c.Tipo = "Contenedor";
//-----------------------------------------------------------------------------------------------------------------------------------------------------
combinaciones catorce_c;
catorce_c.etiqueta(14);
catorce_c.tipo_carga = "Refrigerada";
catorce_c.Masa = "Solida";
catorce_c.Pequeno_Toneladas = 12;
catorce_c.Grandes_Toneladas = 24;
catorce_c.Tipo = "Contenedor";
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
combinaciones quince_c;
quince_c.etiqueta(15);
quince_c.tipo_carga = "Refrigerada";
quince_c.Masa = "Liquida";
quince_c.Pequeno_Toneladas = 10;
quince_c.Grandes_Toneladas = 20;
quince_c.Tipo = "Contenedor";
//-----------------------------------------------------------------------------------------------------------------------------------------------------
combinaciones dieciséis_c;
dieciséis_c.etiqueta(16);
dieciséis_c.tipo_carga = "Inflamable";
dieciséis_c.Masa = "Gas";
dieciséis_c.Pequeno_Toneladas = 14;
dieciséis_c.Grandes_Toneladas = 24;
dieciséis_c.Tipo = "Estanque";
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
combinaciones diecisiete_c;
diecisiete_c.etiqueta(17);
diecisiete_c.tipo_carga = "Inflamable";
diecisiete_c.Masa = "Liquida";
diecisiete_c.Pequeno_Toneladas = 11;
diecisiete_c.Grandes_Toneladas = 21;
diecisiete_c.Tipo = "Contenedor";
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
combinaciones dieciocho_c;
dieciocho_c.etiqueta(18);
dieciocho_c.tipo_carga = "Refrigerada";
dieciocho_c.Masa = "Solida";
dieciocho_c.Pequeno_Toneladas = 15;
dieciocho_c.Grandes_Toneladas = 25;
dieciocho_c.Tipo = "Contenedor";
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Impresion Primera Combinacion
cout << "En la Primera Combinacion" << endl;
cout <<  "Es un tipo de carga  " << uno_c.tipo_carga << "\n";
cout <<  "Con un tipo de Masa " << uno_c.Masa <<"\n ";
cout <<  "La cantidad  Menor  de toneladas  a Transportar es de " <<  uno_c.Pequeno_Toneladas << "\n";
cout <<  "La cantidad Grandes de toneladas  a Transportar es de " << uno_c.Grandes_Toneladas << "\n";
cout <<  "El tipo de contenedor es " << uno_c.Tipo << "\n";

return 0;
};
