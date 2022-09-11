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

# include <iostream>
using namespace std;

int cargarNota(int n) {
    int nota;
    cout << "ingresa nota " << n << ":" << endl;
    cin >> nota;
    if(nota == -1){
        return nota;
    }
    while (nota < 0 || nota > 10) {
        cout << "la nota no es válida, inténtalo de nuevo:" << endl;
        cin >> nota;
    }
    return nota;
}

float promedio(float x, float y){
    return x/y;
}

int main(){
    int suma = 0;
    int i = 1;
    int a = 1;
    int nota;
    while (a != -1) {
            nota = cargarNota(i);
            if (nota == -1) {
                a = nota;
            } else {
                suma += nota;
            }
            i++;
        }
    cout << "suma total: " << suma << endl;
    cout << "promedio: " << promedio(suma, i-2) << endl;
}
