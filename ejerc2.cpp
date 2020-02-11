#include <iostream>
using namespace std;
class Gato{
public:
Gato(int edadInicial, int pesoI);
~Gato();
int ObtenerEdad();
										int ObtenerPeso();
										void asignarPeso(int peso);
void AsignarEdad(int edad);
void Maullar();
private:
int suEdad;
										int suPeso;
};
//Constructor de Gato
Gato::Gato(int edadInicial, int pesoI){
suEdad = edadInicial;
suPeso = pesoI;
cout << "Se ha creado un objeto Gato de edad " << edadInicial << endl;
cout << "Se ha creado un objeto Gato de peso " << pesoI << endl;

}

Gato::~Gato(){
cout << "El objeto Gato se destruira en 3, 2, 1 ........" << endl;
}
// ObtenerEdad, metodo de acceso publico
// regresa el valor de su miembro suEdad

int Gato::ObtenerEdad(){
return suEdad;
}

int Gato::ObtenerPeso(){
	return suPeso;
	
}

// Definicion de AsignarEdad, metodo de
// acceso publico
void Gato::AsignarEdad(int edad){
// asignar a la variable miembro su Edad el
// valor pasado por el parametro edad
suEdad = edad;
}
void Gato::asignarPeso(int peso){
	
	suPeso = peso;
}
// definicion del metodo Maullar
// regresa: void
// parametros: ninguno
// accion: imprime "miauu"
void Gato::Maullar(){
cout << "Miau" << endl;
}
// crear un gato, asignar un valor asu edad, hacer que
// maulle, que nos diga su edad, y que vuelva a maullar.
int main(){
Gato Pelusa(5,10);
Pelusa.Maullar();
cout << "Pelusa es un gato que tiene";
cout << Pelusa.ObtenerPeso() << " kg de michi" << endl;

cout << "& Pelusa es un gato que tiene";
cout << Pelusa.ObtenerEdad() << " anios de michis" << endl;


Pelusa.Maullar();
Pelusa.AsignarEdad(7);
Pelusa.asignarPeso(15);
cout << "Ahora pelusa tiene " ;
cout << Pelusa.ObtenerEdad() << " anios de edad" << endl;
cout << "Ahora pelusa tiene " ;
cout << Pelusa.ObtenerPeso() << " anios de edad" << endl;
return 0;
}
