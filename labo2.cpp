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

# include <iostream>
using namespace std;

// Ejercicio 3

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

int main(){
    int aprobaron = 0;
    int total = 0;
    int i = 1;
    int centinela = 1;
    int nota;
    while (centinela != -1) {
        nota = cargarNota(i);
        if (nota == -1) {
            centinela = nota;
        } else {
            if (nota > 6) {
                aprobaron += 1;
            }
            i++;
            total++;
        }
        }
    if (total < 6) {
cout << "Ojo piojo, la cantidad de alumnos no puede ser menor a 6. Reinicia el programa perejil" <<
endl;
return 0;
}
    cout << "aprobaron: " << aprobaron << endl;
    cout << "reprobaron: " << i - aprobaron -1 << endl;
    if (aprobaron > (2*(i-1))/3) {
        cout << "aprobaron más de dos tercios, se puede incrementar el número de plazas del curso" << endl;
    }
}
