#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;
void Limpieza();

int main(){
    int a, ancho = 1;
    int productos,tipoTransporte;
    std::string eleccion;
    std::string si = "si";
    std::string opcion = "";
    std::string cuota = "cuota";
    std::string tipoProductos = "productos";
    std::string salir  = "salir";
  
    while(opcion != salir){
        cout << string(ancho * 60, '-') << endl;
        cout << "Bienvenidos a la administracion del estacionamiento UTVT" << endl;
        cout << string(ancho * 60, '-') << endl;
        cout << "Cuota" << endl;
        cout << string(ancho * 40, '-') << endl;
        cout << "Productos y Servicios" << endl;
        cout << string(ancho * 40, '-') << endl;
        cout << "Nosotros" << endl;
        cout << string(ancho * 40, '-') << endl;
        cout << "Salir" << endl;
        cout << string(ancho * 40, '-') << endl;
        cout << "Selecciona una opcion" << endl;
        cin >> opcion;

    if(opcion == cuota){
        cout << "1) Carro o camioneta" << endl;
        cout << string(ancho * 40, '-') << endl;
        cout << "2) Motocicletas" << endl;
        cout << string(ancho * 40, '-') << endl;
        cout << "3) Bicicletas" << endl;
        cout << string(ancho * 40, '-') << endl;
        cout << "Elije una opcion" << endl;
        cin >> tipoTransporte;
        
        if(tipoTransporte == 1 ){
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') <<  setw(ancho) << "Carro o camioneta"  << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') <<  setw(ancho) << "1) Cobro menor a dos horas 20 pesos"<< endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') <<  setw(ancho) << "2) Cobro por dia 80 pesos " << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') <<  setw(ancho) << "3) Cobro semanal 500 pesos" << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') <<  setw(ancho) << "4) Cobro mensual 2050 pesos" << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') <<  setw(ancho) << "5) Cobro anual 25,000 pesos" << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << "Selecciona una cuota" << endl;
            cin >> a;

        }else if(tipoTransporte == 2 ){
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') <<  setw(ancho) << "Motocicletas" << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') <<  setw(ancho) << "1) Cobro menor a dos horas 20 pesos" << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') <<  setw(ancho) << "2) Cobro por dia 50 pesos " << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') <<  setw(ancho) << "3) Cobro semanal 300 pesos" << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') <<  setw(ancho) << "4) Cobro mensual 1200 pesos" << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') <<  setw(ancho) << "5) Cobro anual 14,000 pesos" << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << "Selecciona una cuota" << endl;
            cin >> a;
            
        }else if(tipoTransporte == 3){
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') << "Bicicletas" << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') << "1) Cobro menor a dos horas 20 pesos" << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') << "2) Cobro por dia 40 pesos " << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') << "3) Cobro semanal 200 pesos" << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') << "4) Cobro mensual 800 pesos" << endl;
            cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
            cout << string(ancho * 1, '|') << "5) Cobro anual 9,500 pesos" << endl;
            cout << "Selecciona una cuota" << endl;
            cin >> a;
             
        }
        
    }else if(opcion == tipoProductos){
        cout << "1) limpieza" << endl;
        cout << string(ancho * 60, '-') << endl;
        cout << "2) Mantenimineto" << endl;
        cout << string(ancho * 60, '-') << endl;
        cout << "3) Refaccionaria" << endl;
        cout << string(ancho * 60, '-') << endl;
        cout << "Elige una opcion" << endl;
        cin >> productos;

        if( productos == 1 ){
            cout << string(ancho * 60, '-') << endl;
            cout << "1) Shampoo para autos" << endl;
            cout << "2) Cera liquida o en pasta" << endl;
            cout << "3) Limpiador de llantas y rines" << endl;
            cout << "4) Limpiador de tapiceria" << endl;
            cout << "5) Limpiador de cristales" << endl;
            cout << "6) Ambientadores para autos" << endl;
            cout << "7) Limpiador de interiores (plasticos y viniles)" << endl;
            cout << "8) Esponjas de microfibra" << endl;
            cout << "9) Guantes de limpieza de microfibra" << endl;
            cout << "10) Aspiradora portatil para autos" << endl;
            cout << "11) Limpiador de tapetes de alfombra" << endl;
            cout << "12) Limpiador de cuero o vinil" << endl;
            cout << string(ancho * 60, '-') << endl;
            
            cout << "Quieres comprar un producto" << endl;
            cin >> eleccion;
            if(eleccion == si){
                while(eleccion == si){
                    Limpieza();
                    cout << "Quieres comprar otro producto de esta seccion" << endl;
                    cin >> eleccion;
                }
            }
            

        }else if(productos == 2){
            cout << string(ancho * 60, '-') << endl;
            cout << "1) Aceite para motor" << endl;
            cout << "2) Filtros de aceite" << endl;
            cout << "3) Filtro de aire" << endl;
            cout << "4) Filtro de combustible" << endl;
            cout << "5) Anticongelante/refrigerante" << endl;
            cout << "6) Baterias para autos" << endl;
            cout << "7) Lubricante para frenos" << endl;
            cout << "8) Limpiador de inyectores" << endl;
            cout << "9) Liquido de frenos" << endl;
            cout << "10) Liquido limpiaparabrisas" << endl;
            cout << "11) Correas de distribucion" << endl;
            cout << "12) Limpiador de sistema de frenos" << endl;
            cout << "13) Bujias" << endl;
            cout << "14) Amortiguadores" << endl;
            cout << "15) Pastillas de freno" << endl;
            cout << "16) Aceite para transmision" << endl;
            cout << string(ancho * 60, '-') << endl;

        }else if(productos == 3 ){
            cout << string(ancho * 60, '-') << endl;
            cout << "1) Pastillas de freno" << endl;
            cout << "2) Rines" << endl;
            cout << "3) Discos de freno" << endl;
            cout << "4) Bombas de agua" << endl;
            cout << "5) Bujias de repuesto" << endl;
            cout << "6) Correas de distribucion" << endl;
            cout << "7) Baterias de arranque" << endl;
            cout << "8) Radiadores" << endl;
            cout << "9) Fusibles" << endl;
            cout << "10) Luces y bombillas de repuesto" << endl;
            cout << "11) Motor de arranque" << endl;
            cout << "12) Alternadores" << endl;
            cout << "13) Juntas y empaques" << endl;
            cout << "14) Soportes y piezas de suspension" << endl;
            cout << "15) Aceite de direccion hidraulica" << endl;
            cout << "16) Valvulas de motor" << endl;
            cout << "17) Tapa de radiador" << endl;
            cout << "18) Llantas" << endl;
            cout << string(ancho * 60, '-') << endl;
        }


    }
    }
    
}

void Limpieza(){
    ofstream compras;
    string producto;
    compras.open("listaDeCompras.txt" , ios::app);
    if(compras.fail()){
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    cin.ignore(); 
    cout << "Ingresa el producto que quieres comprar" << endl;
    getline(cin,producto);
    compras << producto;
    compras.close();
}
