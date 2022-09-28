#ifndef EJERCICIOS_H
#define EJERCICIOS_H

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void holaModuloVectores();

//Ejercicio
bool divide(vector<int> v, int a){
// Dados un vector v y un int a, decide si a divide a todos los numeros de v.
v = {10,15,20,25};
a = 5;
int i = 0;
while(i<v.size()){
    if(v[i] % a != 0){
        return false;
        }
        i++;
    } return true;
}
//Ejercicio
// Dado un vector v, devuelve el valor maximo encontrado.
int mayor(vector<int> v){
    int chiquito = v[0];
    for(int i=1;i<v.size();i++){
        if(chiquito < v[i]){
            chiquito = v[i];
        }
    } return chiquito;
}


//Ejercicio
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
//Ejercicio
// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].
vector<int> rotar(vector<int>& v, int k){
    vector<int> v0 = v;
    int i = 0;
    while(i < v0.size()){
        if(i-k >= 0){
            v[i-k] = v0[i];
        } else{
            v[i+v0.size()-k] = v0[i];
        } i++;
    } return v;
}

//Ejercicio
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

//Ejercicio
// Dado un entero devuelve un vector con los factores primos del mismo
bool esPrimo(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    } return true;
}

vector<int> factoresPrimos(int n){
    vector<int> v;
    for(int i=2; i<=n;i++){
        if(n % i == 0 && esPrimo(i)){
            v.push_back(i);
        }
    }
    return v;
}


//Ejercicio
// Dado un vector de enteros muestra por la salida estándar, el vector
// Ejemplo: si el vector es <1, 2, 5, 65> se debe mostrar en pantalla [1, 2, 5, 65]
void mostrarVector(vector<int> v){
    cout << "[";
    for(int i=0; i<v.size()-1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1] << "]";
}

// Ejercicio
vector<int> leerVector(string nombreArchivo){
    vector<int> v;
    ifstream fin;
    fin.open(nombreArchivo);
    while (!fin.eof()){
        int i;
        fin >> i;
        v.push_back(i);
    } return v;
}

// Ejercicio
vector<int> guardarVector(vector<int> v, string nombreArchivo){
    int i = 0;
    ofstream fout;
    fout.open(nombreArchivo);
    fout << "[";
    while(i <v.size()-1){
        fout << v[i] << ", ";
        i++;
    }
    fout << v[v.size()-1] << "]";
    fout.close();
    return v;
}

// Ejercicio 10
int sumaIzq(vector<int> v, int k){
    int res = 0;
    while(k>0){
        res += v[k];
        k--;
    } return res;
}

int sumaDer(vector<int> v, int k){
    int res = 0;
    while(k<v.size()){
        res += v[k+1];
        k++;
    } return res;
}

int elementoMedio(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        if (sumaIzq(v, i) > sumaDer(v, i)) {
            return v[i];
        }
    }
}

// Ejercicio 11

int menor(vector<int> v){
    int chiquito = v[0];
    for(int i=1;i<v.size();i++){
        if(chiquito > v[i]){
            chiquito = v[i];
        }
    } return chiquito;
}

int cantidadAp(int k, vector<int> v){
    int contador = 0;
    int i = 0;
    while(i<v.size()){
        if(k==v[i]){
            contador++;
        } i++;
    } return contador;
}

void cantApariciones(string nombreArchivo){
    vector<int> v = leerVector(nombreArchivo);
    int cantidad;
    int n = 1;
    ofstream fout;
    fout.open(nombreArchivo);
    for(int i=menor(v);i<= mayor(v);i++){
        if(cantidadAp(i,v) != 0){
        cantidad = cantidadAp(i, v);
        fout << "linea "<< n << ": " << i << " " << cantidad << endl;
        n++;
        }
    } fout.close();
}

// Ejercicio 12

vector<string> leerVectorString(string nombreArchivo){
    vector<string> c;
    ifstream fin;
    fin.open(nombreArchivo);
    while (!fin.eof()){
        string i;
        fin >> i;
        c.push_back(i);
    } return c;
}

int cantidadAparicionesDePalabra(string nombreArchivo, string palabra){
    vector<string> p = leerVectorString(nombreArchivo);
    int cantidad = 0;
    int i = 0;
    ifstream fin;
    fin.open(nombreArchivo);
    while(i < p.size()){
        if(p[i] == palabra){
            cantidad++;

             } i++;
        } return cantidad;
    }

// Ejercicio 13

vector<float> guardarVectorFloat(vector<float> v, string nombreArchivo){
    int i = 0;
    ofstream fout;
    fout.open(nombreArchivo);
    fout << "[";
    while(i <v.size()-1){
        fout << v[i] << ", ";
        i++;
    }
    fout << v[v.size()-1] << "]";
    fout.close();
    return v;
}

void promedio(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut){
    vector<int> v1 = leerVector(nombreArchivoIn1);
    vector<int> v2 = leerVector(nombreArchivoIn2);
    vector<float> v3;
    float promedio;
    for(int i = 0; i < v1.size(); i++){
        promedio = (v1[i]+v2[i])/2;
        v3.push_back(promedio);
    }   guardarVectorFloat( v3, nombreArchivoOut);
}

// Ejercicio 14

vector<int> concatenarVectores(vector<int> v, vector<int> w){
    vector<int> vw;
    for(int i = 0; i < v.size(); i++){
        vw.push_back(v[i]);
    }
    for(int j= 0; j < w.size(); j++){
        vw.push_back(w[j]);
    } return vw;
}

vector<int> ordenarVector(vector<int> v){
    vector<int> w;
    for(int i=menor(v);i<= mayor(v);i++){
        if(cantidadAp(i,v) != 0){
            for(int j = cantidadAp(i,v); j > 0; j--){
                w.push_back(i);
            }
        }
    } return w;
}

void ordenarSecuencias(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut){
    vector<int> v1 = leerVector(nombreArchivoIn1);
    vector<int> v2 = leerVector(nombreArchivoIn2);
    vector<int> v3 = concatenarVectores(v1, v2);
    vector<int> v4 = ordenarVector(v3);
    guardarVector(v4, nombreArchivoOut);
}

// Y aca van todos los otros headers de los ejercicios del laboratorio

#endif