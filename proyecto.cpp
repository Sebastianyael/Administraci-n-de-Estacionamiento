#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#define CYAN    "\033[36m"
#define RESET   "\033[0m"
/*#include <fstream>*/
using namespace std;
void Limpieza();

int main(){
    
    double codigo = 0.0;
    double  total = 0;
    int a,ancho = 1;

    map<double, double> productos;
    productos[1.0] = 100;
    productos[1.2] = 130;
    productos[1.3] = 200;
    productos[1.4] = 250;
    productos[1.5] = 120;
    productos[1.6] = 50;
    productos[1.7] = 180;
    productos[1.8] = 50;
    productos[1.9] = 30;
    productos[1.10] = 1500;
    productos[1.11] = 180;
    productos[1.12] = 150;


    productos[2.0] = 100;
    productos[2.2] = 265;
    productos[2.3] = 300;
    productos[2.4] = 550;
    productos[2.5] = 340;
    productos[2.6] = 1300;
    productos[2.7] = 150;
    productos[2.8] = 230;
    productos[2.9] = 430;
    productos[2.10] = 70;
    productos[2.11] = 260;
    productos[2.12] = 600;
    productos[2.13] = 700;
    productos[2.14] = 3500;
    productos[2.15] = 1200;
    productos[2.16] = 390;



    productos[3.0] = 279;
    productos[3.2] = 3000;
    productos[3.3] = 2000;
    productos[3.4] = 2100;
    productos[3.5] = 260;
    productos[3.6] = 300;
    productos[3.7] = 1300;
    productos[3.8] = 890;
    productos[3.9] = 500;
    productos[3.10] = 600;
    productos[3.11] = 10000;
    productos[3.12] = 4500;
    productos[3.13] = 200;
    productos[3.14] = 2100;
    productos[3.15] = 300;
    productos[3.16] = 800;
    productos[3.17] = 500;
    productos[3.18] = 1300;
    int producto,tipoTransporte;
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
        cout << string(ancho * 30, '-') << endl;
        cout << "Productos y Servicios" << endl;
        cout << string(ancho * 30, '-') << endl;
        cout << "Nosotros" << endl;
        cout << string(ancho * 30, '-') << endl;
        cout << "Salir" << endl;
        cout << string(ancho * 30, '-') << endl;
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
        cout << string(ancho * 25, '-') << endl;
        cout << "2) Mantenimineto" << endl;
        cout << string(ancho * 25, '-') << endl;
        cout << "3) Refaccionaria" << endl;
        cout << string(ancho * 25, '-') << endl;
        cout << "Elige una opcion" << endl;
        cin >> producto;

        if( producto == 1 ){
            cout << string(ancho * 40, '-') << endl;
            cout << CYAN << "1.0" << RESET << string(ancho*1 , '|' ) << "100 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Shampoo para autos" << endl;
            cout << CYAN << "2.0" << RESET << string(ancho*1 , '|' ) << "130 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Cera liquida" << endl;
            cout << CYAN << "3.0" << RESET << string(ancho*1 , '|' ) << "200 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Limpiador de llantas y rines" << endl;
            cout << CYAN << "3.1" << RESET << string(ancho*1 , '|' ) << "250 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Limpiador de tapiceria" << endl;
            cout << CYAN << "3.2" << RESET << string(ancho*1 , '|' ) << "120 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Limpiador de cristales" << endl;
            cout << CYAN << "4.0" << RESET << string(ancho*1 , '|' ) << "50 MXN" << string(ancho*3 , ' ') << string(ancho * 1, '|') << "Ambientadores para autos" << endl;
            cout << CYAN << "3.3" << RESET << string(ancho*1 , '|' ) << "180 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Limpiador de interiores" << endl;
            cout << CYAN << "5.0" << RESET << string(ancho*1 , '|' ) << "50 MXN" << string(ancho*3 , ' ') << string(ancho * 1, '|') << "Esponjas de microfibra" << endl;
            cout << CYAN << "6.0" << RESET << string(ancho*1 , '|' ) << "30 MXN" << string(ancho*3 , ' ') << string(ancho * 1, '|') << "Guantes de limpieza de microfibra" << endl;
            cout << CYAN << "7.0" << RESET << string(ancho*1 , '|' ) << "1500 MXN" << string(ancho*1 , ' ') << string(ancho * 1, '|') << "Aspiradora portatil para autos" << endl;
            cout << CYAN << "3.4" << RESET << string(ancho*1 , '|' ) << "180 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Limpiador de tapetes de alfombra" << endl;
            cout << CYAN << "3.5" << RESET << string(ancho*1 , '|' ) << "150 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Limpiador de cuero o vinil" << endl;
            cout << string(ancho * 40, '-') << endl;
            
            cout << "Quieres comprar un producto" << endl;
            cin >> eleccion;
            if(eleccion == si){
                while(eleccion == si){
                    cout << "Ingresa el numero del producto que quieras comprar" << endl;
                    cin >> codigo;
                    cout << "Quieres comprar otro producto de esta seccion" << endl;
                    cin >> eleccion;
                    total = total + productos[codigo];
    
                }
            }

            cout << "El total a pagar es: " << total << endl;
            cout << "Quieres finalizar tu compra?" << endl;
            cout << "NOTA al finalizar tu compra se mostraran el total de todos los productos y servicios adquiridos" << endl;
            cin >> eleccion;

            if(eleccion == si){
                cout << "El total a pagar es: " << total << endl;
                cout << "Gracias por tu compra";
                total = 0;
            }
           
        }else if(producto == 2){
            cout << CYAN << "2.0" << RESET << string(ancho*1 , '|' ) << "100 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Aceite para motor" << endl;
            cout << CYAN << "2.2" << RESET << string(ancho*1 , '|' ) << "265 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Filtros de aceite" << endl;
            cout << CYAN << "2.3" << RESET << string(ancho*1 , '|' ) << "300 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Filtro de aire" << endl;
            cout << CYAN << "2.4" << RESET << string(ancho*1 , '|' ) << "550 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Filtro de combustible" << endl;
            cout << CYAN << "2.5" << RESET << string(ancho*1 , '|' ) << "340 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Anticongelante/refrigerante" << endl;
            cout << CYAN << "2.6" << RESET << string(ancho*1 , '|' ) << "1300 MXN" << string(ancho * 2 , ' ') << string(ancho *1, '|') << "Baterias para autos" << endl;
            cout << CYAN << "2.7" << RESET << string(ancho*1 , '|' ) << "150 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Lubricante para frenos" << endl;
            cout << CYAN << "2.8" << RESET << string(ancho*1 , '|' ) << "230 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Limpiador de inyectores" << endl;
            cout << CYAN << "2.9" << RESET << string(ancho*1 , '|' ) << "430 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Liquido de frenos" << endl;
            cout << CYAN << "2.10" << RESET << string(ancho*1 , '|' ) << "70 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Liquido limpiaparabrisas" << endl;
            cout << CYAN << "2.11" << RESET << string(ancho*1 , '|' ) << "260 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Correas de distribucion" << endl;
            cout << CYAN << "2.12" << RESET << string(ancho*1 , '|' ) << "600 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Limpiador de sistema de frenos" << endl;
            cout << CYAN << "2.13" << RESET << string(ancho*1 , '|' ) << "700 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Bujias" << endl;
            cout << CYAN << "2.14" << RESET << string(ancho*1 , '|' ) << "3500 MXN" << string(ancho * 2 , ' ') << string(ancho *1, '|') << "Amortiguadores" << endl;
            cout << CYAN << "2.15" << RESET << string(ancho*1 , '|' ) << "1200 MXN" << string(ancho * 2 , ' ') << string(ancho *1, '|') << "Pastillas de freno" << endl;
            cout << CYAN << "2.16" << RESET << string(ancho*1 , '|' ) << "390 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Aceite para transmision" << endl;

            cout << "Quieres comprar un producto" << endl;
            cin >> eleccion;
            if(eleccion == si){
                while(eleccion == si){
                    cout << "Ingresa el numero del producto que quieras comprar" << endl;
                    cin >> codigo;
                    cout << "Quieres comprar otro producto de esta seccion" << endl;
                    cin >> eleccion;
                    total = total + productos[codigo];
    
                }
            }

            cout << "El total a pagar es: " << total << endl;
            cout << "Quieres finalizar tu compra?" << endl;
            cout << "NOTA al finalizar tu compra se mostraran el total de todos los productos y servicios adquiridos" << endl;
            cin >> eleccion;

            if(eleccion == si){
                cout << "El total a pagar es: " << total << endl;
                cout << "Gracias por tu compra";
                total = 0;
            }

           
        }else if(producto == 3 ){
            cout << CYAN << "3.0" << RESET << string(ancho*1 , '|' ) << "279 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Pastillas de freno" << endl;
            cout << CYAN << "3.2" << RESET << string(ancho*1 , '|' ) << "3000 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Rines" << endl;
            cout << CYAN << "3.3" << RESET << string(ancho*1 , '|' ) << "2000 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Discos de freno" << endl;
            cout << CYAN << "3.4" << RESET << string(ancho*1 , '|' ) << "2100 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Bombas de agua" << endl;
            cout << CYAN << "3.5" << RESET << string(ancho*1 , '|' ) << "260 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Bujias de repuesto" << endl;
            cout << CYAN << "3.6" << RESET << string(ancho*1 , '|' ) << "300 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Correas de distribucion" << endl;
            cout << CYAN << "3.7" << RESET << string(ancho*1 , '|' ) << "1300 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Baterias de arranque" << endl;
            cout << CYAN << "3.8" << RESET << string(ancho*1 , '|' ) << "890 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Radiadores" << endl;
            cout << CYAN << "3.9" << RESET << string(ancho*1 , '|' ) << "500 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Fusibles" << endl;
            cout << CYAN << "3.10" << RESET << string(ancho*1 , '|' ) << "600 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Luces y bombillas de repuesto" << endl;
            cout << CYAN << "3.11" << RESET << string(ancho*1 , '|' ) << "10,000 MXN" << string(ancho * 1 , ' ') << string(ancho *1, '|') << "Motor de arranque" << endl;
            cout << CYAN << "3.12" << RESET << string(ancho*1 , '|' ) << "4500 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Alternadores" << endl;
            cout << CYAN << "3.13" << RESET << string(ancho*1 , '|' ) << "200 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Juntas y empaques" << endl;
            cout << CYAN << "3.14" << RESET << string(ancho*1 , '|' ) << "2100 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Soportes y piezas de suspension" << endl;
            cout << CYAN << "3.15" << RESET << string(ancho*1 , '|' ) << "300 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Aceite de direccion hidraulica" << endl;
            cout << CYAN << "3.16" << RESET << string(ancho*1 , '|' ) << "800 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Valvulas de motor" << endl;
            cout << CYAN << "3.17" << RESET << string(ancho*1 , '|' ) << "500 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Tapa de radiador" << endl;
            cout << CYAN << "3.18" << RESET << string(ancho*1 , '|' ) << "1300 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Llanta" << endl;

            cout << "Quieres comprar un producto" << endl;
            cin >> eleccion;
            if(eleccion == si){
                while(eleccion == si){
                    cout << "Ingresa el numero del producto que quieras comprar" << endl;
                    cin >> codigo;
                    cout << "Quieres comprar otro producto de esta seccion" << endl;
                    cin >> eleccion;
                    total = total + productos[codigo];
    
                }
            }

            cout << "El total a pagar es: " << total << endl;
            cout << "Quieres finalizar tu compra?" << endl;
            cout << "NOTA al finalizar tu compra se mostraran el total de todos los productos y servicios adquiridos" << endl;
            cin >> eleccion;

            if(eleccion == si){
                cout << "El total a pagar es: " << total << endl;
                cout << "Gracias por tu compra";
                total = 0;
            }

        }


    }
    }
    
}

/*
void Limpieza(){
    ofstream compras;
    compras.open("listaDeCompras.txt" , ios::app);
    string producto;
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

*/