#include <iostream>
#include <string>

using namespace std;

// Funci�n para convertir parte entera a binario
string enteroABinario(int numero) {
    if (numero == 0) {
        return "0";
    }
    
    string binario = "";
    while (numero > 0) {
        binario = char('0' + numero % 2) + binario;
        numero /= 2;
    }
    return binario;
}

// Funci�n para convertir parte fraccionaria a binario
string fraccionABinario(float fraccion) {
    string binario = "";
    while (fraccion > 0) {
        fraccion *= 2;
        if (fraccion >= 1) {
            binario += '1';
            fraccion -= 1;
        } else {
            binario += '0';
        }
    }
    return binario;
}

void opcion11() {
    float numero;
    cout << "Ingrese un numero decimal: ";
    cin >> numero;

    // Extraer la parte entera y fraccionaria del n�mero
    int parteEntera = static_cast<int>(numero);
    float parteFraccionaria = numero - parteEntera;

    // Convertir la parte entera a binario
    string binarioEntero = enteroABinario(parteEntera);

    // Convertir la parte fraccionaria a binario
    string binarioFraccion = fraccionABinario(parteFraccionaria);

    // Imprimir el n�mero en binario
    cout << "El numero " << numero << " en binario es: ";
    cout << binarioEntero << ".";
    if (binarioFraccion.empty()) {
        cout << "0"; // Si la parte fraccionaria es vac�a, a�adir un 0
    } else {
        cout << binarioFraccion;
    }
    cout << endl;

}

