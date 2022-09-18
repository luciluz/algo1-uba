// Ejercicio 1
// Dados un vector v y un int a, decide si a divide a todos los numeros de v.
bool divide(vector<int> v, int a){
v = {10,15,20,25}; //prueba con distintos vectores
a = 5; // prueba con distintos enteros
int i = 0;
while(i<v.size()){
    if(v[i] % a != 0){
        return false;
        }
        i++;
    } return true;
}

// Esto va en main

#include "generador.h"
#include "vectores.h"

using namespace std;

int main() {
    vector<int> v;
    int a;
    return divide(v, a);
}

// Ejercicio 2
// Dado un vector v, devuelve el valor maximo encontrado.
int mayor(vector<int> v){
    int maximo = 0;
    int i = 0;
    while(i<v.size()){
        if(maximo <= v[i]){
            maximo = v[i];
            i++;
        } else {
            i++;
        }
        } return maximo;
    }

// Esto va en main

#include "generador.h"
#include "vectores.h"

using namespace std;

vector<int> s = {0,5,12,9,2}; // puedes probar con distintos vectores

int main() {
    cout << mayor(s) << endl;
}

// Ejercicio 3
// Dado un vector v, devuelve el reverso.
vector<int> reverso(vector<int>& v){
    vector<int> v0 = v;
    int i = v0.size() - 1;
    while( v.size() > 0){
        v.pop_back();
    }
    while(i >= 0){
        v.push_back(v0[i]);
        i--;
    } return v;
}

// Esto puede ir en main
#include "generador.h"
#include "vectores.h"

using namespace std;

vector<int> v = {1,2,3,4,5}; // puedes probar con distintos vectores

int main() {
reverso(v);
    cout << "el reverso del vector es: " << mostrarVector(v) << endl;
}

//Ejercicio 4
// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].
vector<int> rotar(vector<int>& v, int k){
    vector<int> v0 = v;
    int i = 0;
    while(i < v0.size()){
        if(i-k >= 0){
            v[i-k] = v0[i];
            i++;
        } else{
            v[i+v0.size()-k] = v0[i];
            i++;
        }
    } return v;
}

// Esto puede ir en main

#include "generador.h"
#include "vectores.h"

using namespace std;

vector<int> v = {1,2,3,4,5}; // probar con distintos vectores
int k = 1; // probar con distinto valores

int main() {
    rotar(v, k);
    cout << "la rotación de valor " << k << " queda: " << mostrarVector(v) <<endl;
}

// Ejercicio 5
//Dado un vector v de enteros no repetidos, devuelve verdadero si el mismo está ordenado (ya sea creciente o decreciente)
bool esCreciente(vector<int> v) {
    int i = 0;
    while (i < v.size() - 1) {
        if (v[i] < v[i+1]) {
            i++;
        } else {
            return false;
        }
    } return true;
}

bool esDecreciente(vector<int> v) {
    int i = 0;
    while (i < v.size() - 1) {
        if (v[i] > v[i+1]) {
            i++;
        } else {
            return false;
        }
    } return true;
}

bool estaOrdenado(vector<int> v){
    if (esCreciente(v) || esDecreciente(v)){
        return true;
    }
    return false;
}
