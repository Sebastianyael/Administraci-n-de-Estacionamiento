#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#define CYAN    "\033[36m"
#define RESET   "\033[0m"
#include <fstream>
using namespace std;
std::string eleccion;
std::string si = "si";
int cuotatotal = 0;


//la parte de cris 
//arreglos 
 

// Seccion de productos en forma de funciones 

void Shampoo(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Shampoo para autos" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "137 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Nitro Shampoo de Carroceria 4L" << endl;
    cout << "2) " << "110 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Shampoo con Cera Car Wash Margrey 3.8L" << endl;
    cout << "3) " << "80 MXN" << string(ancho * 1  , ' ') << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Auto Drive 3.8L" << endl;
    cout << "4) " << "34 MXN" << string(ancho * 1  , ' ') << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Autos Roshfrans 950ml" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void Cera(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Cera liquida" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "441 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Acrilica Marvil 473ml" << endl;
    cout << "2) " << "189 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Meguiar's Ultimate" << endl;
    cout << "3) " << "119 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Armor All Ultra Shine" << endl;
    cout << "4) " << "100 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Marvil con Silicón" << endl;
    cout << string(ancho * 5 , ' ') << endl;

}

void limpiador(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Limpiador de llantas" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "560 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Llantas Meguiar's Ultimate 710ml" << endl;
    cout << "2) " << "430 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Chemical Guys Diablo 473ml" << endl;
    cout << "3) " << "325 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Alclear 300ml" << endl;
    cout << "4) " << "99 MXN" << string(ancho * 1  , ' ') << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Sisbrill V60 Sport 250ml" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void LimpiadorTapiceria(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Limpiador de Tapiceria" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "600 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Meguiar's  710ml" << endl;
    cout << "2) " << "300 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Chemical Guys Diablo 473ml" << endl;
    cout << "3) " << "325 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Alclear 300ml" << endl;
    cout << "4) " << "99 MXN" << string(ancho * 1  , ' ') << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Sisbrill V60 Sport 250ml" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}


void LimpiadorCristales(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Limpiador de Cristales" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "150 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Windex 500ml" << endl;
    cout << "2) " << "200 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Armor All 700ml" << endl;
    cout << "3) " << "175 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Rain-X 600ml" << endl;
    cout << "4) " << "130 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "3M Glass Cleaner 500ml" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void AmbientadoresAutos(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Ambientadores de Autos" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "50 MXN"  << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Little Trees (varios aromas)" << endl;
    cout << "2) " << "120 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Glade Auto 200ml" << endl;
    cout << "3) " << "90 MXN"  << string(ancho * 1  , ' ') << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Aroma Car 150ml" << endl;
    cout << "4) " << "80 MXN"  << string(ancho * 1  , ' ') << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "California Scents 42g" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void LimpiadorInteriores(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Limpiador de Interiores" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "300 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Armor All 500ml" << endl;
    cout << "2) " << "280 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Meguiar's Quik Interior 473ml" << endl;
    cout << "3) " << "250 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Turtle Wax Dash & Glass 500ml" << endl;
    cout << "4) " << "190 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Chemical Guys InnerClean 473ml" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void EsponjasMicrofibra(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Esponjas de Microfibra" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "100 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Armor All Pack 3" << endl;
    cout << "2) " << "80 MXN"  << string(ancho * 1 , ' ') << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "3M Esponja Microfibra" << endl;
    cout << "3) " << "150 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Chemical Guys Pack 6" << endl;
    cout << "4) " << "200 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Meguiar's Supreme Shine 3pzs" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void GuantesMicrofibra(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Guantes de Limpieza de Microfibra" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "150 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Armor All 1 par" << endl;
    cout << "2) " << "130 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Meguiar's Ultra Plush" << endl;
    cout << "3) " << "180 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Chemical Guys Workhorse" << endl;
    cout << "4) " << "90 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Genérico Microfibra" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void AspiradoraPortatil(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Aspiradora Portatil para Autos" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "700 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Black+Decker 12V" << endl;
    cout << "2) " << "600 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Armor All 12V" << endl;
    cout << "3) " << "850 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Tineco Pure One" << endl;
    cout << "4) " << "950 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "Dyson V7 Car+Boat" << endl;
    cout << string(ancho * 5 , ' ') << endl;

}

void PastillasFreno(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Pastillas de Freno" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "450 MXN" << string(ancho * 1 , '|') << " Bosch" << endl;
    cout << "2) " << "390 MXN" << string(ancho * 1 , '|') << " Brembo" << endl;
    cout << "3) " << "500 MXN" << string(ancho * 1 , '|') << " TRW" << endl;
    cout << "4) " << "420 MXN" << string(ancho * 1 , '|') << " Wagner" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void Rines(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Rines" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "2500 MXN" << string(ancho * 1 , '|') << " Enkei" << endl;
    cout << "2) " << "2700 MXN" << string(ancho * 1 , '|') << " BBS" << endl;
    cout << "3) " << "3000 MXN" << string(ancho * 1 , '|') << " OZ Racing" << endl;
    cout << "4) " << "3200 MXN" << string(ancho * 1 , '|') << " Fuel Off-Road" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void DiscosFreno(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Discos de Freno" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "700 MXN" << string(ancho * 1 , '|') << " Brembo" << endl;
    cout << "2) " << "750 MXN" << string(ancho * 1 , '|') << " Bosh" << endl;
    cout << "3) " << "800 MXN" << string(ancho * 1 , '|') << " Power Stop" << endl;
    cout << "4) " << "850 MXN" << string(ancho * 1 , '|') << " AC Delco" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void BombasAgua(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Bombas de Agua" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "1200 MXN" << string(ancho * 1 , '|') << " Gates" << endl;
    cout << "2) " << "1350 MXN" << string(ancho * 1 , '|') << " Aisin" << endl;
    cout << "3) " << "1500 MXN" << string(ancho * 1 , '|') << " AC Delco" << endl;
    cout << "4) " << "1600 MXN" << string(ancho * 1 , '|') << " Bosch" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void BujiasRepuesto(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Bujias de Repuesto" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "60 MXN" << string(ancho * 1 , '|') << " NGK" << endl;
    cout << "2) " << "75 MXN" << string(ancho * 1 , '|') << " Bosh" << endl;
    cout << "3) " << "90 MXN" << string(ancho * 1 , '|') << " Champion" << endl;
    cout << "4) " << "110 MXN" << string(ancho * 1 , '|') << " Denso" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void CorreasDistribucion(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Correas de Distribucion" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "900 MXN " << string(ancho * 1 , '|') << " Gates" << endl;
    cout << "2) " << "950 MXN " << string(ancho * 1 , '|') << " Continental" << endl;
    cout << "3) " << "1100 MXN" << string(ancho * 1 , '|') << " Dayco" << endl;
    cout << "4) " << "1200 MXN" << string(ancho * 1 , '|') << " Mitsuboshi" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void BateriasArranque(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Baterias de Arranque" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "2500 MXN" << string(ancho * 1 , '|') << " LTH" << endl;
    cout << "2) " << "2700 MXN" << string(ancho * 1 , '|') << " Bosch" << endl;
    cout << "3) " << "2900 MXN" << string(ancho * 1 , '|') << " Optima" << endl;
    cout << "4) " << "3200 MXN" << string(ancho * 1 , '|') << " Varta" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void Radiadores(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Radiadores" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "3500 MXN" << string(ancho * 1 , '|') << " Denso" << endl;
    cout << "2) " << "3800 MXN" << string(ancho * 1 , '|') << " TYC" << endl;
    cout << "3) " << "4200 MXN" << string(ancho * 1 , '|') << " Behr Hella" << endl;
    cout << "4) " << "4500 MXN" << string(ancho * 1 , '|') << " Mishimoto" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void Fusibles(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Fusibles" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "30 MXN" << string(ancho * 1 , '|') << " Bussman" << endl;
    cout << "2) " << "40 MXN" << string(ancho * 1 , '|') << " Littelfuse" << endl;
    cout << "3) " << "50 MXN" << string(ancho * 1 , '|') << " Ferraz Shawmut" << endl;
    cout << "4) " << "60 MXN" << string(ancho * 1 , '|') << " Blue Sea Systems" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void BombillasRepuesto(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Bombillas de Repuesto" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "120 MXN" << string(ancho * 1 , '|') << " Philips" << endl;
    cout << "2) " << "150 MXN" << string(ancho * 1 , '|') << " Osram" << endl;
    cout << "3) " << "180 MXN" << string(ancho * 1 , '|') << " Sylvania" << endl;
    cout << "4) " << "200 MXN" << string(ancho * 1 , '|') << " Hella" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void AceiteMotor(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Aceite para Motor" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "100 MXN" << string(ancho * 1 , '|') << " Castrol" << endl;
    cout << "2) " << "120 MXN" << string(ancho * 1 , '|') << " Mobil 1" << endl;
    cout << "3) " << "100 MXN" << string(ancho * 1 , '|') << " Valvoline" << endl;
    cout << "4) " << "110 MXN" << string(ancho * 1 , '|') << " Quaker State" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void FiltroAceite(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Filtro de Aceite" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "150 MXN" << string(ancho * 1 , '|') << " Fram" << endl;
    cout << "2) " << "130 MXN" << string(ancho * 1 , '|') << " Bosch" << endl;
    cout << "3) " << "180 MXN" << string(ancho * 1 , '|') << " AC Delco" << endl;
    cout << "4) " << "200 MXN" << string(ancho * 1 , '|') << " Motorcraft" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void FiltroAire(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Filtro de Aire" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "250 MXN" << string(ancho * 1 , '|') << " Wix Filters" << endl;
    cout << "2) " << "300 MXN" << string(ancho * 1 , '|') << " Fram" << endl;
    cout << "3) " << "280 MXN" << string(ancho * 1 , '|') << " Bosch" << endl;
    cout << "4) " << "290 MXN" << string(ancho * 1 , '|') << " K&N" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void FiltroCombustible(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Filtro de Combustible" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "300 MXN" << string(ancho * 1 , '|') << " Bosch" << endl;
    cout << "2) " << "350 MXN" << string(ancho * 1 , '|') << " AC Delco" << endl;
    cout << "3) " << "400 MXN" << string(ancho * 1 , '|') << " Fram" << endl;
    cout << "4) " << "380 MXN" << string(ancho * 1 , '|') << " Motorcraft" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void Anticongelante(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Anticongelante" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "250 MXN" << string(ancho * 1 , '|') << " Prestone" << endl;
    cout << "2) " << "300 MXN" << string(ancho * 1 , '|') << " Peak" << endl;
    cout << "3) " << "270 MXN" << string(ancho * 1 , '|') << " Motorcraft" << endl;
    cout << "4) " << "280 MXN" << string(ancho * 1 , '|') << " Valvoline" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void BateriaAutos(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Bateria para Autos" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "2500 MXN" << string(ancho * 1 , '|') << " LTH" << endl;
    cout << "2) " << "2700 MXN" << string(ancho * 1 , '|') << " Bosch" << endl;
    cout << "3) " << "2900 MXN" << string(ancho * 1 , '|') << " Optima" << endl;
    cout << "4) " << "3200 MXN" << string(ancho * 1 , '|') << " Varta" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void LubricanteFrenos(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Lubricante para Frenos" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "120 MXN" << string(ancho * 1 , '|') << " Liqui Moly" << endl;
    cout << "2) " << "100 MXN" << string(ancho * 1 , '|') << " Bosch" << endl;
    cout << "3) " << "130 MXN" << string(ancho * 1 , '|') << " Permatex" << endl;
    cout << "4) " << "110 MXN" << string(ancho * 1 , '|') << " CRC" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void LimpiadorInyectores(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Limpiador de Inyectores" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "150 MXN" << string(ancho * 1 , '|') << " STP" << endl;
    cout << "2) " << "180 MXN" << string(ancho * 1 , '|') << " Liqui Moly" << endl;
    cout << "3) " << "200 MXN" << string(ancho * 1 , '|') << " Chevron" << endl;
    cout << "4) " << "170 MXN" << string(ancho * 1 , '|') << " Valvoline" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void LiquidoFrenos(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Liquido de Frenos" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "250 MXN" << string(ancho * 1 , '|') << " Prestone" << endl;
    cout << "2) " << "270 MXN" << string(ancho * 1 , '|') << " Bosch" << endl;
    cout << "3) " << "300 MXN" << string(ancho * 1 , '|') << " Motorcraft" << endl;
    cout << "4) " << "280 MXN" << string(ancho * 1 , '|') << " Valvoline" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

void LiquidoLimpiaparabrisas(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Liquido Limpiaparabrisas" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "100 MXN" << string(ancho * 1 , '|') << " Rain-X" << endl;
    cout << "2) " << "120 MXN" << string(ancho * 1 , '|') << " Prestone" << endl;
    cout << "3) " << "110 MXN" << string(ancho * 1 , '|') << " Bosch" << endl;
    cout << "4) " << "130 MXN" << string(ancho * 1 , '|') << " Turtle Wax" << endl;
    cout << string(ancho * 5 , ' ') << endl;
}

//Funcion de cobro especificamente para productos, se utilizo en cada producto de las tres secciones que  tenemos

double Cobro( const map<int, double>& se, double sumatoria, double codigo = 0.0, const string& si = "si", string eleccion = "si" ){
    double piezas;
    
        cout << "Ingresa el numero del producto que quieras comprar" << endl;
        cin >> codigo;
        
        cout << "Cuantas piezas deseas comprar? " << endl;
        cin >> piezas;
        sumatoria = (se.at(codigo) * piezas) + sumatoria;
        cout << "Quieres comprar otro producto de esta seccion" << endl;
        cin >> eleccion;
       

    
    
    cout << "El total a pagar es: " << sumatoria << endl;
    cout << "Quieres finalizar tu compra?" << endl;
    cout << "NOTA al finalizar tu compra se mostraran el total de todos los productos" << endl;
    cin >> eleccion;

    if(eleccion == si){
        cout << "El total a pagar es: " << sumatoria << endl;
        cout << "Gracias por tu compra" << endl;
        sumatoria = 0;
    }
    return sumatoria;
}
    
    


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
    cout << string(ancho * 5 , ' ') << endl;

}

void GasolinaPremium(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Recarga de gasolina PREMIUM hasta 5 litros" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "26 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "1 litro de gasolina PREMIUM" << endl;
    cout << "2) " << "52 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "2 litro de gasolina PREMIUM" << endl;
    cout << string(ancho * 5 , ' ') << endl;

}

void GasolinaDiesel(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Recarga de gasolina DIESEL hasta 5 litros" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "27 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "1 litros de gasolina DIESEL" << endl;
    cout << "2) " << "54 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << "2 litros de gasolina DIESEL" << endl;
    cout << string(ancho * 5 , ' ') << endl;


}

void ReservacionSa(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Reserva Sabado - 24 horas" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "50 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Espacio estandar" << endl;
    cout << "2) " << "100 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Espacio con cargador EV" << endl;
    cout << string(ancho * 5 , ' ') << endl;


}

void ReservacionDo(int ancho = 1){
    cout << string(ancho * 5 , ' ') << "Rerserva Domingo - 24 horas" << endl;
    cout << string(ancho * 30 , '-') << endl;
    cout << "1) " << "50 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Espacio estandar" << endl;
    cout << "2) " << "100 MXN" << string(ancho * 1 , '|') << string(ancho * 1 , ' ') << " Espacio con cargador EV" << endl;
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

double cobro( const map<int, double>& se ,double sumatoria, double codigo = 0.0, const string& si = "si", string eleccion = "si" ){
    while(eleccion == si){
        cout << "Ingresa el numero del servicio que quieras adquirir" << endl;
        cin >> codigo;
        sumatoria = se.at(codigo) + sumatoria;
        cout << "Quieres adquirir otro servicio de esta seccion del que ya solicitaste?" << endl;
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
        cuotatotal = 0;
    }
    return sumatoria;
    
}




int main(){
    double codigo = 0.0 ,total = 0, produc,servi; 
    int a,ancho = 1,producto,tipoTransporte;
    int servicio, opcion , sumatoria  , piezas;
    
    std::string eleccion;
    std::string eleccion2;
    std::string si = "si";
    const int horaC = 20;
    const int diaC = 80;
    const int semanaC = 500;
    const int mesC = 2050;
    const int anualC = 25000;
    const int horaM = 20;
    const int diaM = 50;
    const int semanaM = 300;
    const int mesM = 1200;
    const int anualM = 14000;
    const int horaB = 20;
    const int diaB = 40;
    const int semanaB = 200;
    const int mesB = 800;
    const int anualB = 9500;
    ofstream com;
   
    
    
  
    while(opcion != 5){
        cout << string(ancho * 60, '-') << endl;
        cout << "Bienvenidos al estacionamiento UTVT" << endl;
        cout << string(ancho * 60, '-') << endl;
        cout << "1) Cuota" << endl;
        cout << string(ancho * 30, '-') << endl; 
        cout << "2) Productos" << endl;
        cout << string(ancho * 30, '-') << endl;
        cout << "3) Servicios" << endl;
        cout << string(ancho * 30, '-') << endl;
        cout << "4) Nosotros" << endl;
        cout << string(ancho * 30, '-') << endl;
        cout << "5) Salir" << endl;
        cout << string(ancho * 30, '-') << endl;
        cout << "Selecciona una opcion" << endl;
        cin >> opcion;

    if(opcion == 1){

        com.open("listaDeCompras.txt" , ios::app);
        com << " " << endl;
        com << "Cuotas" << endl;
        com.close();
        cout << "1) Carro o camioneta" << endl;
        cout << string(ancho * 40, '-') << endl;
        cout << "2) Motocicletas" << endl;
        cout << string(ancho * 40, '-') << endl;
        cout << "3) Bicicletas" << endl;
        cout << string(ancho * 40, '-') << endl;
        cout << "5) volver al menu" << endl;
        cout << string(ancho * 40, '-') << endl;
        cout << "Elije una opcion" << endl;
        cin >> tipoTransporte;

        if(tipoTransporte != 5){
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
                cout << string(ancho * 1, '|') <<  setw(ancho) << "6) Volver al menu principal" << endl;
                cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
                cout << "Selecciona una cuota" << endl;
                cin >> a;

                if(a != 6){
                    if (
                        a==1 
                    ){
                        cout << "Su cargo es de 20 pesos"  << endl;
                        cuotatotal = cuotatotal + horaC;
                        total = total + cuotatotal;
                        
        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Carro o camioneta: " << "Cobro menor a dos horas 20 pesos" << endl;
                        com.close();
                        
                    }
                    else if(
                        a==2
                    ){
                        cout << "Su cargo es de 80 pesos" << endl;
                        cuotatotal = cuotatotal + diaC;
                        total = total + cuotatotal;
                        
        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Carro o camioneta: " << "Cobro por dia 80 pesos" << endl;
                        com.close();
                       
                    }
                    else if (
                        a==3
                    ){
                        cout << "Su cargo es de 500 pesos" << endl;
                        cuotatotal = cuotatotal + semanaC;
                        total = total + cuotatotal;
                        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Carro o camioneta: " << "Cobro semanal 500 pesos" << endl;
                        com.close();
                        
                        
                    
                    }
                    else if (
                        a==4
                    ){
                        cout << "Su cargo es de 2,050 pesos" << endl;
                        cuotatotal = cuotatotal + mesC;
                        total = total + cuotatotal;
                        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Carro o camioneta: " << "Cobro mensual 2050 pesos" << endl;
                        com.close();
                       
                    }
                    else if (
                        a==5
                    ){
                        cout << "Su cargo es de 25,000 pesos" << endl;
                        cuotatotal = cuotatotal + anualC;
                        total = total + cuotatotal;
                        
        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Carro o camioneta: " << "Cobro anual 25,000 pesos" << endl;
                        com.close();
                        
                    }
        
                    cout << "El total es de: " << total << endl;
                    cout << "Quieres finalizar tu compra" << endl;
                    cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                    cin >> eleccion;
        
                    if(eleccion == si){
                        if(total > 2500){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "El total a pagar es: " << total << endl;
                            com.close();

                            double descuento = total * 0.20; 
                            total -= descuento;

                            com.open("listaDeCompras.txt" , ios::app);
                            com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                            com << "El total a pagar con descuento es: " << total << endl;
                            com.close();
                            ifstream h("listaDeCompras.txt"); 
                            string line;
                            while (getline(h, line)) { 
                                cout << line << endl;
                            }
                            h.close();  
                            total = 0;
                            cuotatotal = 0;
                        }else{
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "El total a pagar es: " << total << endl;
                            com.close();
    
                            ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                        }  

                    }
                }
                
             }

             else if(tipoTransporte == 2 ){
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
                cout << string(ancho * 1, '|') <<  setw(ancho) << "6) Volver al menu principal" << endl;
                cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
                cout << "Selecciona una cuota" << endl;
                cin >> a;
    
                if(a != 6){
                    if (
                        a==1 
                    ){
                        cout << "Su cargo es de 20 pesos" << endl;
                        cuotatotal = cuotatotal + horaM;
                        total = total + cuotatotal;
                        
        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Motocicletas " << "Cobro menor a dos horas 20 pesos" << endl;
                        com.close();
                        
                    }
                    else if(
                        a==2
                    ){
                        cout << "Su cargo es de 50 pesos" << endl;
                        cuotatotal = cuotatotal + diaM;
                        total = total + cuotatotal;
                        
        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Motocicletas " << "Cobro por dia 50 pesos" << endl;
                        com.close();
                    }
                    else if (
                        a==3
                    ){
                        cout << "Su cargo es de 300 pesos" << endl;
                        cuotatotal = cuotatotal + semanaM;
                        total = total + cuotatotal;
                        
        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Motocicletas " << "Cobro semanal 300 pesos" << endl;
                        com.close();
                    
                    }
                    else if (
                        a==4
                    ){
                        cout << "Su cargo es de 1,200 pesos" << endl;
                        cuotatotal = cuotatotal + mesM;
                        total = total + cuotatotal;
                        
        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Motocicletas " << "Cobro mensual 1200 pesos" << endl;
                        com.close();
                    }
                    else if (
                        a==5
                    ){
                        cout << "Su cargo es de 14,000 pesos" << endl;
                        cuotatotal = cuotatotal + anualM;
                        total = total + cuotatotal;
                        
        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Motocicletas " << "Cobro mensual 1200 pesos" << endl;
                        com.close();
                    }
        
                    cout << "El total es de: " << total << endl;
                    cout << "Quieres finalizar tu compra" << endl;
                    cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                    cin >> eleccion;
        
                    if(eleccion == si){
                        if(total > 2500){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "El total a pagar es: " << total << endl;
                            com.close();

                            double descuento = total * 0.20; 
                            total -= descuento;

                            com.open("listaDeCompras.txt" , ios::app);
                            com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                            com << "El total a pagar con descuento es: " << total << endl;
                            com.close();
                            ifstream h("listaDeCompras.txt"); 
                            string line;
                            while (getline(h, line)) { 
                                cout << line << endl;
                            }
                            h.close();  
                            total = 0;
                            cuotatotal = 0;
                        }else{
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "El total a pagar es: " << total << endl;
                            com.close();
    
                            ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                        }  
                        
                    }
                }
                
                
       
        
             }
             else if(tipoTransporte == 3){
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
                cout << string(ancho * 1, '|') <<  string(ancho * 40, '-') << string(ancho * 1, '|') << endl;
                cout << string(ancho * 1, '|') << "6) Volver al menu principal" << endl;
                cout << "Selecciona una cuota" << endl;
                cin >> a;

                if(a != 6){
                    if (
                        a==1 
                    ){
                        cout << "Su cargo es de 20 pesos";
                        cuotatotal = cuotatotal + horaB;
                        total = total + cuotatotal;
                        
        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Bicicletas " << "Cobro menor a dos horas 20 pesos" << endl;
                        com.close();
                    }
                    else if(
                        a==2
                    ){
                        cout << "Su cargo es de 40 pesos";
                        cuotatotal = cuotatotal + diaB;
                        total = total + cuotatotal;
                        cout << "El monto total es de: " << total << endl;
        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Bicicletas " << "Cobro por dia 40 pesos" << endl;
                        com.close();
                    }
                    else if (
                        a==3
                    ){
                        cout << "Su cargo es de 200 pesos";
                        cuotatotal = cuotatotal + semanaB;
                        total = total + cuotatotal;
                       
        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Bicicletas " << "Cobro semanal 200 pesos" << endl;
                        com.close();
                    
                    }
                    else if (
                        a==4
                    ){
                        cout << "Su cargo es de 800 pesos";
                        cuotatotal = cuotatotal + mesB;
                        total = total + cuotatotal;
                        
        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Bicicletas " << "Cobro mensual 800 pesos" << endl;
                        com.close();
                    }
                    else if (
                        a==5
                    ){
                        cout << "Su cargo es de 9,500 pesos";
                        cuotatotal = cuotatotal + anualB;
                        total = total + cuotatotal;
                        
        
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Bicicletas " << "Cobro anual 9,500 pesos" << endl;
                        com.close();
                    }
            
                    cout << "El total es de: " << total << endl;
                    cout << "Quieres finalizar tu compra" << endl;
                    cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                    cin >> eleccion;
        
                    if(eleccion == si){
                        if(total > 2500){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "El total a pagar es: " << total << endl;
                            com.close();

                            double descuento = total * 0.20; 
                            total -= descuento;

                            com.open("listaDeCompras.txt" , ios::app);
                            com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                            com << "El total a pagar con descuento es: " << total << endl;
                            com.close();
                            ifstream h("listaDeCompras.txt"); 
                            string line;
                            while (getline(h, line)) { 
                                cout << line << endl;
                            }
                            h.close();  
                            total = 0;
                            cuotatotal = 0;
                        }else{
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "El total a pagar es: " << total << endl;
                            com.close();
    
                            ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                        }
                        
                    }
        
                }
    

            }
                  
        }


        
        

    //Aqui empieza la seccion de productos

     }else if(opcion == 2){
        cout << "1) limpieza" << endl;
        cout << string(ancho * 25, '-') << endl;
        cout << "2) Mantenimineto" << endl;
        cout << string(ancho * 25, '-') << endl;
        cout << "3) Refaccionaria" << endl;
        cout << string(ancho * 25, '-') << endl;
        cout << "0) Volver al menu principal" << endl;
        cout << string(ancho * 25, '-') << endl;
        cout << "Elige una opcion" << endl;
        cin >> producto;


        if(producto != 0){
            if( producto == 1 ){
                cout << string(ancho * 40, '-') << endl;
                cout << CYAN << "1)" << RESET << string(ancho *2 ,  ' ') <<  string(ancho*1 , '|' ) << "Shampoo para autos" << endl;
                cout << CYAN << "2)" << RESET << string(ancho *2 ,  ' ') << string(ancho*1 , '|' ) << "Cera liquida" << endl;
                cout << CYAN << "3)" << RESET << string(ancho *2 ,  ' ') << string(ancho*1 , '|' ) << "Limpiador de llantas" << endl;
                cout << CYAN << "4)" << RESET << string(ancho *2 ,  ' ') << string(ancho*1 , '|' ) << "Limpiador de tapiceria" << endl;
                cout << CYAN << "5)" << RESET << string(ancho *2 ,  ' ') << string(ancho*1 , '|' ) << "Limpiador de cristales" << endl;
                cout << CYAN << "6)" << RESET << string(ancho *2 ,  ' ') << string(ancho*1 , '|' ) << "Ambientadores para autos" << endl;
                cout << CYAN << "7)" << RESET << string(ancho *2 ,  ' ') << string(ancho*1 , '|' ) << "Limpiador de interiores" << endl;
                cout << CYAN << "8)" << RESET << string(ancho *2 ,  ' ') << string(ancho*1 , '|' ) << "Esponjas de microfibra" << endl;
                cout << CYAN << "9)" << RESET << string(ancho *2 ,  ' ') << string(ancho*1 , '|' ) << "Guantes de limpieza de microfibra" << endl;
                cout << CYAN << "10)" << RESET << string(ancho *1 ,  ' ') << string(ancho*1 , '|' ) << "Aspiradora portatil para autos" << endl;
                cout << CYAN << "0)" << RESET << string(ancho *2 ,  ' ') << string(ancho*1 , '|' ) << "Volver al menu principal" << endl;
                cout << string(ancho * 40, '-') << endl;
                
                cout << "Que tipo de producto quieres comprar" << endl;
                cin >> produc;
    
                if(produc != 0){
                    com.open("listaDeCompras.txt" , ios::app);
                com << " " << endl;
                com << "Productos" << endl;
                com.close();
    
                
    
                if(produc == 1){
                    map<int, double> shampoo;
                    shampoo[1] = 137;
                    shampoo[2] = 110;
                    shampoo[3] = 80;
                    shampoo[4] = 34;
                    Shampoo();
    
                    cout << "Quieres comprar un producto de esta seccion" << endl;
                    cin >> eleccion;
    
    
                    while(eleccion == si){
                        cout << "Ingresa el numero del producto que quieras comprar" << endl;
                        cin >> codigo;
                
                        cout << "Cuantas piezas deseas comprar? " << endl;
                        cin >> piezas;
                        sumatoria = (shampoo.at(codigo) * piezas);
                        if(codigo == 1){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "137 MXN Nitro Shampoo de Carroceria 4L " << endl;
                            com.close();
    
                        }else if(codigo == 2){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "110 MXN Shampoo con Cera Car Wash Margrey 3.8L " << endl;
                            com.close();
                        }else if(codigo == 3){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "80 MXN Auto Drive 3.8L" << endl;
                            com.close();
                        }else if(codigo == 4){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "34 MXN Autos Roshfrans 950ml" << endl;
                            com.close();
                        }
    
                        cout << "Quieres comprar otro producto de esta seccion?" << endl;
                        cin >> eleccion;
                    }
                    total = total + sumatoria;
    
                                
                }else if(produc == 2){
                    map<int , double> cera;
                    cera[1] = 441;
                    cera[2] = 189;
                    cera[3] = 119;
                    cera[4] = 100;
                    Cera();
                    
                    cout << "Quieres comprar un producto de esta seccion" << endl;
                    cin >> eleccion;
    
                    while(eleccion == si){
                        cout << "Ingresa el numero del producto que quieras comprar" << endl;
                        cin >> codigo;
                
                        cout << "Cuantas piezas deseas comprar? " << endl;
                        cin >> piezas;
                        sumatoria = (cera.at(codigo) * piezas);  
                        
                        if(codigo == 1){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "441 MXN Acrilica Marvil 473ml" << endl;
                            com.close();
                        }else if(codigo == 2){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "189 MXN Meguiar's Ultimate" << endl;
                            com.close();
                        }else if(codigo == 3){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "119 MXN Armor All Ultra Shine" << endl;
                            com.close();
                        }else if(codigo == 4){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "100 MXN Marvil con Silicón" << endl;
                            com.close();
                        }
                
                        cout << "Quieres comprar otro producto de esta seccion?" << endl;
                        cin >> eleccion;
                    }
                    total = total + sumatoria;
                    
    
                }else if(produc == 3){
                    map <int , double> Limpiador;
                    Limpiador[1] = 560;
                    Limpiador[2] = 430;
                    Limpiador[3] = 325;
                    Limpiador[4] = 99;
                    limpiador();
                    cout << "Quieres comprar un producto de esta seccion" << endl;
                    cin >> eleccion;
                    
                    while(eleccion == si){
                        cout << "Ingresa el numero del producto que quieras comprar" << endl;
                        cin >> codigo;
                    
                        cout << "Cuantas piezas deseas comprar? " << endl;
                        cin >> piezas;
                        sumatoria = (Limpiador.at(codigo) * piezas);  
                        
                        if(codigo == 1){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "560 MXN Llantas Meguiar's Ultimate 710ml" << endl;
                            com.close();
                        }else if(codigo == 2){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "430 MXN Chemical Guys Diablo 473ml" << endl;
                            com.close();
                        }else if(codigo == 3){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "325 MXN Alclear 300ml" << endl;
                            com.close();
                        }else if(codigo == 4){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "99 MXN Sisbrill V60 Sport 250ml" << endl;
                            com.close();
                        }
                    
                        cout << "Quieres comprar otro producto de esta seccion?" << endl;
                        cin >> eleccion;
                    }
                    total = total + sumatoria;
                    
                    
    
                }else if(produc == 4){
                    map <int, double> limpiadorTapiceria;
                    limpiadorTapiceria[1] = 600;
                    limpiadorTapiceria[2] = 300;
                    limpiadorTapiceria[3] = 325;
                    limpiadorTapiceria[4] = 99;
                    LimpiadorTapiceria();
                    cout << "Quieres comprar un producto de esta seccion" << endl;
                    cin >> eleccion;
                    
                    while(eleccion == si){
                        cout << "Ingresa el numero del producto que quieras comprar" << endl;
                        cin >> codigo;
                    
                        cout << "Cuantas piezas deseas comprar? " << endl;
                        cin >> piezas;
                        sumatoria = (limpiadorTapiceria.at(codigo) * piezas);  
                        
                        if(codigo == 1){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "600 MXN Meguiar's 710ml" << endl;
                            com.close();
                        }else if(codigo == 2){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "300 MXN Chemical Guys Diablo 473ml" << endl;
                            com.close();
                        }else if(codigo == 3){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "325 MXN Alclear 300ml" << endl;
                            com.close();
                        }else if(codigo == 4){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "99 MXN Sisbrill V60 Sport 250ml" << endl;
                            com.close();
                        }
                    
                        cout << "Quieres comprar otro producto de esta seccion?" << endl;
                        cin >> eleccion;
                    }
                    total = total + sumatoria;
                    
                    
    
                }else if(produc == 5){
                    map <int, double> limpiadorCristales;
                    limpiadorCristales[1] = 150;
                    limpiadorCristales[2] = 200;
                    limpiadorCristales[3] = 175;
                    limpiadorCristales[4] = 130;
                    LimpiadorCristales();
                    cout << "Quieres comprar un producto de esta seccion" << endl;
                    cin >> eleccion;
                    
                    while(eleccion == si){
                        cout << "Ingresa el numero del producto que quieras comprar" << endl;
                        cin >> codigo;
                    
                        cout << "Cuantas piezas deseas comprar? " << endl;
                        cin >> piezas;
                        sumatoria = (limpiadorCristales.at(codigo) * piezas);  
                        
                        if(codigo == 1){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "150 MXN Windex 500ml" << endl;
                            com.close();
                        }else if(codigo == 2){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "200 MXN Armor All 700ml" << endl;
                            com.close();
                        }else if(codigo == 3){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "175 MXN Rain-X 600ml" << endl;
                            com.close();
                        }else if(codigo == 4){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "130 MXN 3M Glass Cleaner 500ml" << endl;
                            com.close();
                        }
                    
                        cout << "Quieres comprar otro producto de esta seccion?" << endl;
                        cin >> eleccion;
                    }
                    total = total + sumatoria;
                    
                    
    
                }else if(produc == 6){
                    map <int, double> ambientadoresAutos;
                    ambientadoresAutos[1] = 50;
                    ambientadoresAutos[2] = 120;    
                    ambientadoresAutos[3] = 90;
                    ambientadoresAutos[4] = 80;
                    AmbientadoresAutos();
                    cout << "Quieres comprar un producto de esta seccion" << endl;
                    cin >> eleccion;
                    
                    while(eleccion == si){
                        cout << "Ingresa el numero del producto que quieras comprar" << endl;
                        cin >> codigo;
                    
                        cout << "Cuantas piezas deseas comprar? " << endl;
                        cin >> piezas;
                        sumatoria = (ambientadoresAutos.at(codigo) * piezas);  
                        
                        if(codigo == 1){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "50 MXN Little Trees (varios aromas)" << endl;
                            com.close();
                        }else if(codigo == 2){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "120 MXN Glade Auto 200ml" << endl;
                            com.close();
                        }else if(codigo == 3){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "90 MXN Aroma Car 150ml" << endl;
                            com.close();
                        }else if(codigo == 4){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "80 MXN California Scents 42g" << endl;
                            com.close();
                        }
                    
                        cout << "Quieres comprar otro producto de esta seccion?" << endl;
                        cin >> eleccion;
                    }
                    total = total + sumatoria;
                    
                   
    
                }else if(produc == 7){
                    map <int, double> limpiadorInteriores;
                    limpiadorInteriores[1] = 300;
                    limpiadorInteriores[2] = 280;
                    limpiadorInteriores[3] = 250;
                    limpiadorInteriores[4] = 190;
                    LimpiadorInteriores();
                    cout << "Quieres comprar un producto de esta seccion" << endl;
                    cin >> eleccion;
                    
                    while(eleccion == si){
                        cout << "Ingresa el numero del producto que quieras comprar" << endl;
                        cin >> codigo;
                    
                        cout << "Cuantas piezas deseas comprar? " << endl;
                        cin >> piezas;
                        sumatoria = (limpiadorInteriores.at(codigo) * piezas);  
                        
                        if(codigo == 1){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "300 MXN Armor All 500ml" << endl;
                            com.close();
                        }else if(codigo == 2){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "280 MXN Meguiar's Quik Interior 473ml" << endl;
                            com.close();
                        }else if(codigo == 3){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "250 MXN Turtle Wax Dash & Glass 500ml" << endl;
                            com.close();
                        }else if(codigo == 4){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "190 MXN Chemical Guys InnerClean 473ml" << endl;
                            com.close();
                        }
                    
                        cout << "Quieres comprar otro producto de esta seccion?" << endl;
                        cin >> eleccion;
                    }
                    total = total + sumatoria;
                    
                    
    
                }else if(produc == 8){
                    map <int, double> esponjasMicrofibra;
                    esponjasMicrofibra[1] = 100;
                    esponjasMicrofibra[2] = 80;
                    esponjasMicrofibra[3] = 150;
                    esponjasMicrofibra[4] = 200;
                    EsponjasMicrofibra();
                    cout << "Quieres comprar un producto de esta seccion" << endl;
                    cin >> eleccion;
                    
                    while(eleccion == si){
                        cout << "Ingresa el numero del producto que quieras comprar" << endl;
                        cin >> codigo;
                    
                        cout << "Cuantas piezas deseas comprar? " << endl;
                        cin >> piezas;
                        sumatoria = (esponjasMicrofibra.at(codigo) * piezas);  
                        
                        if(codigo == 1){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "100 MXN Armor All Pack 3" << endl;
                            com.close();
                        }else if(codigo == 2){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "80 MXN 3M Esponja Microfibra" << endl;
                            com.close();
                        }else if(codigo == 3){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "150 MXN Chemical Guys Pack 6" << endl;
                            com.close();
                        }else if(codigo == 4){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "200 MXN Meguiar's Supreme Shine 3pzs" << endl;
                            com.close();
                        }
                    
                        cout << "Quieres comprar otro producto de esta seccion?" << endl;
                        cin >> eleccion;
                    }
                    total = total + sumatoria;
                    
                    
    
                }else if(produc == 9){
                    map <int, double> guantesMicrofibra;
                    guantesMicrofibra[1] = 150;
                    guantesMicrofibra[2] = 130;
                    guantesMicrofibra[3] = 180;
                    guantesMicrofibra[4] = 90;
                    GuantesMicrofibra();
                    cout << "Quieres comprar un producto de esta seccion" << endl;
                    cin >> eleccion;
                    
                    while(eleccion == si){
                        cout << "Ingresa el numero del producto que quieras comprar" << endl;
                        cin >> codigo;
                    
                        cout << "Cuantas piezas deseas comprar? " << endl;
                        cin >> piezas;
                        sumatoria = (guantesMicrofibra.at(codigo) * piezas);  
                        
                        if(codigo == 1){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "150 MXN Armor All 1 par" << endl;
                            com.close();
                        }else if(codigo == 2){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "130 MXN Meguiar's Ultra Plush" << endl;
                            com.close();
                        }else if(codigo == 3){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "180 MXN Chemical Guys Workhorse" << endl;
                            com.close();
                        }else if(codigo == 4){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "90 MXN Genérico Microfibra" << endl;
                            com.close();
                        }
                    
                        cout << "Quieres comprar otro producto de esta seccion?" << endl;
                        cin >> eleccion;
                    }
                    total = total + sumatoria;
                    
                    
    
                }else if(produc == 10){
                    map <int, double> aspiradoraPortatil;
                    aspiradoraPortatil[1] = 700;
                    aspiradoraPortatil[2] = 600;
                    aspiradoraPortatil[3] = 850;
                    aspiradoraPortatil[4] = 950;
                    AspiradoraPortatil();
                    cout << "Quieres comprar un producto de esta seccion" << endl;
                    cin >> eleccion;
                    
                    while(eleccion == si){
                        cout << "Ingresa el numero del producto que quieras comprar" << endl;
                        cin >> codigo;
                    
                        cout << "Cuantas piezas deseas comprar? " << endl;
                        cin >> piezas;
                        sumatoria = (aspiradoraPortatil.at(codigo) * piezas);  
                        
                        if(codigo == 1){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "700 MXN Black+Decker 12V" << endl;
                            com.close();
                        }else if(codigo == 2){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "600 MXN Armor All 12V" << endl;
                            com.close();
                        }else if(codigo == 3){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "850 MXN Tineco Pure One" << endl;
                            com.close();
                        }else if(codigo == 4){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "950 MXN Dyson V7 Car+Boat" << endl;
                            com.close();
                        }
                    
                        cout << "Quieres comprar otro producto de esta seccion?" << endl;
                        cin >> eleccion;
                    }
                    total = total + sumatoria;
                    
                    
    
                }
    
    
                cout << "El total es de: " << total << endl;
                cout << "Quieres finalizar tu compra" << endl;
                cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                cin >> eleccion;
    
                if(eleccion == si){
                    if(total > 2500){
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "El total a pagar es: " << total << endl;
                        com.close();

                        double descuento = total * 0.20; 
                        total -= descuento;

                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                        com << "El total a pagar con descuento es: " << total << endl;
                        com.close();
                        ifstream h("listaDeCompras.txt"); 
                        string line;
                        while (getline(h, line)) { 
                            cout << line << endl;
                        }
                        h.close();  
                        total = 0;
                        cuotatotal = 0;
                    }else{
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "El total a pagar es: " << total << endl;
                        com.close();
    
                        ifstream h("listaDeCompras.txt"); 
                            string line;
                            while (getline(h, line)) { 
                                cout << line << endl;
                            }
                            h.close();  
                            total = 0;
                            cuotatotal = 0;
                    }
                    
                }
                
                }
            }
    
                
               
            }else if(producto == 2){
                cout << CYAN << "1)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Aceite para motor" << endl;
                cout << CYAN << "2)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Filtro de aceite" << endl;
                cout << CYAN << "3)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Filtro de aire" << endl;
                cout << CYAN << "4)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Filtro de combustible" << endl;
                cout << CYAN << "5)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Anticongelante/refrigerante" << endl;
                cout << CYAN << "6)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Bateria para autos" << endl;
                cout << CYAN << "7)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Lubricante para frenos" << endl;
                cout << CYAN << "8)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Limpiador de inyectores" << endl;
                cout << CYAN << "9)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Liquido de frenos" << endl;
                cout << CYAN << "10)" << RESET << string(ancho * 1 , ' ') << string(ancho *1 , '|') << "Liquido limpiaparabrisas" << endl;
                cout << CYAN << "0)" << RESET << string(ancho *1 ,  ' ') << string(ancho*1 , '|' ) << "Volver al menu principal" << endl;
    
                
                cout << "Que tipo de producto quieres comprar" << endl;
                cin >> produc;
    
                if(produc != 0){
                    if(produc == 1){
                        map<int, double> aceiteMotor;
                        aceiteMotor[1] = 100;
                        aceiteMotor[2] = 120;
                        aceiteMotor[3] = 90;
                        aceiteMotor[4] = 110;
                        AceiteMotor();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (aceiteMotor.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "100 MXN Castrol" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "120 MXN Mobil 1" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "100 MXN Valvoline" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "110 MXN Quaker State" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
                        
                    }else if(produc == 2){
                        map<int, double> filtroAceite;
                        filtroAceite[1] = 150;
                        filtroAceite[2] = 130;
                        filtroAceite[3] = 180;
                        filtroAceite[4] = 200;
                        FiltroAceite();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (filtroAceite.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "150 MXN Fram" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "130 MXN Bosch" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "180 MXN AC Delco" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "200 MXN Motorcraft" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
        
                        
                        
                        
        
                    }else if(produc == 3){
                        map<int, double> filtroAire;
                        filtroAire[1] = 250;
                        filtroAire[2] = 300;
                        filtroAire[3] = 280;
                        filtroAire[4] = 290;
                        FiltroAire();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (filtroAire.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "250 MXN Wix Filters" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "300 MXN Fram" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "280 MXN Bosch" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "290 MXN K&N" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
        
                    }else if(produc == 4){
                        map<int, double> filtroCombustible;
                        filtroCombustible[1] = 300;
                        filtroCombustible[2] = 350;
                        filtroCombustible[3] = 400;
                        filtroCombustible[4] = 380;
                        FiltroCombustible();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (filtroCombustible.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "300 MXN Bosch" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "350 MXN AC Delco" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "400 MXN Fram" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "380 MXN Motorcraft" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
        
                    }else if(produc == 5){
                        map<int, double> anticongelante;
                        anticongelante[1] = 250;
                        anticongelante[2] = 300;
                        anticongelante[3] = 270;
                        anticongelante[4] = 280;
                        Anticongelante();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (anticongelante.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "250 MXN Prestone" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "300 MXN Peak" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "270 MXN Motorcraft" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "280 MXN Valvoline" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
        
                    }else if(produc == 6){
                        map<int, double> bateriaAutos;
                        bateriaAutos[1] = 2500;
                        bateriaAutos[2] = 2700;
                        bateriaAutos[3] = 2900;
                        bateriaAutos[4] = 3200;
                        BateriaAutos();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (bateriaAutos.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "2500 MXN LTH" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "2700 MXN Bosch" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "2900 MXN Optima" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "3200 MXN Varta" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
                        
        
                    }else if(produc == 7){
                        map<int, double> lubricanteFrenos;
                        lubricanteFrenos[1] = 120;
                        lubricanteFrenos[2] = 100;
                        lubricanteFrenos[3] = 130;
                        lubricanteFrenos[4] = 110;
                        LubricanteFrenos();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (lubricanteFrenos.at(codigo) * piezas); 
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "120 MXN Liqui Moly" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "100 MXN Bosch" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "130 MXN Permatex" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "110 MXN CRC" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                       
        
                    }else if(produc == 8){
                        map<int, double> limpiadorInyectores;
                        limpiadorInyectores[1] = 150;
                        limpiadorInyectores[2] = 180;
                        limpiadorInyectores[3] = 200;
                        limpiadorInyectores[4] = 170;
                        LimpiadorInyectores();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (limpiadorInyectores.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "150 MXN STP" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "180 MXN Liqui Moly" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "200 MXN Chevron" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "170 MXN Valvoline" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
        
                    }else if (produc == 9){
                        map<int, double> liquidoFrenos;
                        liquidoFrenos[1] = 250;
                        liquidoFrenos[2] = 270;
                        liquidoFrenos[3] = 300;
                        liquidoFrenos[4] = 280;
                        LiquidoFrenos();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (liquidoFrenos.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "250 MXN Prestone" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "270 MXN Bosch" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "300 MXN Motorcraft" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "280 MXN Valvoline" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
                        
                    }else if(produc == 10){
                        map<int, double> liquidoLimpiaparabrisas;
                        liquidoLimpiaparabrisas[1] = 100;
                        liquidoLimpiaparabrisas[2] = 120;
                        liquidoLimpiaparabrisas[3] = 110;
                        liquidoLimpiaparabrisas[4] = 130;
                        LiquidoLimpiaparabrisas();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (liquidoLimpiaparabrisas.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "100 MXN Rain-X" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "120 MXN Prestone" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "110 MXN Bosch" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "130 MXN Turtle Wax" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;     
                    }
                    
                    cout << "El total es de: " << total << endl;
                    cout << "Quieres finalizar tu compra" << endl;
                    cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                    cin >> eleccion;
        
                    if(eleccion == si){
                        if(total > 2500){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "El total a pagar es: " << total << endl;
                            com.close();

                            double descuento = total * 0.20; 
                            total -= descuento;

                            com.open("listaDeCompras.txt" , ios::app);
                            com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                            com << "El total a pagar con descuento es: " << total << endl;
                            com.close();
                            ifstream h("listaDeCompras.txt"); 
                            string line;
                            while (getline(h, line)) { 
                                cout << line << endl;
                            }
                            h.close();  
                            total = 0;
                            cuotatotal = 0;
                        }else{
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "El total a pagar es: " << total << endl;
                            com.close();
    
                            ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                        }  
                        
                    }
                    
    
                }
                 
                
    
               
            }else if(producto == 3 ){
                cout << CYAN << "2)" << RESET << string(ancho * 1 , ' ') << string(ancho*1 , '|' ) << "Rines" << endl;
                cout << CYAN << "1)" << RESET << string(ancho * 1 , ' ') << string(ancho*1 , '|' ) << "Pastillas de freno" << endl;
                cout << CYAN << "3)" << RESET << string(ancho * 1 , ' ') << string(ancho*1 , '|' ) << "Discos de freno" << endl;
                cout << CYAN << "4)" << RESET << string(ancho * 1 , ' ') << string(ancho*1 , '|' ) << "Bombas de agua" << endl;
                cout << CYAN << "5)" << RESET << string(ancho * 1 , ' ') << string(ancho*1 , '|' ) << "Bujias de repuesto" << endl;
                cout << CYAN << "6)" << RESET << string(ancho * 1 , ' ') << string(ancho*1 , '|' ) << "Correas de distribucion" << endl;
                cout << CYAN << "7)" << RESET << string(ancho * 1 , ' ') << string(ancho*1 , '|' ) << "Baterias de arranque" << endl;
                cout << CYAN << "8)" << RESET << string(ancho * 1 , ' ') << string(ancho*1 , '|' ) << "Radiadores" << endl;
                cout << CYAN << "9)" << RESET << string(ancho * 1 , ' ') << string(ancho*1 , '|' ) << "Fusibles" << endl;
                cout << CYAN << "10)" << RESET << string(ancho * 1 , ' ') << string(ancho*1 , '|' ) << "Bombillas de repuesto" << endl;
                cout << CYAN << "0)" << RESET << string(ancho * 1 , ' ') << string(ancho *1 ,  '|') << "Volver al menu principal" << endl;
    
                cout << "Que tipo de producto quieres adquirir" << endl;
                cin >> produc;
    
                if(produc != 0){
                    if(produc == 1){
                        map<int, double> pastillasFreno;
                        pastillasFreno[1] = 450;
                        pastillasFreno[2] = 390;
                        pastillasFreno[3] = 500;
                        pastillasFreno[4] = 420;
                        PastillasFreno();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (pastillasFreno.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "450 MXN Bosch" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "390 MXN Brembo" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "500 MXN TRW" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "420 MXN Wagner" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
        
                    }else if(produc == 2){
                        map<int, double> rines;
                        rines[1] = 2500;
                        rines[2] = 2700;
                        rines[3] = 3000;
                        rines[4] = 3200;
                        Rines();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (rines.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "2500 MXN Enkei" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "2700 MXN BBS" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "3000 MXN OZ Racing" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "3200 MXN Fuel Off-Road" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
        
                    }else if(produc == 3){
                        map<int, double> discosFreno;
                        discosFreno[1] = 700;
                        discosFreno[2] = 750;
                        discosFreno[3] = 800;
                        discosFreno[4] = 850;
                        DiscosFreno();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (discosFreno.at(codigo) * piezas); 
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "700 MXN Brembo" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "750 MXN Bosh" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "800 MXN Power Stop" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "850 MXN AC Delco" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                       
                        
                    }else if(produc == 4){
                        map<int, double> bombasAgua;
                        bombasAgua[1] = 1200;
                        bombasAgua[2] = 1350;
                        bombasAgua[3] = 1500;
                        bombasAgua[4] = 1600;
                        BombasAgua();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (bombasAgua.at(codigo) * piezas); 
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "1200 MXN Gates" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "1350 MXN Aisin" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "1500 MXN AC Delco" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "1600 MXN Bosch" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
        
                    }else if(produc == 5){
                        map<int, double> bujiasRepuesto;
                        bujiasRepuesto[1] = 60;
                        bujiasRepuesto[2] = 75;
                        bujiasRepuesto[3] = 90;
                        bujiasRepuesto[4] = 110;
                        BujiasRepuesto();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (bujiasRepuesto.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "60 MXN NGK" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "75 MXN Bosh" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "90 MXN Champion" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "110 MXN Denso" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
        
                    }else if(produc == 6){
                        map<int, double> correasDistribucion;
                        correasDistribucion[1] = 900;
                        correasDistribucion[2] = 950;
                        correasDistribucion[3] = 1100;
                        correasDistribucion[4] = 1200;
                        CorreasDistribucion();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (correasDistribucion.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "900 MXN Gates" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "950 MXN Continental" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "1100 MXN Dayco" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "1200 MXN Mitsuboshi" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                       
        
                    }else if(produc == 7){
                        map<int, double> bateriasArranque;
                        bateriasArranque[1] = 2500;
                        bateriasArranque[2] = 2700;
                        bateriasArranque[3] = 2900;
                        bateriasArranque[4] = 3200;
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (bateriasArranque.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "2500 MXN LTH" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "2700 MXN Bosch" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "2900 MXN Optima" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "3200 MXN Varta" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
        
                    }else if(produc == 8){
                        map<int, double> radiadores;
                        radiadores[1] = 3500;
                        radiadores[2] = 3800;
                        radiadores[3] = 4200;
                        radiadores[4] = 4500;
                        Radiadores();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (radiadores.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "3500 MXN Denso" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "3800 MXN TYC" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "4200 MXN Behr Hella" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "4500 MXN Mishimoto" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
        
                    }else if (produc == 9){
                        map<int, double> fusibles;
                        fusibles[1] = 30;
                        fusibles[2] = 40;
                        fusibles[3] = 50;
                        fusibles[4] = 60;
                        Fusibles();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (fusibles.at(codigo) * piezas); 
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "30 MXN Bussman" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "40 MXN Littelfuse" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "50 MXN Ferraz Shawmut" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "60 MXN Blue Sea Systems" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
                        
                        
                        
                    }else if(produc == 10){
                        map<int, double> bombillasRepuesto;
                        bombillasRepuesto[1] = 120;
                        bombillasRepuesto[2] = 150;
                        bombillasRepuesto[3] = 180;
                        bombillasRepuesto[4] = 200;
                        BombillasRepuesto();
                        cout << "Quieres comprar un producto de esta seccion" << endl;
                        cin >> eleccion;
                        
                        while(eleccion == si){
                            cout << "Ingresa el numero del producto que quieras comprar" << endl;
                            cin >> codigo;
                        
                            cout << "Cuantas piezas deseas comprar? " << endl;
                            cin >> piezas;
                            sumatoria = (bombillasRepuesto.at(codigo) * piezas);  
                            
                            if(codigo == 1){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "120 MXN Philips" << endl;
                                com.close();
                            }else if(codigo == 2){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "150 MXN Osram" << endl;
                                com.close();
                            }else if(codigo == 3){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "180 MXN Sylvania" << endl;
                                com.close();
                            }else if(codigo == 4){
                                com.open("listaDeCompras.txt", ios::app);
                                com << "200 MXN Hella" << endl;
                                com.close();
                            }
                        
                            cout << "Quieres comprar otro producto de esta seccion?" << endl;
                            cin >> eleccion;
                        }
                        total = total + sumatoria;
        
                    }


                    cout << "El total es de: " << total << endl;
                    cout << "Quieres finalizar tu compra" << endl;
                    cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                    cin >> eleccion;
        
                    if(eleccion == si){
                        if(total > 2500){
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "El total a pagar es: " << total << endl;
                            com.close();

                            double descuento = total * 0.20; 
                            total -= descuento;

                            com.open("listaDeCompras.txt" , ios::app);
                            com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                            com << "El total a pagar con descuento es: " << total << endl;
                            com.close();
                            ifstream h("listaDeCompras.txt"); 
                            string line;
                            while (getline(h, line)) { 
                                cout << line << endl;
                            }
                            h.close();  
                            total = 0;
                            cuotatotal = 0;
                        }else{
                            com.open("listaDeCompras.txt" , ios::app);
                            com << "El total a pagar es: " << total << endl;
                            com.close();
    
                            ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                            }
                        }
                
                    }
                
                }

            }else if(opcion == 3){
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
                cout << "0) Volver al menu principal:" << endl;
                cout << string(ancho * 25, '-') << endl;
                cout << "Elige una opcion" << endl;
                cin >> servicio;
    
                if(servicio != 0){
                    if( servicio == 1 ){
                        cout << string(ancho * 40, '-') << endl;
                        cout << CYAN << "1)" << RESET << string(ancho *2 ,  ' ') <<  string(ancho*1 , '|' ) << "Carga Basica del coche." << endl;
                        cout << CYAN << "2)" << RESET << string(ancho *2 ,  ' ') <<  string(ancho*1 , '|' ) << "Carga Media del coche." << endl;
                        cout << CYAN << "3)" << RESET << string(ancho *2 ,  ' ') <<  string(ancho*1 , '|' ) << "Carga Alta del coche." << endl;
                        cout << CYAN << "0)" << RESET << string(ancho *2 ,  ' ') <<  string(ancho*1 , '|' ) << "Volver al menu principal" << endl;
                        cout << string(ancho * 40, '-') << endl;
                        cout << "Que servicio deseas adquirir?" << endl;
                        cin >> servi;
    
                        com.open("listaDeCompras.txt" , ios::app);
                        com << "Servicioos adquiridos" << endl;
                        com.close();
    
                        if(servi == 1){
                            map<int, double> carga;
                            carga[1] = 90;
                            carga[2] = 180;
                            CargaBasica();
                            
                            cout << "Que servicio deseas adquirir?" << endl;
                            cin >> codigo;
                             if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "90MXN CARGA 50% por 6 horas" << total << endl;
                                com.close();
    
                                total = total + 90;
                             }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "180MXN carga 100% por 12 horas" << total << endl;
                                com.close();
    
                                total = total + 180;
                             }else{
                                cout << "opcion no disponible" << endl;
                             }


                             cout << "El total es de: " << total << endl;
                            cout << "Quieres finalizar tu compra" << endl;
                            cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                            cin >> eleccion;
        
                            if(eleccion == si){
                                 if(total > 2500){
                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "El total a pagar es: " << total << endl;
                                     com.close();

                                    double descuento = total * 0.20; 
                                    total -= descuento;

                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                                    com << "El total a pagar con descuento es: " << total << endl;
                                    com.close();
                                    ifstream h("listaDeCompras.txt"); 
                                    string line;
                                    while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                    h.close();  
                                    total = 0;
                                    cuotatotal = 0;
                            }else{
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "El total a pagar es: " << total << endl;
                                com.close();
    
                                ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                            }
                        }


    
            
                        }else if(servi == 2){
                            map<int , double> carga;
                            carga[1] = 180;
                            carga[2] = 360;
                            CargaMedia();
                            cout << "Que servicio deseas adquirir?" << endl;
                            cin >> codigo;
                             if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "180MXN CARGA 50% por 4 horas" << total << endl;
                                com.close();
    
                                total = total + 180;
                             }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "360MXN carga 100% por 8 horas" << total << endl;
                                com.close();
    
                                total = total + 360;
                             }else{
                                cout << "opcion no disponible" << endl;
                             }


                             cout << "El total es de: " << total << endl;
                            cout << "Quieres finalizar tu compra" << endl;
                            cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                            cin >> eleccion;
        
                            if(eleccion == si){
                                 if(total > 2500){
                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "El total a pagar es: " << total << endl;
                                     com.close();

                                    double descuento = total * 0.20; 
                                    total -= descuento;

                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                                    com << "El total a pagar con descuento es: " << total << endl;
                                    com.close();
                                    ifstream h("listaDeCompras.txt"); 
                                    string line;
                                    while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                    h.close();  
                                    total = 0;
                                    cuotatotal = 0;
                            }else{
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "El total a pagar es: " << total << endl;
                                com.close();
    
                                ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                            }
                        }
                            
            
                        }else if(servi == 3){
                            map <int , double> carga;
                            carga[1] = 250;
                            carga[2] = 500;
                            CargaAlta();
                            cout << "Que servicio deseas adquirir?" << endl;
                            cin >> codigo;
                             if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "250MXN CARGA 50% por 30 minutos" << total << endl;
                                com.close();
    
                                total = total + 90;
                             }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "500MXN carga 100% por 1 horas" << total << endl;
                                com.close();
    
                                total = total + 180;
                             }else{
                                cout << "opcion no disponible" << endl;
                             }


                             cout << "El total es de: " << total << endl;
                            cout << "Quieres finalizar tu compra" << endl;
                            cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                            cin >> eleccion;
        
                            if(eleccion == si){
                                 if(total > 2500){
                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "El total a pagar es: " << total << endl;
                                     com.close();

                                    double descuento = total * 0.20; 
                                    total -= descuento;

                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                                    com << "El total a pagar con descuento es: " << total << endl;
                                    com.close();
                                    ifstream h("listaDeCompras.txt"); 
                                    string line;
                                    while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                    h.close();  
                                    total = 0;
                                    cuotatotal = 0;
                            }else{
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "El total a pagar es: " << total << endl;
                                com.close();
    
                                ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                            }
                        }
                        }
            
                    }else if(servicio == 2){
                        cout << CYAN << "1)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Parking Cercano o lejano" << endl;
                        cout << CYAN << "2)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Parking Nocturno" << endl;
                        cout << "¿Que servicio deseas adquirir?" << endl;
                        cin >> servi;
                         
                        if(servi ==1){
                            map<int, double> cercano;
                            cercano[1] = 60;
                            cercano[2] = 150;
                            AparcarmientoExpress();
                            cout << "Que servicio deseas adquirir?" << endl;
                            cin >> codigo;
                             if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "60MXN Servicio de valet parking" << total << endl;
                                com.close();
    
                                total = total + 60;
                             }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "150MXN servicio de valet parking" << total << endl;
                                com.close();
    
                                total = total + 150;
                             }else{
                                cout << "opcion no disponible" << endl;
                             }


                             cout << "El total es de: " << total << endl;
                            cout << "Quieres finalizar tu compra" << endl;
                            cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                            cin >> eleccion;
        
                            if(eleccion == si){
                                 if(total > 2500){
                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "El total a pagar es: " << total << endl;
                                     com.close();

                                    double descuento = total * 0.20; 
                                    total -= descuento;

                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                                    com << "El total a pagar con descuento es: " << total << endl;
                                    com.close();
                                    ifstream h("listaDeCompras.txt"); 
                                    string line;
                                    while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                    h.close();  
                                    total = 0;
                                    cuotatotal = 0;
                            }else{
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "El total a pagar es: " << total << endl;
                                com.close();
    
                                ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                            }
                        }
            
                        }else if(servi == 2){
                            map <int , double> carga;
                            carga[1] = 100;
                            carga[2] = 200;
                            AparcamientoDos();
                            cout << "Que servicio deseas adquirir?" << endl;
                            cin >> codigo;
                             if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "100MXN Servicio de valet parking nocturno - 6 PM a 12 PM" << total << endl;
                                com.close();
    
                                total = total + 100;
                             }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "200MXN Servicio de valet parking nocturno - 6 PM a 6 AM" << total << endl;
                                com.close();
    
                                total = total + 200;
                             }else{
                                cout << "opcion no disponible" << endl;
                             }


                             cout << "El total es de: " << total << endl;
                            cout << "Quieres finalizar tu compra" << endl;
                            cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                            cin >> eleccion;
        
                            if(eleccion == si){
                                 if(total > 2500){
                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "El total a pagar es: " << total << endl;
                                     com.close();

                                    double descuento = total * 0.20; 
                                    total -= descuento;

                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                                    com << "El total a pagar con descuento es: " << total << endl;
                                    com.close();
                                    ifstream h("listaDeCompras.txt"); 
                                    string line;
                                    while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                    h.close();  
                                    total = 0;
                                    cuotatotal = 0;
                            }else{
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "El total a pagar es: " << total << endl;
                                com.close();
    
                                ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                            }
                        }
                        }
    
                     
        
                    
        
                }else if(servicio == 3){
                    cout << CYAN << "1)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Recarga de gasolina REGULAR hasta 2 litros" << endl;
                    cout << CYAN << "2)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Recarga de gasolina PREMIUM hasta 2 litros" << endl;
                    cout << CYAN << "3)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Recarga de gasolina DIESEL hasta 2 litros" << endl;
                    cout << "¿Que servicio deseas adquirir?" << endl;
                    cin >> servicio;
                 
                    if(servicio == 1){
                        map<int, double> litro;
                        litro[1] = 23;
                        litro[2] = 46;
                        GasolinaRegular();
                        cout << "Que servicio deseas adquirir?" << endl;
                            cin >> codigo;
                             if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "23MXN 1lt de gasolina regular" << total << endl;
                                com.close();
    
                                total = total + 23;
                             }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "46MXN 2lt de gasolina regular" << total << endl;
                                com.close();
    
                                total = total + 46;
                             }else{
                                cout << "opcion no disponible" << endl;
                             }


                             cout << "El total es de: " << total << endl;
                            cout << "Quieres finalizar tu compra" << endl;
                            cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                            cin >> eleccion;
        
                            if(eleccion == si){
                                 if(total > 2500){
                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "El total a pagar es: " << total << endl;
                                     com.close();

                                    double descuento = total * 0.20; 
                                    total -= descuento;

                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                                    com << "El total a pagar con descuento es: " << total << endl;
                                    com.close();
                                    ifstream h("listaDeCompras.txt"); 
                                    string line;
                                    while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                    h.close();  
                                    total = 0;
                                    cuotatotal = 0;
                            }else{
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "El total a pagar es: " << total << endl;
                                com.close();
    
                                ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                            }
                        }
        
                    }else if(servicio == 2){
                        map<int, double> litro;
                        litro[1] = 26;
                        litro[2] = 52;
                        GasolinaPremium();
                        cout << "Que servicio deseas adquirir?" << endl;
                            cin >> codigo;
                             if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "26MXN 1 litro de gasolina PREMIUM" << total << endl;
                                com.close();
    
                                total = total + 26;
                             }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "52MXN 1 litro de gasolina PREMIUM" << total << endl;
                                com.close();
    
                                total = total + 52;
                             }else{
                                cout << "opcion no disponible" << endl;
                             }


                            cout << "El total es de: " << total << endl;
                            cout << "Quieres finalizar tu compra" << endl;
                            cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                            cin >> eleccion;
        
                            if(eleccion == si){
                                 if(total > 2500){
                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "El total a pagar es: " << total << endl;
                                     com.close();

                                    double descuento = total * 0.20; 
                                    total -= descuento;

                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                                    com << "El total a pagar con descuento es: " << total << endl;
                                    com.close();
                                    ifstream h("listaDeCompras.txt"); 
                                    string line;
                                    while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                    h.close();  
                                    total = 0;
                                    cuotatotal = 0;
                            }else{
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "El total a pagar es: " << total << endl;
                                com.close();
    
                                ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                            }
                        }
        
                    }else if(servicio == 3){
                        map<int, double> litro;
                        litro[1] = 27;
                        litro[2] = 54;
                        GasolinaDiesel();
                        cout << "Que servicio deseas adquirir?" << endl;
                            cin >> codigo;
                             if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "27MXN 1 litro de gasolina DIESEL" << total << endl;
                                com.close();
    
                                total = total + 27;
                             }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "54MXN 1 litro de gasolina DIESEL" << total << endl;
                                com.close();
    
                                total = total + 54;
                             }else{
                                cout << "opcion no disponible" << endl;
                             }


                            cout << "El total es de: " << total << endl;
                            cout << "Quieres finalizar tu compra" << endl;
                            cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                            cin >> eleccion;
        
                            if(eleccion == si){
                                 if(total > 2500){
                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "El total a pagar es: " << total << endl;
                                     com.close();

                                    double descuento = total * 0.20; 
                                    total -= descuento;

                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                                    com << "El total a pagar con descuento es: " << total << endl;
                                    com.close();
                                    ifstream h("listaDeCompras.txt"); 
                                    string line;
                                    while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                    h.close();  
                                    total = 0;
                                    cuotatotal = 0;
                            }else{
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "El total a pagar es: " << total << endl;
                                com.close();
    
                                ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                            }
                        }
                        
                    }
        
        
                }else if(servicio == 4){
                    cout << CYAN << "1)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Reservación del dia Sabado" << endl;
                    cout << CYAN << "2)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Reservación del dia Domingo" << endl;
                    cout << "¿Que servicio deseas adquirir?" << endl;
                    cin >> servi;
                 
                    if(servi == 1){
                        map<int, double> reserva;
                        reserva[1] = 50;
                        reserva[2] = 100;
                        ReservacionSa();
                        cout << "Que servicio deseas adquirir?" << endl;
                            cin >> codigo;
                             if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "50MXN Espacion Estandar" << total << endl;
                                com.close();
    
                                total = total + 26;
                             }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "100MXN 1 Espacio con cargador EV " << total << endl;
                                com.close();
    
                                total = total + 100;
                             }else{
                                cout << "opcion no disponible" << endl;
                             }


                            cout << "El total es de: " << total << endl;
                            cout << "Quieres finalizar tu compra" << endl;
                            cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                            cin >> eleccion;
        
                            if(eleccion == si){
                                 if(total > 2500){
                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "El total a pagar es: " << total << endl;
                                     com.close();

                                    double descuento = total * 0.20; 
                                    total -= descuento;

                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                                    com << "El total a pagar con descuento es: " << total << endl;
                                    com.close();
                                    ifstream h("listaDeCompras.txt"); 
                                    string line;
                                    while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                    h.close();  
                                    total = 0;
                                    cuotatotal = 0;
                            }else{
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "El total a pagar es: " << total << endl;
                                com.close();
    
                                ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                            }
                        }
        
                             
                    }else if(servi == 2){
                        map<int, double> reserva;
                        reserva[1] = 50;
                        reserva[2] = 100;
                        reserva[3] = 110;
                        ReservacionDo();
                        cout << "Que servicio deseas adquirir?" << endl;
                            cin >> codigo;
                             if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "50MXN 1 espcacio estandar" << total << endl;
                                com.close();
    
                                total = total + 50;
                             }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "52MXN 1 espacio con cargador EV" << total << endl;
                                com.close();
    
                                total = total + 100;
                             }else{
                                cout << "opcion no disponible" << endl;
                             }


                            cout << "El total es de: " << total << endl;
                            cout << "Quieres finalizar tu compra" << endl;
                            cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                            cin >> eleccion;
        
                            if(eleccion == si){
                                 if(total > 2500){
                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "El total a pagar es: " << total << endl;
                                     com.close();

                                    double descuento = total * 0.20; 
                                    total -= descuento;

                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                                    com << "El total a pagar con descuento es: " << total << endl;
                                    com.close();
                                    ifstream h("listaDeCompras.txt"); 
                                    string line;
                                    while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                    h.close();  
                                    total = 0;
                                    cuotatotal = 0;
                            }else{
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "El total a pagar es: " << total << endl;
                                com.close();
    
                                ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                            }
                        }
                    }
        
                    }else if(servicio == 5){
                        cout << CYAN << "1)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Ayuda para cargar bolsas a Mano" << endl;
                        cout << CYAN << "2)" << RESET << string(ancho * 2 , ' ') << string(ancho * 1 , '|') << "Ayuda para cargar bolsas en carrito" << endl;
                        cout << "¿Que servicio deseas adquirir?" << endl;
                        cin >> servicio;
                     
                        if(servi == 1){
                            map<int, double> bolsa;
                            bolsa[1] = 30;
                            bolsa[2] = 50;
                            BolsasAmano();
                            cout << "Que servicio deseas adquirir?" << endl;
                            cin >> codigo;
                             if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "30MXN carga de 2 bolsas a mano" << total << endl;
                                com.close();
    
                                total = total + 30;
                             }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "50MXN carga de 6 bolsas en carrito" << total << endl;
                                com.close();
    
                                total = total + 50;
                             }else{
                                cout << "opcion no disponible" << endl;
                             }


                            cout << "El total es de: " << total << endl;
                            cout << "Quieres finalizar tu compra" << endl;
                            cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                            cin >> eleccion;
        
                            if(eleccion == si){
                                 if(total > 2500){
                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "El total a pagar es: " << total << endl;
                                     com.close();

                                    double descuento = total * 0.20; 
                                    total -= descuento;

                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                                    com << "El total a pagar con descuento es: " << total << endl;
                                    com.close();
                                    ifstream h("listaDeCompras.txt"); 
                                    string line;
                                    while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                    h.close();  
                                    total = 0;
                                    cuotatotal = 0;
                            }else{
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "El total a pagar es: " << total << endl;
                                com.close();
    
                                ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                            }
                        }
                    }
                            
            
                                 
                        }else if(servi == 2){
                            map<int, double> bolsa;
                            bolsa[1] = 50;
                            bolsa[2] = 70;
                            BolsasAcarrito();
                            cout << "Que servicio deseas adquirir?" << endl;
                            cin >> codigo;
                             if(codigo == 1){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "50MXN 1 espcacio estandar" << total << endl;
                                com.close();
    
                                total = total + 50;
                             }else if(codigo == 2){
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "70MXN 1 espacio con cargador EV" << total << endl;
                                com.close();
    
                                total = total + 100;
                             }else{
                                cout << "opcion no disponible" << endl;
                             }


                            cout << "El total es de: " << total << endl;
                            cout << "Quieres finalizar tu compra" << endl;
                            cout << "NOTA al finalizar tu compra se mostrara el monto total de tus compras" << endl;
                            cin >> eleccion;
        
                            if(eleccion == si){
                                 if(total > 2500){
                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "El total a pagar es: " << total << endl;
                                     com.close();

                                    double descuento = total * 0.20; 
                                    total -= descuento;

                                    com.open("listaDeCompras.txt" , ios::app);
                                    com << "Se Aplico un descuento del 20% en compras mayores a 2500" << endl;
                                    com << "El total a pagar con descuento es: " << total << endl;
                                    com.close();
                                    ifstream h("listaDeCompras.txt"); 
                                    string line;
                                    while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                    h.close();  
                                    total = 0;
                                    cuotatotal = 0;
                            }else{
                                com.open("listaDeCompras.txt" , ios::app);
                                com << "El total a pagar es: " << total << endl;
                                com.close();
    
                                ifstream h("listaDeCompras.txt"); 
                                string line;
                                while (getline(h, line)) { 
                                    cout << line << endl;
                                }
                                h.close();  
                                total = 0;
                                cuotatotal = 0;
                            }
                        }
                    }
                }
        
               
            }else if(opcion == 4){
    
                cout << " " << endl;
                cout << "Bienvenidos al estacionamiento UTVT" << endl;
                cout << "En UTVT estacionamiento nos especializamos en brindar seguridad comodidad y accesibilidad" << endl;
                cout << "para que su experiencia de estacionamiento sea rapida y sin preocupaciones. Nuestro principal" << endl;
                cout << "para que su experiencia de estacionamiento sea rapida y sin preocupaciones. Nuestro principal" << endl;
                cout << "objetivo es ofrecer un servicio eficiente y confiable garantizando que su vehiculo este seguro" << endl;
                cout << "mientras usted realiza sus actividades con total tranquilidad." << endl;
                cout << "Contamos con amplias instalaciones tecnologia de vigilancia un equipo atento y tarifas competitivas" << endl;
                cout << "todo establecido para adaptarse a sus necesidades. Ya sea que necesite estacionamiento por horas" << endl;
                cout << "dias o planes especiales en UTVT estacionamiento tenemos la mejor opcion para usted." << endl;
                cout << "Su comodidad y seguridad son nuestra prioridad. Gracias por confiar en nosotros" << endl;
                cout << " " << endl;
            } 
            
        }
    }

    

