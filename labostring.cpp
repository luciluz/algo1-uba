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
    }
	return v;
}

string darVueltaPalabra(string s){
	string res = "";
    vector <string> v = split(s, ' ');
    for(int i = v.size() -1; 1 <= i; i--) {
        res += v[i] + " ";
    } res += v[0];
	return res;
}
