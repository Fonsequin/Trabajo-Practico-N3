#include <iostream> // Solicitar biblioteca
using namespace std;

int main()
{
	float numero1; // Variable del numero
	
	cout << "Este programa potencia a la quinta a un numero ingresado" << endl; // Presentacion
	cout << endl; // Separacion
	cout << "Ingrese el numero: "; // Pedirle al usuario que ingrese el numero
	cin >> numero1; // Dato de la variable guardado
	cout << endl; // Separacion
	float resultado = numero1; // Variable de que el resultado equivale al dato ingresado
	for(int i = 1; i < 5; i++) // El ciclo se repetira 5 veces
	{
		resultado = resultado * numero1; // El numero ingresado se multiplicara a si mismo 5 veces
	}
	cout << "El resultado del numero a la quinta potencia es de: " << resultado; // Resultado en pantalla
	return 0;
}

