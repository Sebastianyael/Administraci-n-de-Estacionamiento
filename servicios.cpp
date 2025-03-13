#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#define CYAN    "\033[36m"
#define RESET   "\033[0m"
/#include <fstream>/
using namespace std;
std::string eleccion;
std::string si = "si";

// Seccion de servicios en forma de funciones 

void CargaBasica(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Servicio -  Carga Basico" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "90 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Carga 50% 6 horas" << endl;
    cout << "2) " << "180 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Carga 100% 12 horas" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void CargaMedia(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Servicio - Carga Media" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "180 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Carga 50% 4 horas." << endl;
    cout << "2) " << "360 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Carga 100% 8 horas." << endl;
    cout << string(ancho * 5 , ' ') << endl;

}

void CargaAlta(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Servicio carga" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "3) " << "250 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Carga 50% 30 minutos." << endl;
    cout << "2) " << "500 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Carga 100% 1 hora." << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void AparcarmientoExpress(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Parking Cercano o lejano" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "60 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Servicio de valet parking - Cercano. Ideal si tienes prisa. " << endl;
    cout << "2) " << "150 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Servicio de valet parking - Lejano. Ideal si vas con tiempo. " << endl;
    cout << string(ancho * 5 , ' ') << endl;

}

void AparcamientoDos(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Parking Nocturno" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "100 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Servicio de valet parking nocturno - 6 PM a 12 PM " << endl;
    cout << "2) " << "200 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Servicio de valet parking nocturno - 6 PM a 6 AM " << endl;
    cout << string(ancho * 5 , ' ') << endl;

}

void GasolinaRegular(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Recarga de gasolina REGULAR hasta 5 litros" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "23 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "1 litro de gasolina REGULAR" << endl;
    cout << "2) " << "46 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "2 litro de gasolina REGULAR" << endl;
    cout << "3) " << "69 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "3 litro de gasolina REGULAR" << endl;
    cout << "4) " << "92 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "4 litro de gasolina REGULAR" << endl;
    cout << "5) " << "115 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "5 litro de gasolina REGULAR" << endl;
    cout << string(ancho * 5 , ' ') << endl;

}

void GasolinaPremium(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Recarga de gasolina PREMIUM hasta 5 litros" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "26 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "1 litro de gasolina PREMIUM" << endl;
    cout << "2) " << "52 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "2 litro de gasolina PREMIUM" << endl;
    cout << "3) " << "78 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "3 litro de gasolina PREMIUM" << endl;
    cout << "4) " << "104 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "4 litro de gasolina PREMIUM" << endl;
    cout << "4) " << "130 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "5 litro de gasolina PREMIUM" << endl;
    cout << string(ancho * 5 , ' ') << endl;

}

void GasolinaDiesel(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Recarga de gasolina DIESEL hasta 5 litros" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "27 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "1 litros de gasolina DIESEL" << endl;
    cout << "2) " << "54 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "2 litros de gasolina DIESEL" << endl;
    cout << "3) " << "81 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "3 litros de gasolina DIESEL" << endl;
    cout << "4) " << "108 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "4 litros de gasolina DIESEL" << endl;
    cout << "4) " << "135 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "5 litros de gasolina DIESEL" << endl;
    cout << string(ancho * 5 , ' ') << endl;


}

void ReservacionSa(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Reserva Sabado - 24 horas" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "50 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Espacio estandar" << endl;
    cout << "2) " << "100 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Espacio con cargador EV" << endl;
    cout << "3) " << "110 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Espacio con lugar rotativo" << endl;
    cout << string(ancho * 5 , ' ') << endl;


}

void ReservacionDo(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Rerserva Domingo - 24 horas" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "50 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Espacio estandar" << endl;
    cout << "2) " << "100 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Espacio con cargador EV" << endl;
    cout << "3) " << "110 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Espacio con lugar rotativo" << endl;
    cout << string(ancho * 5 , ' ') << endl;

}
void BolsasAmano(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Ayuda para cargar bolsas a Mano" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "30 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Carga de 2 bolsas a mano" << endl;
    cout << "2) " << "50 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Carga de 4 bolsas a mano" << endl;
    cout << string(ancho * 5 , ' ') << endl;

}

void BolsasAcarrito(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Ayuda para cargar bolsas en carrito" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "50 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Carga de 4 bolsas a mano" << endl;
    cout << "2) " << "70 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Carga de 6 bolsas en carrito" << endl;
    cout << string(ancho * 5 , ' ') << endl;

}

void ResguardoUna(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Resguardo de 1 llave" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "20 MXN"  << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Resguardo 1 hora." << endl;
    cout << "2) " << "30 MXN"  << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Resguardo 2 horas." << endl;
    cout << "3) " << "50 MXN"  << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Resguardo 5 horas." << endl;
    cout << "4) " << "80 MXN"  << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Resguardo 24 horas." << endl;
    cout << string(ancho * 5 , ' ') << endl;

}

void ResguardoDos(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Resguardo de 2 llaves" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "30 MXN"  << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Resguardo 1 hora." << endl;
    cout << "2) " << "40 MXN"  << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Resguardo 2 horas." << endl;
    cout << "3) " << "60 MXN"  << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Resguardo 5 horas." << endl;
    cout << "4) " << "100 MXN"  << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Resguardo 24 horas." << endl;
    cout << string(ancho * 5 , ' ') << endl;

}

void ResguardoTres(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Resguardo de 3 o mas llaves" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "40 MXN"  << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Resguardo 1 hora." << endl;
    cout << "2) " << "50 MXN"  << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Resguardo 2 horas." << endl;
    cout << "3) " << "70 MXN"  << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Resguardo 5 horas." << endl;
    cout << "4) " << "110 MXN"  << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Resguardo 24 horas." << endl;
    cout << string(ancho * 5 , ' ') << endl;


}
//Funcion de cobro especificamente para servicios, se utilizo en cada servicio de las tres secciones que  tenemos

double Cobro( const map<int, double>& se, double sumatoria, double codigo = 0.0, const string& si = "si", string eleccion = "si" ){
    double piezas;
    while(eleccion == si){
        cout << "Ingresa el numero del servicio que quieras adquirir" << endl;
        cin >> codigo;
        cout << "Cuantos servicios deseas adquirir? " << endl;
        cin >> piezas;
        sumatoria = (se.at(codigo) * piezas) + sumatoria;
        cout << sumatoria;
        cout << "Quieres adquirir otro servicio de esta sección del que ya solicitaste?" << endl;
        cin >> eleccion;

    }
    cout << "El total a pagar es: " << sumatoria << endl;
    cout << "Quieres finalizar tu compra?" << endl;
    cout << "NOTA al finalizar tu compra se mostraran el total de todos los productos y servicios adquiridos" << endl;
    cin >> eleccion;

    if(eleccion == si){
        cout << "El total a pagar es: " << sumatoria << endl;
        cout << "Gracias por tu compra";
        sumatoria = 0;
    }
    return sumatoria;
    
}

int main(){
    double codigo = 0.0 ,total = 0, produc, servi; 
    int a,ancho = 1,producto,tipoTransporte, servicio;

    std::string eleccion;
    std::string servicios = "servicios";
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
        cout << "Productos" << endl;
        cout << string(ancho * 30, '-') << endl;
        cout << "Servicios" << endl;
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


    //Aqui empieza la seccion de servicios

     }else if(opcion == servicios){
        cout << "1) Energia" << endl;
        cout << string(ancho * 25, '-') << endl;
        cout << "2) Parking" << endl;
        cout << string(ancho * 25, '-') << endl;
        cout << "3) Ecorecarga" << endl;
        cout << string(ancho * 25, '-') << endl;
        cout << "4) Reservacion" << endl;
        cout << string(ancho * 25, '-') << endl;
        cout << "5) Asistencia" << endl;
        cout << string(ancho * 25, '-') << endl;
        cout << "6) Resguardo seguros de llaves" << endl;
        cout << string(ancho * 25, '-') << endl;
        cout << "Elige una opcion" << endl;
        cin >> servi;

        if( servicio == 1 ){
            cout << string(ancho * 40, '-') << endl;
            cout << CYAN << "1)" << RESET << string(ancho *2 ,  ' ') <<  string(ancho*1 , '|' ) << "Carga Basica del coche." << endl;
            cout << CYAN << "2)" << RESET << string(ancho *2 ,  ' ') <<  string(ancho*1 , '|' ) << "Carga Media del coche." << endl;
            cout << CYAN << "3)" << RESET << string(ancho *2 ,  ' ') <<  string(ancho*1 , '|' ) << "Carga Alta del coche." << endl;
            cout << string(ancho * 40, '-') << endl;
            cout << "Que servicio quieres adquirir?" << endl;
            cin >> servi;
            if(servi == 1){
                map<int, double> carga;
                carga[1] = 90;
                carga[2] = 180;
                CargaBasica();
                total = Cobro(carga , total);
                cout << total  << endl;

            }else if(servi == 2){
                map<int , double> carga;
                carga[1] = 180;
                carga[2] = 360;
                CargaMedia();
                total = Cobro(carga , total);
                cout << total << endl;

            }else if(servi == 3){
                map <int , double> carga;
                carga[1] = 250;
                carga[2] = 500;
                CargaAlta();
                total = Cobro(carga , total);
                cout << total << endl;
            }

        }else if(servicio == 2){
            cout << CYAN << "1)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Parking Cercano o lejano" << endl;
            cout << CYAN << "2)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Parking Nocturno" << endl;
            cout << "¿Que servicio quieres adquirir?" << endl;
            cin >> servicio;
             
            if(servi ==1){
                map<int, double> cercano;
                cercano[1] = 60;
                cercano[2] = 150;
                AparcarmientoExpress();
                total = Cobro(cercano, total);
                cout << total << endl;

            }else if(servi == 2){
                map <int , double> carga;
                carga[1] = 100;
                carga[2] = 200;
                AparcamientoDos();
                total = Cobro(carga , total);
                cout << total << endl;
        }

    }else if(servicio == 3){
        cout << CYAN << "1)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Recarga de gasolina REGULAR hasta 5 litros" << endl;
        cout << CYAN << "2)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Recarga de gasolina PREMIUM hasta 5 litros" << endl;
        cout << CYAN << "2)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Recarga de gasolina DIESEL hasta 5 litros" << endl;
        cout << "¡Que servicio quieres adquirir?" << endl;
        cin >> servicio;
         
        if(servi == 1){
            map<int, double> litro;
            litro[1] = 23;
            litro[2] = 46;
            litro[3] = 69;
            litro[4] = 92;
            litro[5] = 115;
            GasolinaRegular();
            total = Cobro(litro, total);
            cout << total << endl;

        }else if(servi == 2){
            map<int, double> litro;
            litro[1] = 26;
            litro[2] = 52;
            litro[3] = 78;
            litro[4] = 104;
            litro[5] = 130;
            GasolinaPremium();
            total = Cobro(litro, total);
            cout << total << endl;

        }else if(servi == 3){
            map<int, double> litro;
            litro[1] = 27;
            litro[2] = 54;
            litro[3] = 81;
            litro[4] = 108;
            litro[5] = 135;
            GasolinaDiesel();
            total = Cobro(litro, total);
            cout << total << endl;
        }


    }else if(servicio == 4){
        cout << CYAN << "1)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Reservación del dia Sabado" << endl;
        cout << CYAN << "2)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Reservación del dia Domingo" << endl;
        cout << "¿Quieres adquirir el servicio?" << endl;
        cin >> servicio;
         
        if(servi == 1){
            map<int, double> reserva;
            reserva[1] = 50;
            reserva[2] = 100;
            reserva[3] = 110;
            ReservacionSa();
            total = Cobro(reserva, total);
            cout << total << endl;

                     
        }else if(servi == 2){
            map<int, double> reserva;
            reserva[1] = 50;
            reserva[2] = 100;
            reserva[3] = 110;
            ReservacionDo();
            total = Cobro(reserva, total);
            cout << total << endl;
        }

        }else if(servicio == 5){
            cout << CYAN << "1)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Ayuda para cargar bolsas a Mano" << endl;
            cout << CYAN << "2)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Ayuda para cargar bolsas en carrito" << endl;
            cout << "¿Quieres adquirir el servicio?" << endl;
            cin >> servicio;
             
            if(servi == 1){
                map<int, double> bolsa;
                bolsa[1] = 30;
                bolsa[2] = 50;
                BolsasAmano();
                total = Cobro(bolsa, total);
                cout << total << endl;
    
                         
            }else if(servi == 2){
                map<int, double> bolsa;
                bolsa[1] = 50;
                bolsa[2] = 70;
                BolsasAcarrito();
                total = Cobro(bolsa, total);
                cout << total << endl;
            }

            }else if(servicio == 6){
                cout << CYAN << "1)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Resguardo de 1 llave" << endl;
                cout << CYAN << "2)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Resguardo de 2 llave" << endl;
                cout << CYAN << "2)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Resguardo de 3 o más llave" << endl;
                cout << "¿Quieres adquirir el servicio?" << endl;
                cin >> servicio;
                 
                if(servi == 1){
                    map<int, double> llave;
                    llave[1] = 20;
                    llave[2] = 30;
                    llave[2] = 50;
                    llave[2] = 80;
                    ResguardoUna();
                    total = Cobro(llave, total);
                    cout << total << endl;
        
                             
                }else if(servi == 2){
                    map<int, double> llave;
                    llave[1] = 30;
                    llave[2] = 40;
                    llave[2] = 60;
                    llave[2] = 100;
                    ResguardoDos();
                    total = Cobro(llave, total);
                    cout << total << endl;

                }else if(servi == 3){
                    map<int, double> llave;
                    llave[1] = 40;
                    llave[2] = 50;
                    llave[2] = 70;
                    llave[2] = 110;
                    ResguardoTres();
                    total = Cobro(llave, total);
                    cout << total << endl;
            }
            }
        }
    }
     }