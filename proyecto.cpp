#include <iostream>
#include <string>
#include <iomanip>
/*#include <fstream>*/
using namespace std;
void Limpieza();

int main(){
    int producCompra = 0,total = 0;
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
        cin >> productos;

        if( productos == 1 ){
            cout << string(ancho * 40, '-') << endl;
            cout << "100 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Shampoo para autos" << endl;
            cout << "130 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Cera liquida" << endl;
            cout << "200 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Limpiador de llantas y rines" << endl;
            cout << "250 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Limpiador de tapiceria" << endl;
            cout << "120 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Limpiador de cristales" << endl;
            cout << "50 MXN" << string(ancho*3 , ' ') << string(ancho * 1, '|') << "Ambientadores para autos" << endl;
            cout << "180 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Limpiador de interiores" << endl;
            cout << "50 MXN" << string(ancho*3 , ' ') << string(ancho * 1, '|') << "Esponjas de microfibra" << endl;
            cout << "30 MXN" << string(ancho*3 , ' ') << string(ancho * 1, '|') << "Guantes de limpieza de microfibra" << endl;
            cout << "1500 MXN" << string(ancho*1 , ' ') << string(ancho * 1, '|') << "Aspiradora portatil para autos" << endl;
            cout << "180 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Limpiador de tapetes de alfombra" << endl;
            cout << "150 MXN" << string(ancho*2 , ' ') << string(ancho * 1, '|') << "Limpiador de cuero o vinil" << endl;
            cout << string(ancho * 40, '-') << endl;
            
            cout << "Quieres comprar un producto" << endl;
            cin >> eleccion;
            if(eleccion == si){
                while(eleccion == si){
                    cout << "Ingresa el precio del producto que quieras comprar" << endl;
                    cin >> producCompra;
                    cout << "Quieres comprar otro producto de esta seccion" << endl;
                    cin >> eleccion;
                    total = total + producCompra;
                }
            }
            cout << "El total es de: " << total << endl;
            cout << "Quieres finalizar tu compra?" << endl;
            cout << "NOTA:al finalizar tu compra se mostrara el total a pagar de todos los productos y servicios contratados" << endl;
            cin >> eleccion;
            if(eleccion == si){ 
            cout << "el total a pagar es: " << total << "Gracias por su compra" << endl;
            total = 0;
            }
            
            

        }else if(productos == 2){
            cout << "100 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Aceite para motor" << endl;
            cout << "265 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Filtros de aceite" << endl;
            cout << "300 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Filtro de aire" << endl;
            cout << "550 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Filtro de combustible" << endl;
            cout << "340 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Anticongelante/refrigerante" << endl;
            cout << "1300 MXN" << string(ancho * 2 , ' ') << string(ancho *1, '|') << "Baterias para autos" << endl;
            cout << "150 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Lubricante para frenos" << endl;
            cout << "230 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Limpiador de inyectores" << endl;
            cout << "430 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Liquido de frenos" << endl;
            cout << "70 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Liquido limpiaparabrisas" << endl;
            cout << "260 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Correas de distribucion" << endl;
            cout << "600 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Limpiador de sistema de frenos" << endl;
            cout << "700 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Bujias" << endl;
            cout << "3500 MXN" << string(ancho * 2 , ' ') << string(ancho *1, '|') << "Amortiguadores" << endl;
            cout << "1200 MXN" << string(ancho * 2 , ' ') << string(ancho *1, '|') << "Pastillas de freno" << endl;
            cout << "390 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Aceite para transmision" << endl;

            cout << "Quieres comprar un producto" << endl;
            cin >> eleccion;
            if(eleccion == si){
                while(eleccion == si){
                    cout << "Ingresa el precio del producto que quieras comprar" << endl;
                    cin >> producCompra;
                    cout << "Quieres comprar otro producto de esta seccion" << endl;
                    cin >> eleccion;
                    total = total + producCompra;
                }
            }
            cout << "El total es de: " << total << endl;
            cout << "Quieres finalizar tu compra?" << endl;
            cout << "NOTA:al finalizar tu compra se mostrara el total a pagar de todos los productos y servicios contratados" << endl;
            cin >> eleccion;
            if(eleccion == si){ 
            cout << "el total a pagar es: " << total << "Gracias por su compra" << endl;
            total = 0;
            }

        }else if(productos == 3 ){
            cout << "279 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Pastillas de freno" << endl;
            cout << "3000 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Rines" << endl;
            cout << "2000 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Discos de freno" << endl;
            cout << "2100 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Bombas de agua" << endl;
            cout << "260 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Bujias de repuesto" << endl;
            cout << "300 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Correas de distribucion" << endl;
            cout << "1300 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Baterias de arranque" << endl;
            cout << "890 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Radiadores" << endl;
            cout << "500 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Fusibles" << endl;
            cout << "600 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Luces y bombillas de repuesto" << endl;
            cout << "10,000 MXN" << string(ancho * 1 , ' ') << string(ancho *1, '|') << "Motor de arranque" << endl;
            cout << "4500 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Alternadores" << endl;
            cout << "200 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Juntas y empaques" << endl;
            cout << "2100 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Soportes y piezas de suspension" << endl;
            cout << "300 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Aceite de direccion hidraulica" << endl;
            cout << "800 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Valvulas de motor" << endl;
            cout << "500 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Tapa de radiador" << endl;
            cout << "1300 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Llanta" << endl;

            cout << "Quieres comprar un producto" << endl;
            cin >> eleccion;
            if(eleccion == si){
                while(eleccion == si){
                    cout << "Ingresa el precio del producto que quieras comprar" << endl;
                    cin >> producCompra;
                    cout << "Quieres comprar otro producto de esta seccion" << endl;
                    cin >> eleccion;
                    total = total + producCompra;
                }
            }
            cout << "El total es de: " << total << endl;
            cout << "Quieres finalizar tu compra?" << endl;
            cout << "NOTA:al finalizar tu compra se mostrara el total a pagar de todos los productos y servicios contratados" << endl;
            cin >> eleccion;
            if(eleccion == si){ 
            cout << "el total a pagar es: " << total << "Gracias por su compra" << endl;
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
