#include <iostream>
#include <map>
#include <string>

using namespace std;

string primeraPalabra(string palabra){
    return palabra.substr(0, palabra.find(' '));
}


map<string,int> entradaDatos(int n){

    map<string,int> data;

    string string, country;
    for (int i = 0; i < n; ++i) {

        getline(cin, string);
        while (string.length()==0)
            getline(cin, string);

        country = primeraPalabra(string);

        data[country]++;
    }
    return data;
}



int main() {
    int n;
    cin >> n;

    auto datos = entradaDatos(n);

    for(auto elemento:datos){
        cout << elemento.first << " " << elemento.second << endl;
    }



    return 0;
}