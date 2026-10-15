/*
realice un programa que permita realizar conversiones de unidades de masa longitud y tiempo
incluya todas las unidades mas conocidas valide la entrada por teclado explique las funcionalidades
 usadas y concidere las limitaciones del ejercicio anterior
*/

#include <iostream>
#include <cmath> // Necesario por si se requiere redondear o usar funciones matemáticas

using namespace std;

int main() {
    char repetir = 's'; // Variable para controlar si el usuario desea repetir el programa

    // CICLO PRINCIPAL: Permite repetir todo el proceso de conversión cuantas veces quiera el usuario
    while (repetir == 's' || repetir == 'S') {
        int categoria = 0;

        // VALIDACIÓN DE CATEGORÍA: Obliga a elegir entre las 5 categorías universales
        while (categoria < 1 || categoria > 5) {
            cout << "=======================================" << endl;
            cout << "       CONVERSOR UNIVERSAL             " << endl;
            cout << "=======================================" << endl;
            cout << "1. Longitud" << endl;
            cout << "2. Masa" << endl;
            cout << "3. Tiempo" << endl;
            cout << "4. Temperatura" << endl;
            cout << "5. Volumen" << endl;
            cout << "Seleccione la categoria (1 - 5): ";

            if (!(cin >> categoria)) {
                cout << "Error: Debe ingresar un numero valido.\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                categoria = 0;
            } else if (categoria < 1 || categoria > 5) {
                cout << "Opcion fuera de rango. Intente de nuevo.\n\n";
            }
        }

        double valor = 0;
        cout << "\nIngrese el valor numerico que desea convertir: ";
        while (!(cin >> valor)) {
            cout << "Error: Debe ingresar un valor numerico valido: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        // ==========================================
        // CATEGORÍA 1: LONGITUD (Base: Metros - m)
        // ==========================================
        if (categoria == 1) {
            int origen = 0, destino = 0;

            while (origen < 1 || origen > 8) {
                cout << "\n--- UNIDADES DE LONGITUD ---" << endl;
                cout << "1. Kilometro (km)\n2. Metro (m)\n3. Centimetro (cm)\n4. Milimetro (mm)\n";
                cout << "5. Milla (mi)\n6. Yarda (yd)\n7. Pie (ft)\n8. Pulgada (in)\n";
                cout << "Seleccione la unidad de ORIGEN (1-8): ";
                if (!(cin >> origen) || origen < 1 || origen > 8) {
                    cout << "Opcion no valida.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                    origen = 0;
                }
            }

            while (destino < 1 || destino > 8) {
                cout << "Seleccione la unidad de DESTINO (1-8): ";
                if (!(cin >> destino) || destino < 1 || destino > 8) {
                    cout << "Opcion no valida.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                    destino = 0;
                }
            }

            double valorEnMetros = 0;
            if (origen == 1) valorEnMetros = valor * 1000.0;
            else if (origen == 2) valorEnMetros = valor;
            else if (origen == 3) valorEnMetros = valor * 0.01;
            else if (origen == 4) valorEnMetros = valor * 0.001;
            else if (origen == 5) valorEnMetros = valor * 1609.34;
            else if (origen == 6) valorEnMetros = valor * 0.9144;
            else if (origen == 7) valorEnMetros = valor * 0.3048;
            else if (origen == 8) valorEnMetros = valor * 0.0254;

            double resultado = 0;
            if (destino == 1) resultado = valorEnMetros / 1000.0;
            else if (destino == 2) resultado = valorEnMetros;
            else if (destino == 3) resultado = valorEnMetros / 0.01;
            else if (destino == 4) resultado = valorEnMetros / 0.001;
            else if (destino == 5) resultado = valorEnMetros / 1609.34;
            else if (destino == 6) resultado = valorEnMetros / 0.9144;
            else if (destino == 7) resultado = valorEnMetros / 0.3048;
            else if (destino == 8) resultado = valorEnMetros / 0.0254;

            cout << "\n=======================================" << endl;
            cout << "Resultado: Son ";
            if (destino == 1) cout << resultado << " kilometros.";
            else if (destino == 2) cout << resultado << " metros.";
            else if (destino == 3) cout << resultado << " centimetros.";
            else if (destino == 4) cout << resultado << " milimetros.";
            else if (destino == 5) cout << resultado << " millas.";
            else if (destino == 6) cout << resultado << " yardas.";
            else if (destino == 7) cout << resultado << " pies.";
            else if (destino == 8) cout << resultado << " pulgadas.";
            cout << "\n=======================================" << endl;
        }

        // ==========================================
        // CATEGORÍA 2: MASA (Base: Gramos - g)
        // ==========================================
        else if (categoria == 2) {
            int origen = 0, destino = 0;

            while (origen < 1 || origen > 6) {
                cout << "\n--- UNIDADES DE MASA ---" << endl;
                cout << "1. Tonelada (t)\n2. Kilogramo (kg)\n3. Gramo (g)\n4. Miligramo (mg)\n5. Libra (lb)\n6. Onza (oz)\n";
                cout << "Seleccione la unidad de ORIGEN (1-6): ";
                if (!(cin >> origen) || origen < 1 || origen > 6) {
                    cout << "Opcion no valida.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                    origen = 0;
                }
            }

            while (destino < 1 || destino > 6) {
                cout << "Seleccione la unidad de DESTINO (1-6): ";
                if (!(cin >> destino) || destino < 1 || destino > 6) {
                    cout << "Opcion no valida.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                    destino = 0;
                }
            }

            double valorEnGramos = 0;
            if (origen == 1) valorEnGramos = valor * 1000000.0;
            else if (origen == 2) valorEnGramos = valor * 1000.0;
            else if (origen == 3) valorEnGramos = valor;
            else if (origen == 4) valorEnGramos = valor * 0.001;
            else if (origen == 5) valorEnGramos = valor * 453.592;
            else if (origen == 6) valorEnGramos = valor * 28.3495;

            double resultado = 0;
            if (destino == 1) resultado = valorEnGramos / 1000000.0;
            else if (destino == 2) resultado = valorEnGramos / 1000.0;
            else if (destino == 3) resultado = valorEnGramos;
            else if (destino == 4) resultado = valorEnGramos / 0.001;
            else if (destino == 5) resultado = valorEnGramos / 453.592;
            else if (destino == 6) resultado = valorEnGramos / 28.3495;

            cout << "\n=======================================" << endl;
            cout << "Resultado: Son ";
            if (destino == 1) cout << resultado << " toneladas.";
            else if (destino == 2) cout << resultado << " kilogramos.";
            else if (destino == 3) cout << resultado << " gramos.";
            else if (destino == 4) cout << resultado << " miligramos.";
            else if (destino == 5) cout << resultado << " libras.";
            else if (destino == 6) cout << resultado << " onzas.";
            cout << "\n=======================================" << endl;
        }

        // ==========================================
        // CATEGORÍA 3: TIEMPO (Base: Segundos - s)
        // ==========================================
        else if (categoria == 3) {
            int origen = 0, destino = 0;

            while (origen < 1 || origen > 4) {
                cout << "\n--- UNIDADES DE TIEMPO ---" << endl;
                cout << "1. Dia (d)\n2. Hora (h)\n3. Minuto (min)\n4. Segundo (s)\n";
                cout << "Seleccione la unidad de ORIGEN (1-4): ";
                if (!(cin >> origen) || origen < 1 || origen > 4) {
                    cout << "Opcion no valida.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                    origen = 0;
                }
            }

            while (destino < 1 || destino > 4) {
                cout << "Seleccione la unidad de DESTINO (1-4): ";
                if (!(cin >> destino) || destino < 1 || destino > 4) {
                    cout << "Opcion no valida.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                    destino = 0;
                }
            }

            double valorEnSegundos = 0;
            if (origen == 1) valorEnSegundos = valor * 86400.0;
            else if (origen == 2) valorEnSegundos = valor * 3600.0;
            else if (origen == 3) valorEnSegundos = valor * 60.0;
            else if (origen == 4) valorEnSegundos = valor;

            double resultado = 0;
            if (destino == 1) resultado = valorEnSegundos / 86400.0;
            else if (destino == 2) resultado = valorEnSegundos / 3600.0;
            else if (destino == 3) resultado = valorEnSegundos / 60.0;
            else if (destino == 4) resultado = valorEnSegundos;

            cout << "\n=======================================" << endl;
            cout << "Resultado: Son ";
            if (destino == 1) cout << resultado << " dias.";
            else if (destino == 2) cout << resultado << " horas.";
            else if (destino == 3) cout << resultado << " minutos.";
            else if (destino == 4) cout << resultado << " segundos.";
            cout << "\n=======================================" << endl;
        }

        // ==========================================
        // CATEGORÍA 4: TEMPERATURA (Base intermedia: Celsius)
        // ==========================================
        else if (categoria == 4) {
            int origen = 0, destino = 0;

            while (origen < 1 || origen > 3) {
                cout << "\n--- UNIDADES DE TEMPERATURA ---" << endl;
                cout << "1. Celsius (°C)\n2. Fahrenheit (°F)\n3. Kelvin (K)\n";
                cout << "Seleccione la unidad de ORIGEN (1-3): ";
                if (!(cin >> origen) || origen < 1 || origen > 3) {
                    cout << "Opcion no valida.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                    origen = 0;
                }
            }

            while (destino < 1 || destino > 3) {
                cout << "Seleccione la unidad de DESTINO (1-3): ";
                if (!(cin >> destino) || destino < 1 || destino > 3) {
                    cout << "Opcion no valida.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                    destino = 0;
                }
            }

            // Paso 1: Convertir origen a Celsius (Base de temperatura)
            double valorEnCelsius = 0;
            if (origen == 1) valorEnCelsius = valor;                                // °C a °C
            else if (origen == 2) valorEnCelsius = (valor - 32.0) * 5.0 / 9.0;      // °F a °C
            else if (origen == 3) valorEnCelsius = valor - 273.15;                  // K a °C

            // Paso 2: Convertir de Celsius a destino
            double resultado = 0;
            if (destino == 1) resultado = valorEnCelsius;                           // °C a °C
            else if (destino == 2) resultado = valorEnCelsius * 9.0 / 5.0 + 32.0;   // °C a °F
            else if (destino == 3) resultado = valorEnCelsius + 273.15;             // °C a K

            cout << "\n=======================================" << endl;
            cout << "Resultado: Son ";
            if (destino == 1) cout << resultado << " grados Celsius.";
            else if (destino == 2) cout << resultado << " grados Fahrenheit.";
            else if (destino == 3) cout << resultado << " kelvins.";
            cout << "\n=======================================" << endl;
        }

        // ==========================================
        // CATEGORÍA 5: VOLUMEN (Base: Litros - L)
        // ==========================================
        else if (categoria == 5) {
            int origen = 0, destino = 0;

            while (origen < 1 || origen > 4) {
                cout << "\n--- UNIDADES DE VOLUMEN ---" << endl;
                cout << "1. Metro cubico (m³)\n2. Litro (L)\n3. Mililitro (mL)\n4. Galon (gal)\n";
                cout << "Seleccione la unidad de ORIGEN (1-4): ";
                if (!(cin >> origen) || origen < 1 || origen > 4) {
                    cout << "Opcion no valida.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                    origen = 0;
                }
            }

            while (destino < 1 || destino > 4) {
                cout << "Seleccione la unidad de DESTINO (1-4): ";
                if (!(cin >> destino) || destino < 1 || destino > 4) {
                    cout << "Opcion no valida.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                    destino = 0;
                }
            }

            double valorEnLitros = 0;
            if (origen == 1) valorEnLitros = valor * 1000.0;     // m³ a L
            else if (origen == 2) valorEnLitros = valor;         // L a L
            else if (origen == 3) valorEnLitros = valor * 0.001; // mL a L
            else if (origen == 4) valorEnLitros = valor * 3.78541; // gal a L

            double resultado = 0;
            if (destino == 1) resultado = valorEnLitros / 1000.0;
            else if (destino == 2) resultado = valorEnLitros;
            else if (destino == 3) resultado = valorEnLitros / 0.001;
            else if (destino == 4) resultado = valorEnLitros / 3.78541;

            cout << "\n=======================================" << endl;
            cout << "Resultado: Son ";
            if (destino == 1) cout << resultado << " metros cubicos.";
            else if (destino == 2) cout << resultado << " litros.";
            else if (destino == 3) cout << resultado << " mililitros.";
            else if (destino == 4) cout << resultado << " galones.";
            cout << "\n=======================================" << endl;
        }

        // Preguntar si desea repetir
        cout << "\n¿Desea realizar otra conversion? (s/n): ";
        cin >> repetir;
        cout << "\n\n";
        cin.ignore(10000, '\n');
    }

    cout << "¡Gracias por usar el conversor universal!\n";
    return 0;
}