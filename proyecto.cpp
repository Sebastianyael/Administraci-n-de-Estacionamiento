#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#define CYAN    "\033[36m"
#define RESET   "\033[0m"
/*#include <fstream>*/
using namespace std;
std::string eleccion;
std::string si = "si";


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
    while(eleccion == si){
        cout << "Ingresa el numero del producto que quieras comprar" << endl;
        cin >> codigo;
        cout << "Cuantas piezas deseas comprar? " << endl;
        cin >> piezas;
        sumatoria = (se.at(codigo) * piezas) + sumatoria;
        cout << sumatoria;
        cout << "Quieres comprar otro producto de esta seccion" << endl;
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
    double codigo = 0.0 ,total = 0, produc; 
    int a,ancho = 1,producto,tipoTransporte;

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

    //Aqui empieza la seccion de productos

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
            cout << string(ancho * 40, '-') << endl;
            
            cout << "Que tipo de producto quieres comprar" << endl;
            cin >> produc;
            if(produc == 1){
                map<int, double> shampoo;
                shampoo[1] = 137;
                shampoo[2] = 110;
                shampoo[3] = 80;
                shampoo[4] = 34;
                Shampoo();
                total = Cobro(shampoo , total);
                cout << total  << endl;
                            
            }else if(produc == 2){
                map<int , double> cera;
                cera[1] = 441;
                cera[2] = 189;
                cera[3] = 119;
                cera[4] = 100;
                Cera();
                total = Cobro(cera , total);
                cout << total << endl;

            }else if(produc == 3){
                map <int , double> Limpiador;
                Limpiador[1] = 560;
                Limpiador[2] = 430;
                Limpiador[3] = 325;
                Limpiador[4] = 99;
                limpiador();
                total = Cobro(Limpiador , total);
                cout << total << endl;

            }else if(produc == 4){
                map <int, double> limpiadorTapiceria;
                limpiadorTapiceria[1] = 600;
                limpiadorTapiceria[2] = 300;
                limpiadorTapiceria[3] = 325;
                limpiadorTapiceria[4] = 99;
                LimpiadorTapiceria();
                total = Cobro(limpiadorTapiceria , total);
                cout << total << endl;

            }else if(produc == 5){
                map <int, double> limpiadorCristales;
                limpiadorCristales[1] = 150;
                limpiadorCristales[2] = 200;
                limpiadorCristales[3] = 175;
                limpiadorCristales[4] = 130;
                LimpiadorCristales();
                total = Cobro(limpiadorCristales , total);
                cout << total << endl;

            }else if(produc == 6){
                map <int, double> ambientadoresAutos;
                ambientadoresAutos[1] = 50;
                ambientadoresAutos[2] = 120;    
                ambientadoresAutos[3] = 90;
                ambientadoresAutos[4] = 80;
                AmbientadoresAutos();
                total = Cobro(ambientadoresAutos , total);
                cout << total << endl;

            }else if(produc == 7){
                map <int, double> limpiadorInteriores;
                limpiadorInteriores[1] = 300;
                limpiadorInteriores[2] = 280;
                limpiadorInteriores[3] = 250;
                limpiadorInteriores[4] = 190;
                LimpiadorInteriores();
                total = Cobro(limpiadorInteriores , total);
                cout << total << endl;

            }else if(produc == 8){
                map <int, double> esponjasMicrofibra;
                esponjasMicrofibra[1] = 100;
                esponjasMicrofibra[2] = 80;
                esponjasMicrofibra[3] = 150;
                esponjasMicrofibra[4] = 200;
                EsponjasMicrofibra();
                total = Cobro(esponjasMicrofibra , total);
                cout << total << endl;

            }else if(produc == 9){
                map <int, double> guantesMicrofibra;
                guantesMicrofibra[1] = 150;
                guantesMicrofibra[2] = 130;
                guantesMicrofibra[3] = 180;
                guantesMicrofibra[4] = 90;
                GuantesMicrofibra();
                total = Cobro(guantesMicrofibra , total);
                cout << total << endl;

            }else if(produc == 10){
                map <int, double> aspiradoraPortatil;
                aspiradoraPortatil[1] = 700;
                aspiradoraPortatil[2] = 600;
                aspiradoraPortatil[3] = 850;
                aspiradoraPortatil[4] = 950;
                AspiradoraPortatil();
                total = Cobro(aspiradoraPortatil , total);
                cout << total << endl;

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
            
            cout << "Que tipo de producto quieres comprar" << endl;
            cin >> produc;
             
            if(produc == 1){
                map<int, double> aceiteMotor;
                aceiteMotor[1] = 100;
                aceiteMotor[2] = 120;
                aceiteMotor[3] = 90;
                aceiteMotor[4] = 110;
                AceiteMotor();
                total = Cobro(aceiteMotor, total);
                cout << total << endl;
                
            }else if(produc == 2){
                map<int, double> filtroAceite;
                filtroAceite[1] = 150;
                filtroAceite[2] = 130;
                filtroAceite[3] = 180;
                filtroAceite[4] = 200;
                FiltroAceite();
                total = Cobro(filtroAceite, total);
                cout << total << endl;

            }else if(produc == 3){
                map<int, double> filtroAire;
                filtroAire[1] = 250;
                filtroAire[2] = 300;
                filtroAire[3] = 280;
                filtroAire[4] = 290;
                FiltroAire();
                total = Cobro(filtroAire, total);
                cout << total << endl;

            }else if(produc == 4){
                map<int, double> filtroCombustible;
                filtroCombustible[1] = 300;
                filtroCombustible[2] = 350;
                filtroCombustible[3] = 400;
                filtroCombustible[4] = 380;
                FiltroCombustible();
                total = Cobro(filtroCombustible, total);
                cout << total << endl;

            }else if(produc == 5){
                map<int, double> anticongelante;
                anticongelante[1] = 250;
                anticongelante[2] = 300;
                anticongelante[3] = 270;
                anticongelante[4] = 280;
                Anticongelante();
                total = Cobro(anticongelante, total);
                cout << total << endl;

            }else if(produc == 6){
                map<int, double> bateriaAutos;
                bateriaAutos[1] = 2500;
                bateriaAutos[2] = 2700;
                bateriaAutos[3] = 2900;
                bateriaAutos[4] = 3200;
                BateriaAutos();
                total = Cobro(bateriaAutos, total);
                cout << total << endl;
                

            }else if(produc == 7){
                map<int, double> lubricanteFrenos;
                lubricanteFrenos[1] = 120;
                lubricanteFrenos[2] = 100;
                lubricanteFrenos[3] = 130;
                lubricanteFrenos[4] = 110;
                LubricanteFrenos();
                total = Cobro(lubricanteFrenos, total);
                cout << total << endl;

            }else if(produc == 8){
                map<int, double> limpiadorInyectores;
                limpiadorInyectores[1] = 150;
                limpiadorInyectores[2] = 180;
                limpiadorInyectores[3] = 200;
                limpiadorInyectores[4] = 170;
                LimpiadorInyectores();
                total = Cobro(limpiadorInyectores, total);
                cout << total << endl;

            }else if (produc == 9){
                map<int, double> liquidoFrenos;
                liquidoFrenos[1] = 250;
                liquidoFrenos[2] = 270;
                liquidoFrenos[3] = 300;
                liquidoFrenos[4] = 280;
                LiquidoFrenos();
                total = Cobro(liquidoFrenos, total);
                cout << total << endl;
                
            }else if(produc == 10){
                map<int, double> liquidoLimpiaparabrisas;
                liquidoLimpiaparabrisas[1] = 100;
                liquidoLimpiaparabrisas[2] = 120;
                liquidoLimpiaparabrisas[3] = 110;
                liquidoLimpiaparabrisas[4] = 130;
                LiquidoLimpiaparabrisas();
                total = Cobro(liquidoLimpiaparabrisas, total);
                cout << total << endl;
            }

           
        }else if(producto == 3 ){
            cout << CYAN << "1)" << RESET << string(ancho*1 , '|' ) << "279 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Pastillas de freno" << endl;
            cout << CYAN << "2)" << RESET << string(ancho*1 , '|' ) << "3000 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Rines" << endl;
            cout << CYAN << "3)" << RESET << string(ancho*1 , '|' ) << "2000 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Discos de freno" << endl;
            cout << CYAN << "4)" << RESET << string(ancho*1 , '|' ) << "2100 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Bombas de agua" << endl;
            cout << CYAN << "5)" << RESET << string(ancho*1 , '|' ) << "260 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Bujias de repuesto" << endl;
            cout << CYAN << "6)" << RESET << string(ancho*1 , '|' ) << "300 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Correas de distribucion" << endl;
            cout << CYAN << "7)" << RESET << string(ancho*1 , '|' ) << "1300 MXN" << string(ancho * 3 , ' ') << string(ancho *1, '|') << "Baterias de arranque" << endl;
            cout << CYAN << "8)" << RESET << string(ancho*1 , '|' ) << "890 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Radiadores" << endl;
            cout << CYAN << "9)" << RESET << string(ancho*1 , '|' ) << "500 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Fusibles" << endl;
            cout << CYAN << "10)" << RESET << string(ancho*1 , '|' ) << "600 MXN" << string(ancho * 4 , ' ') << string(ancho *1, '|') << "Bombillas de repuesto" << endl;

            cout << "Que tipo de producto quieres comprar" << endl;
            cin >> produc;
             

            if(produc == 1){
                map<int, double> pastillasFreno;
                pastillasFreno[1] = 450;
                pastillasFreno[2] = 390;
                pastillasFreno[3] = 500;
                pastillasFreno[4] = 420;
                PastillasFreno();
                total = Cobro(pastillasFreno , total);
                cout << total << endl;

            }else if(produc == 2){
                map<int, double> rines;
                rines[1] = 2500;
                rines[2] = 2700;
                rines[3] = 3000;
                rines[4] = 3200;
                Rines();
                total = Cobro(rines , total);
                cout << total << endl;

            }else if(produc == 3){
                map<int, double> discosFreno;
                discosFreno[1] = 700;
                discosFreno[2] = 750;
                discosFreno[3] = 800;
                discosFreno[4] = 850;
                DiscosFreno();
                total = Cobro(discosFreno , total);
                cout << total << endl;
                
            }else if(produc == 4){
                map<int, double> bombasAgua;
                bombasAgua[1] = 1200;
                bombasAgua[2] = 1350;
                bombasAgua[3] = 1500;
                bombasAgua[4] = 1600;
                BombasAgua();
                total = Cobro(bombasAgua , total);
                cout << total << endl;

            }else if(produc == 5){
                map<int, double> bujiasRepuesto;
                bujiasRepuesto[1] = 60;
                bujiasRepuesto[2] = 75;
                bujiasRepuesto[3] = 90;
                bujiasRepuesto[4] = 110;
                BujiasRepuesto();
                total = Cobro(bujiasRepuesto , total);
                cout << total << endl;

            }else if(produc == 6){
                map<int, double> correasDistribucion;
                correasDistribucion[1] = 900;
                correasDistribucion[2] = 950;
                correasDistribucion[3] = 1100;
                correasDistribucion[4] = 1200;
                CorreasDistribucion();
                total = Cobro(correasDistribucion , total);
                cout << total << endl;

            }else if(produc == 7){
                map<int, double> bateriasArranque;
                bateriasArranque[1] = 2500;
                bateriasArranque[2] = 2700;
                bateriasArranque[3] = 2900;
                bateriasArranque[4] = 3200;
                BateriasArranque();
                total = Cobro(bateriasArranque , total);
                cout << total << endl;

            }else if(produc == 8){
                map<int, double> radiadores;
                radiadores[1] = 3500;
                radiadores[2] = 3800;
                radiadores[3] = 4200;
                radiadores[4] = 4500;
                Radiadores();
                total = Cobro(radiadores , total);
                cout << total << endl;

            }else if (produc == 9){
                map<int, double> fusibles;
                fusibles[1] = 30;
                fusibles[2] = 40;
                fusibles[3] = 50;
                fusibles[4] = 60;
                Fusibles();
                total = Cobro(fusibles , total);
                cout << total << endl;
                
            }else if(produc == 10){
                map<int, double> bombillasRepuesto;
                bombillasRepuesto[1] = 120;
                bombillasRepuesto[2] = 150;
                bombillasRepuesto[3] = 180;
                bombillasRepuesto[4] = 200;
                BombillasRepuesto();
                total = Cobro(bombillasRepuesto , total);
                cout << total << endl;

            }
            
        }

        //Aqui termina la seccion de productos

    }else if(opcion == servicios){
        cout << "seleccionaste la opcion de servicios" << endl;
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