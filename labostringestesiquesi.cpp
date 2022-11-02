#include "ejercicios.h"

/* Para compilar */ 

using namespace std;

vector<string> split(string s, char delim){
    vector<string> v;
    string p = "";
    for(int i = 0; i < s.size(); i++){
        if(s.at(i) != delim){
            p += s.at(i);
        } else{
            if(p != "") {
                v.push_back(p);
                p = "";
            }
        }
    } if(p != "") {
        v.push_back(p);
        }
    return v;
}

string darVueltaPalabra(string s){
    string res = "";
    string res0 = res;
    vector <string> v = split(s, ' ');
    for(int i = v.size() -1; 1 <= i; i--) {
        res += v[i] + " ";
    } if(s != ""){
        res += v[0];
        return res;
            } else {
            return res0;
    }
}

// Decidir si s1 es substring o subsecuencia de s2
bool existeElemEnString(char c, string s, int& j){
    bool res = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == c){
            res = true;
            j = i;
            break;
        }
    } return res;
}

bool existeElemEnStringDesdeHasta(char c, string s, int& j, int a, int b){
    bool res = false;
    for(int i = a; i < b; i++){
        if(s[i] == c){
            res = true;
            j = i+1;
            break;
        }
    } return res;
}

bool subsecuencia(string s1, string s2) {
	int cont = 0;
    int i = 0;
    if(existeElemEnString(s1[0], s2, i)) {
        cont++;
        for(int j = 1; j < s1.size(); j++){
            if(existeElemEnStringDesdeHasta(s1[j], s2, i, i, s2.size())){
                cont++;
            }
        }
    } return cont == s1.size();
}

// Mismo orden relativo de conjunto de anagramas y dentro de cada vector y con repetidos
bool todoCharDeEstaEn(string s, string t){
    string s0 = s;
    string t0 = t;
    bool res = false;
    int cont = 0;
    int j = 0;
    for(int i = 0; i < s0.size(); i++){
        if(existeElemEnString(s0[i], t0, j)){
            t0.erase(t0.begin() + j);
            cont++;
        }
    } if((t0 == "") && (s0.size() - cont == 0)){
        res = true;
    } return res;
}

bool sonAnagramas(string s1, string s2){
    return (s1.size() == s2.size()) && todoCharDeEstaEn(s1, s2);
}

void juntaAnagramasDe(vector<string> v, string s, vector<string>& w, vector<vector<string>> res){
    for(int i = 0; i < v.size(); i++){
        if(sonAnagramas(v[i], s)){
            w.push_back(v[i]);
        }
    }
}

bool existeStringEn(string s, vector<vector<string>> v){
    bool res = false;
    for(int i = 0; i < v.size(); i++){
       for(int j = 0; j < v[i].size(); j++){
           if(s == v[i][j]){
               res = true;
           }
       }
    } return res;
}

vector<vector<string> > agruparAnagramas(vector<string> v){
	vector<vector<string>> res = {};
    vector<string> w = {};
    for(int i = 0; i < v.size(); i++){
        if(!existeStringEn(v[i], res)){
            juntaAnagramasDe(v, v[i], w, res);
            res.push_back(w);
            w = {};
        }

    }
	return res;
}

string alReves(string s){
    string res = "";
    for(int i = s.size() -1; 0 <= i; i--) {
        res += s[i];
    } return res;
}
bool esPalindromo(string s){
	return alReves(s) == s;
}

bool tieneRepetidos(string s){
	bool distinto = true;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size(); j++){
            if((s[j] == s[i]) && (j != i)){
                distinto = false;
            }
        }
    }
	return !distinto;
}

string rotar(string s, int j){
    string res = s;
    int k = j%s.size();
    for(int i = 0; i < s.size(); i++){
        if(i+k < s.size()){
            res[i+k] = s[i];
        } else{
            res[i-s.size()+k] = s[i];
        }
    }
    return res;
}

// no se puede usar substring
string darVueltaK(string s, int k){
    string res(s);
    return res;
}

// no se puede usar substring
string darVueltaK(string s, int k){
	string res(s);
	return res;
}

string abueloLaino(string s){
    string res;
    return res;
}

int cantidadDeFelicitaciones(vector<string> v){
    int res;
    return res;
}

int middleOut(string s, string t){

    return 0;
}
