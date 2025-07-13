#include <iostream>
using namespace std;

int main () {
 cout << "Bienvenido a calculadora 1.0" << endl;

 cout << "Seleccione una operacion: " << endl;

 int opcion;
 cout << "Menu de opciones: \n"
        << "1) + \n" 
        << "2) - \n"
        << "3) * \n"
        << "4) : \n";
cin >> opcion;

if (opcion >= 1 && opcion <= 4)
{
    //continua el programa
;}
else{
    cout << "Opcion invalida" << endl; 
}
 

float num_1, num_2;

cout << "Ingrese su primer numero: " << endl;
cin >> num_1;

cout << "Ingrese su segundo numero: " << endl;
cin >> num_2;

switch (opcion){
case 1:
    cout << "Resultado: " << num_1 + num_2 << endl;
    break;

case 2:
cout << "Resultado: " << num_1 - num_2 << endl;
    break; 

case 3:
cout << "Resultado: " << num_1 * num_2 << endl;
    break;

case 4:
cout << "Resultado: " << num_1 / num_2 << endl;
    break;

default:
    break;
}

cin.ignore();  // Ignora cualquier caracter pendiente en el buffer
cout << "Presione Enter para salir...";
cin.get();     // Espera a que el usuario presione Enter

 return 0;
}