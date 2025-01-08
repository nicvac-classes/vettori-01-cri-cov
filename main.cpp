#include <iostream>


using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    string v[w[5]];
    string x[y[10]];
    int i, p, d;

    i = 0;
    while (i < 5) {
        v[0] = "geolier";
        v[1] = "simba";
        v[2] = "baby";
        v[3] = "shiva";
        v[4] = "paky";
        cout << "vettore V cella numero " << i + 1 << ":" << v[i] << endl;
        i = i + 1;
    }
    i = 0;
    while (i < 5) {
        w[0] = "tedua";
        w[1] = "kid yugi";
        w[2] = "papa v";
        w[3] = "villa";
        w[4] = "lele blade";
        cout << "vettore W cella numero " << i + 1 << ":" << w[i] << endl;
        i = i + 1;
    }
    i = 1;
    while (i < 10) {
        x[i] = i;
        if (x[i] % 2 == 0) {
            p = x[i];
            cout << "Vettore X con indice pari cella numero" << i << ":" << p << endl;
            cout << "Vettore X con valore pari cella numero " << i << ":" << p << endl;
        } else {
            d = x[i];
            cout << "Vettore X con indice dispari cella numero" << i << ":" << d << endl;
        }
        i = i + 1;
    }
    i = 0;
    while (i * 2 <= 10) {
        y[i] = i * 2;
        cout << "Vettore Y cella numero" << i + 1 << ":" << y[i] << endl;
        i = i + 1;
    }
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
