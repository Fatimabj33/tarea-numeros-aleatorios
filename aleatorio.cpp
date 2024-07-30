#include <iostream>
#include <cstdlib> // Para usar la función rand()
#include <ctime>   // Para inicializar la semilla de generación aleatoria

using namespace std;

// Función para generar un número entero aleatorio entre min y max (ambos inclusive)
int generarNumeroAleatorio(int min, int max) {
    // Calculamos un número aleatorio dentro del rango [min, max]
    return min + rand() % (max - min + 1);
}

int main() {
    int minimo, maximo, cantidad;
    // Inicializamos la semilla de generación aleatoria con el tiempo actual
    srand(time(nullptr));
    cout << "Ingresa el valor mínimo del rango: ";
    cin >> minimo;
    cout << "Ingresa el valor máximo del rango: ";
    cin >> maximo;
    cout << "Ingresa la cantidad de números a generar: ";
    cin >> cantidad;

    cout << "Números generados:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        cout << generarNumeroAleatorio(minimo, maximo) << " ";
    }
    cout << endl;

    return 0;
}
