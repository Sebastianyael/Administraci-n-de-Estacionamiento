#include <iostream>
#include <string>
#include <iomanip>
#include <map>
/*#include <fstream>*/
using namespace std;
void Limpieza();

int main(){
    double codigo = 0.0;
    map<double, double> productos;
    productos[1.1] = 100;
    productos[1.2] = 150;

    cout << "Ingresa codigo" << endl;
    cin >> codigo;
    cout << productos[codigo];
}