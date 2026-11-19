
#include <iostream>
#include <string>
using namespace std;

// Estructura del Ejercicio 3
struct Jugador {
    string nickname;
    int nivel;
    bool esVIP;
};

int main() {

    // =====================================
    // EJERCICIO 1: SENSOR DE APROBACION
    // =====================================

    const float NOTA_MINIMA = 6;

    float nota1, nota2, promedio;

    cout << "=== EJERCICIO 1: SENSOR DE APROBACION ===" << endl;

    cout << "Ingrese la nota del Primer Cuatrimestre: ";
    cin >> nota1;

    cout << "Ingrese la nota del Segundo Cuatrimestre: ";
    cin >> nota2;

    promedio = (nota1 + nota2) / 2;

    if (promedio >= NOTA_MINIMA) {
        cout << "APROBADO" << endl;
    } else {
        cout << "A INTENSIFICACION" << endl;
    }


    // =====================================
    // EJERCICIO 2: CONTADOR DE VIDAS
    // =====================================

    int vidas = 3;

    cout << "\n=== EJERCICIO 2: CONTADOR DE VIDAS ===" << endl;

    while (vidas > 0) {
        cout << "Jugador activo. Vidas restantes: " << vidas << endl;
        vidas--;
    }

    cout << "GAME OVER" << endl;


    // =====================================
    // EJERCICIO 3: REGISTRO DE JUGADOR
    // =====================================

    Jugador jugador;

    cout << "\n=== EJERCICIO 3: REGISTRO DE JUGADOR ===" << endl;

    cout << "Ingrese el nickname: ";
    cin >> jugador.nickname;

    cout << "Ingrese el nivel: ";
    cin >> jugador.nivel;

    cout << "Es VIP? (1 = Si, 0 = No): ";
    cin >> jugador.esVIP;

    if (jugador.esVIP == true) {
        cout << "Bienvenido al Servidor VIP, " << jugador.nickname << endl;
    } else {
        cout << "Bienvenido al Servidor Estandar, " << jugador.nickname << endl;
    }


    // =====================================
    // EJERCICIO 4: CONTROL DE INVENTARIO
    // =====================================

    int stock[5] = {12, 0, 5, 30, 0};
    int i = 0;

    cout << "\n=== EJERCICIO 4: CONTROL DE INVENTARIO ===" << endl;

    while (i < 5) {

        if (stock[i] == 0) {
            cout << "ALERTA: Sin stock en la posicion " << i << endl;
        }

        i++;
    }

    return 0;
}
