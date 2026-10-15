/* 

realice un programa que permita simular una ruleta 
con 10 opciones pero que tambien permita al usuario usar 5 opciones y 3 opciones ,las opciones pueden ser
numeros nombres o simbolos especiales tambien palabras que no tengan relacion
entre si debe. validar las palabras por teclado 
.no puede usar las funciones estructuras arreglos clases y enums
 
 */
 
 #include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inicializar la semilla aleatoria basada en el tiempo actual para que los resultados cambien siempre
    srand(time(0));

    // Variable para controlar si el usuario quiere repetir el programa ('s' o 'S')
    char repetir = 's'; 

    // CICLO PRINCIPAL: Envuelve todo el programa para permitir repetir tantas veces como quiera el usuario
    while (repetir == 's' || repetir == 'S') {
        int numOpciones = 0;

        // VALIDACIÓN DE OPCIONES: Obliga al usuario a ingresar estrictamente 3, 5 o 10
        while (numOpciones != 3 && numOpciones != 5 && numOpciones != 10) {
            cout << "=======================================" << endl;
            cout << "         SIMULADOR DE RULETA           " << endl;
            cout << "=======================================" << endl;
            cout << "Seleccione la cantidad de opciones (3, 5 o 10): ";
            
            // Valida que la entrada sea un número entero y no letras
            if (!(cin >> numOpciones)) {
                cout << "Error: Debe ingresar un numero valido.\n\n";
                cin.clear(); // Limpia el error de cin
                cin.ignore(10000, '\n'); // Descarta la entrada incorrecta
                numOpciones = 0;
            } else if (numOpciones != 3 && numOpciones != 5 && numOpciones != 10) {
                cout << "Opcion no valida. Solo se permiten 3, 5 o 10 opciones.\n\n";
            }
        }

        // Limpia el buffer de entrada para evitar saltos de línea pendientes al usar getline
        cin.ignore(10000, '\n');

        // DECLARACIÓN DE VARIABLES INDIVIDUALES (Cumpliendo la regla de NO usar arreglos)
        string op1 = "", op2 = "", op3 = "", op4 = "", op5 = "";
        string op6 = "", op7 = "", op8 = "", op9 = "", op10 = "";

        cout << "\n--- INGRESO DE OPCIONES ---" << endl;
        cout << "(Puede usar nombres, numeros, simbolos o palabras)\n" << endl;

        // LECTURA Y VALIDACIÓN DE OPCIÓN 1 (Evita campos vacíos)
        do {
            cout << "Ingrese la opcion 1: ";
            getline(cin, op1);
            if (op1.empty()) cout << "La opcion no puede estar vacia. Intente de nuevo.\n";
        } while (op1.empty());

        // LECTURA Y VALIDACIÓN DE OPCIÓN 2
        do {
            cout << "Ingrese la opcion 2: ";
            getline(cin, op2);
            if (op2.empty()) cout << "La opcion no puede estar vacia. Intente de nuevo.\n";
        } while (op2.empty());

        // LECTURA Y VALIDACIÓN DE OPCIÓN 3
        do {
            cout << "Ingrese la opcion 3: ";
            getline(cin, op3);
            if (op3.empty()) cout << "La opcion no puede estar vacia. Intente de nuevo.\n";
        } while (op3.empty());

        // CONDICIONAL PARA 5 O 10 OPCIONES: Pide las opciones 4 y 5 si el usuario eligió 5 o 10
        if (numOpciones >= 5) {
            do {
                cout << "Ingrese la opcion 4: ";
                getline(cin, op4);
                if (op4.empty()) cout << "No puede estar vacia.\n";
            } while (op4.empty());

            do {
                cout << "Ingrese la opcion 5: ";
                getline(cin, op5);
                if (op5.empty()) cout << "No puede estar vacia.\n";
            } while (op5.empty());
        }

        // CONDICIONAL PARA 10 OPCIONES: Pide de la 6 a la 10 solo si eligió exactamente 10
        if (numOpciones == 10) {
            do {
                cout << "Ingrese la opcion 6: ";
                getline(cin, op6);
                if (op6.empty()) cout << "No puede estar vacia.\n";
            } while (op6.empty());

            do {
                cout << "Ingrese la opcion 7: ";
                getline(cin, op7);
                if (op7.empty()) cout << "No puede estar vacia.\n";
            } while (op7.empty());

            do {
                cout << "Ingrese la opcion 8: ";
                getline(cin, op8);
                if (op8.empty()) cout << "No puede estar vacia.\n";
            } while (op8.empty());

            do {
                cout << "Ingrese la opcion 9: ";
                getline(cin, op9);
                if (op9.empty()) cout << "No puede estar vacia.\n";
            } while (op9.empty());

            do {
                cout << "Ingrese la opcion 10: ";
                getline(cin, op10);
                if (op10.empty()) cout << "No puede estar vacia.\n";
            } while (op10.empty());
        }

        // SIMULACIÓN DEL GIRO: Genera un número aleatorio entre 1 y la cantidad de opciones seleccionadas
        cout << "\nGirando la ruleta..." << endl;
        int ganador = rand() % numOpciones + 1; 

        // MOSTRAR RESULTADO: Compara el número aleatorio obtenido con la opción correspondiente
        cout << "\n=======================================" << endl;
        cout << "        ¡RESULTADO DE LA RULETA!       " << endl;
        cout << "=======================================" << endl;

        switch (ganador) {
            case 1: cout << "El ganador es: " << op1 << endl; break;
            case 2: cout << "El ganador es: " << op2 << endl; break;
            case 3: cout << "El ganador es: " << op3 << endl; break;
            case 4: cout << "El ganador es: " << op4 << endl; break;
            case 5: cout << "El ganador es: " << op5 << endl; break;
            case 6: cout << "El ganador es: " << op6 << endl; break;
            case 7: cout << "El ganador es: " << op7 << endl; break;
            case 8: cout << "El ganador es: " << op8 << endl; break;
            case 9: cout << "El ganador es: " << op9 << endl; break;
            case 10: cout << "El ganador es: " << op10 << endl; break;
        }
        
        cout << "=======================================" << endl;

        // PREGUNTA DE REETICIÓN: Consulta al usuario si desea jugar de nuevo
        cout << "\n¿Desea volver a intentar con otra ruleta? (s/n): ";
        cin >> repetir;
        cout << "\n\n";

        // Limpia el búfer por si quedan saltos de línea residuales
        cin.ignore(10000, '\n');
    }

    cout << "¡Gracias por usar el simulador de ruleta! Hasta luego.\n";

    return 0;
}