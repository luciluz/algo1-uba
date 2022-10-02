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
    int chiquito = v[0];
    for(int i=1;i<v.size();i++){
        if(chiquito < v[i]){
            chiquito = v[i];
        }
    } return chiquito;
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
    cout << "el reverso del vector es: ";
    mostrarVector(v);
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

vector<int> v = {1,2,3,4,5}; // probar con distintos vectores
int k = 1; // probar con distinto valores

int main() {
    rotar(v, k);
    cout << "la rotación de valor " << k << " queda: ";
    mostrarVector(v);
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

// Ejercicio 6 

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

// Esto puede ir en main

int main() {
    int k;
    cin >> k;
    vector<int> v = factoresPrimos(k);
    mostrarVector(v);
}


// Ejercicio 7 
// Dado un vector de enteros muestra por la salida estándar, el vector
// Ejemplo: si el vector es <1, 2, 5, 65> se debe mostrar en pantalla [1, 2, 5, 65]
void mostrarVector(vector<int> v){
    cout << "[";
    for(int i=0; i<v.size()-1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1] << "]";
}

// Ejercicio 8

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

int main() {
    vector<int> l;
    l = leerVector("lista_de_numeros.txt");
    mostrarVector(l);
    return 0;
}

// Ejercicio 9

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

// Esto puedes poner en main
int main() {
    vector<int> l ={1,2,3,4}; // probar con distintos vectores
    guardarVector(l,"lista_del_1_al_4.txt");
    return 0;
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
// Esto puede ir en main

int main() {
    vector<int> l;
    l = leerVector("elementoMedio.in");
    cout << elementoMedio(l);
    return 0;
}

// Ejercicio 11
// el codigo corre bien, solo que te reemplaza el archivo
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

// Esto puede ir en main

int main() {
    int x;
    x = cantidadAparicionesDePalabra("cantidadAparicionesDePalabra.in", "Esa");
    cout << "la palabra aparece: " << x << " veces." << endl;
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

// Ejercicio 15

vector<int> interseccion(){
    string nombreArchivo1, nombreArchivo2;
    cin >> nombreArchivo1;
    cin >> nombreArchivo2;
    vector<int> v, w, vw;
    v = leerVector(nombreArchivo1);
    w = leerVector(nombreArchivo2);
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < w.size(); j++){
            if(v[i]==w[j]){
                vw.push_back(v[i]);
            }
        }
    }
    return vw;
}
