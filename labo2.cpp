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

// Ejercicio 4

//Esta forma es para pasar de decimal a binario

# include <iostream>
using namespace std;

int potencia(int x, int y){
    int i = 1;
    int p = x;
    if (y == 0){
        return 1;
    } else {
        while (i < y) {
            x = x * p;
            i++;
        } return x;}
}

int pasarABinario(int n){
    int m = n;
    int binario = 0;
    int k = 0;
    while (m > 0){
        if(m % 2 == 1){
            binario += potencia(10,k);
            m = (m-1)/2;
            k++;
        } else {
           m = m/2;
           k++;
        }
    }
    return binario;
}

int main(){
    int x;
    cout << "Ingresa un número cualquiera: "<< endl;
    cin >> x;
    cout << "Tu número en binario es: " << pasarABinario(x) << endl;
}

// Esta manera es para pasar de binario a decimal

# include <iostream>
using namespace std;

int potencia(int x, int y){
    int i = 1;
    int p = x;
    if (y == 0){
        return 1;
    } else {
        while (i < y) {
            x = x * p;
            i++;
        } return x;}
}

int pasarADecimal(int n){
    int m = n;
    int decimal = 0;
    int k = 0;
    while (m > 0){
        if(m % 10 != 0){
            decimal += potencia(2,k);
            m = (m-(m % 10))/10;
            k++;
        } else {
           m = m/10;
           k++;
        }
    }
    return decimal;
}

int main(){
    int x;
    cout << "Ingresa un número en base binaria: "<< endl;
    cin >> x;
    cout << "Tu número en base decimal es: " << pasarADecimal(x) << endl;
}

// Ejercicio 5
# include <iostream>
using namespace std;

int main(){
    float x;
    cout << "Ingresa el radio: "<< endl;
    cin >> x;
    cout << "El diámetro es: " << x*2 << endl;
    cout << "La circunferencia es: " << 2*x*3.13159 << endl;
    cout << "El área es: " << x*x*3.13159 << endl;
}

// otra manera de hacer el 5 usando valor por referencia

# include <iostream>
using namespace std;

float calcular(float radio, float &diametro, float &circunferencia, float &area){
    diametro = 2*radio;
    float pi = 3.14159;
    circunferencia = 2 * pi * radio;
    area = pi * radio * radio;
    return 0;
}

int main(){
    float d, c , a , r;
    cout << "Ingresa el radio: "<< endl;
    cin >> r;
    calcular(r, d, c, a);
    cout << "El diámetro es: " << d << endl;
    cout << "La circunferencia es: " << c << endl;
    cout << "El área es: " << a << endl;
}

// Ejercicio 6 triplicarPorValor

# include <iostream>
using namespace std;

int triplicarPorValor(int v){
    int cuenta = 3*v;
    return cuenta;
}

int main(){
    int x;
    cout << "Ingresa un número: "<< endl;
    cin >> x;
    cout << "El triple es: " << triplicarPorValor(x) << endl;
}

// Ejercicio 6 triplicarPorReferencia

# include <iostream>
using namespace std;

int triplicarPorReferencia(int &v){
    v = 3*v;
    return 0;
}

int main(){
    int x;
    cout << "Ingresa un número: "<< endl;
    cin >> x;
    triplicarPorReferencia(x);
    cout << "El triple es: " << x << endl;
}

// Ejercicio 7
# include <iostream>
using namespace std;

void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

int main(){
    int x;
    int y;
    cout << "Ingresa un número: "<< endl;
    cin >> x;
    cout << "Ingresa otro: "<< endl;
    cin >> y;
    cout << "swap" << endl;
    swap(x, y);
    cout << x << endl;
    cout << y << endl;
}

// Ejercicio 8

# include <iostream>
using namespace std;

void collatz(int n, int& cantPasos) {
    cantPasos = 0;
    while (n > 1){
        if (n % 2 == 0) {
             n = n / 2;
            cantPasos++;
        } else {
            n = (n * 3) + 1;
            cantPasos++;
        }
    }
}

int main(){
    int a;
    int b;
    cout << "Ingresa un número: "<< endl;
    cin >> a;
    collatz(a, b);
    cout << "La cantidad de pasos es: " <<  b << endl;
}

// Ejercicio 8

# include <iostream>
using namespace std;

int division(int dividendo, int divisor, int& cociente, int& resto) {
    resto = dividendo % divisor;
    cociente = (dividendo - resto)/divisor;
    return 0;
}

int main(){
    int a, b;
    int c, r;
    cout << "Ingresa un dividendo: "<< endl;
    cin >> a;
    cout << "Ingresa un divisor: "<< endl;
    cin >> b;
    division(a, b, c, r);
    cout << "El cociente es: " <<  c << endl;
    cout << "El resto es: " <<  r << endl;
}
