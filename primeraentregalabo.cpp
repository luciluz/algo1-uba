// Ejercicio 1 Fibonacci

# include <iostream>
using namespace std;

// Funcion de fibonacci que calcula n-esimo termino
int fibonacci(int n) {
    int b = 0;
    int c = 1;
    int sum = b + c;
    int i = 2;

    if(n<=1) {
        return n;
    } else {
        while(i<=n) {
            sum = b + c;
            i = i + 1;
            b = c;
            c = sum;
        }
        return sum;
    }

}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}


// Ejercicio 2 division

# include <iostream>
using namespace std;

void division(int dividendo, int divisor, int& cociente, int& resto) {
    cociente = 0;
    resto = 0;
    int d = dividendo;
    while(d >= divisor){
        d += - divisor;
        cociente++;
    }
    resto = d;
}

int main() {
    /* No hace falta modificar el main */
    //Leo la entrada
    int divisor,dividendo,cociente,resto;
    cin >> dividendo>>divisor;

    //Calculo la division
    division(dividendo,divisor,cociente,resto);

    //Salida
    cout << cociente << " " << resto;

    return 0;
}


// Ejercicio 3 swap

# include <iostream>
using namespace std;

void swap(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

int main() {
    /* No hace falta modificar el main */
    int a,b;
    //Leo a
    cin >> a >> b;

    swap(a,b);

    //Devuelvo despues del swap
    cout << a << " " << b;
    return 0;
}


// Ejercicio 4 estaOrdenado

#include <iostream>
#include <vector>

using namespace std;

bool esCreciente(vector<int> v) {
    int i = 0;
    while (i < v.size() - 1) {
        if (v[i] <= v[i+1]) {
            i++;
        } else {
            return false;
        }
    } return true;
}

bool esDecreciente(vector<int> v) {
    int i = 0;
    while (i < v.size() - 1) {
        if (v[i] >= v[i+1]) {
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

int main() {
    /* No hace falta modificar el main */
    // Leo las entradas
    int n;
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }

    // Evaluo si el vector v esta ordenado
    bool res = estaOrdenado(v);

    // Imprimo la salida
    cout << (res?"True":"False");

    return 0;
}


// Ejercicio 5 rotar

#include <iostream>
#include <vector>

using namespace std;

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

int main() {
    /* No hace falta modificar el main */
    // Leo las entradas
    int n; //Longitud del vector a rotar
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }

    int k; // La cantidad que tengo que rotar la guardo en k
    cin >> k;

    // Hago la rotacion
    vector<int> res = rotar(v,k);
    i = 0;

    // Imprimo el vector resultado
    while (i < res.size()){
        cout << res[i] << " ";
        i++;
    }

    return 0;
}
