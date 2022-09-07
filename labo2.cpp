// Ejercio 1

# include <iostream>
using namespace std;

int cargarNota(int n) {
    int nota;
    cout << "ingresa nota " << n << ":" << endl;
    cin >> nota;
    while (nota < 0 || nota > 10) {
        cout << "la nota no es válida, inténtalo de nuevo:" << endl;
        cin >> nota;
    }
    return nota;
}

float promedio(float x){
    return x/10;
}

int main(){
    int suma = 0;
    int i = 1;
    int nota;
    while (i <= 10) {
        nota = cargarNota(i);
        suma = suma + nota;
        i++;
    }
    cout << "suma total: " << suma << endl;
    cout << "promedio: " << promedio(suma) << endl;
}

// Ejercicio 2

