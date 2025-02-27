#include <iostream>
#include <string>
using namespace std;
int main(){
    int a;
    std::string carroCamioneta = "1";
    std::string motocicletas = "2";
    std::string bicicleta = "3";
    std::string tipoTransporte = "";
    std::string opcion = "";
    std::string cuota = "cuota";
    std::string salir  = "salir";
    while(opcion != salir){
    cout << "Bienvenidos a la administracion del estacionamiento UTVT" << endl;
    cout << "Cuota" << endl;
    cout << "Productos" << endl;
    cout << "Nosotros" << endl;
    cout << "Salir" << endl;
    cout << "Selecciona una opcion" << endl;
    cin >> opcion;

    if(opcion == cuota){
        cout << "1) Carro o camioneta" << endl;
        cout << "2) Motocicletas" << endl;
        cout << "3) Bicicletas" << endl;
        cout << "Elije una opcion" << endl;
        cin >> tipoTransporte;
        
        if(tipoTransporte == carroCamioneta ){
            cout << "Usted selecciono la opcion de Carro o camioneta" << endl;
            cout << "1) Cobro menor a dos horas 20 pesos" << endl;
            cout << "2) Cobro por dia 80 pesos " << endl;
            cout << "3) Cobro semanal 500 pesos" << endl;
            cout << "4) Cobro mensual 2050 pesos" << endl;
            cout << "5) Cobro anual 25,000 pesos" << endl;
            cout << "Selecciona una cuota" << endl;
            cin >> a;
            if(a == 1 or a == 2 or a == 3 or a == 4 or a == 5){
                cout << "El total a pagar es: " << endl;
             }
        }else if(tipoTransporte == motocicletas ){
            cout << "Usted selecciono la opcion de Motocicletas" << endl;
            cout << "1) Cobro menor a dos horas 20 pesos" << endl;
            cout << "2) Cobro por dia 50 pesos " << endl;
            cout << "3) Cobro semanal 300 pesos" << endl;
            cout << "4) Cobro mensual 1200 pesos" << endl;
            cout << "5) Cobro anual 14,000 pesos" << endl;
            cout << "Selecciona una cuota" << endl;
            cin >> a;
            if(a == 1 or a == 2 or a == 3 or a == 4 or a == 5){
                cout << "El total a pagar es: " << endl;
             }

        }else if(tipoTransporte == bicicleta){
            cout << "Usted selecciono la opcion de Bicicletas" << endl;
            cout << "1) Cobro menor a dos horas 20 pesos" << endl;
            cout << "2) Cobro por dia 40 pesos " << endl;
            cout << "3) Cobro semanal 200 pesos" << endl;
            cout << "4) Cobro mensual 800 pesos" << endl;
            cout << "5) Cobro anual 9,500 pesos" << endl;
            cout << "Selecciona una cuota" << endl;
            cin >> a;
             if(a == 1 or a == 2 or a ==3 or a == 4 or a == 5){
                cout << "El total a pagar es: " << endl;
             }
        }
        
    }
    }
    
}