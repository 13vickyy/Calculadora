#include <iostream>
#include <cctype>
using namespace std;

int opcion; // Variable global

void MenuCalculadora() {

 cout << "Bienvenido a calculadora 1.0" << endl;

 cout << "Seleccione una operacion: " << endl;

 while (true){
    cout << "Menu de opciones: \n"
            << "1) + \n" 
            << "2) - \n"
            << "3) * \n"
            << "4) : \n";
    cin >> opcion;

    if (opcion >= 1 && opcion <= 4){
        break; //continua el programa
    }
    else {
        cout << "Opcion invalida" << endl; 
        cin.ignore();  // Ignora cualquier caracter pendiente en el buffer
        cout << "Presione Enter para volver al menu";
        cin.get();     // Espera a que el usuario presione Enter
        }
    }
}

int main() {
    char continuar;

    do {
        MenuCalculadora(); //Llamo a la funcion ANTES del switch

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

cout << "¿Desea volver al menu principal? Y/N" << endl;
cin >> continuar;
continuar = toupper(continuar);
} 

    while (continuar == 'Y');

    cin.ignore();
    cout << "Presione Enter para salir...";
    cin.get();

    return 0;
}