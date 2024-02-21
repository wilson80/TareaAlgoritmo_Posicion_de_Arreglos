#include <iostream>

using namespace std;

int calcularPosicion(int indices[], int tamanos[], int numDimensiones) {
    int posicion = 0;
    int multiplicador = 1;

    for (int i = numDimensiones - 1; i >= 0; --i) {
        posicion += indices[i] * multiplicador;
        multiplicador *= tamanos[i];
    }
    return posicion;
}

int main() {
    int cantidadCordenadas;
    int opcion;

    cout << "Para comenzar, ingrese la cantidad de cordenadas a ingresar" << endl;
    cin >> cantidadCordenadas;

    int  coordenadas[cantidadCordenadas];
    int  tamanosDimension[cantidadCordenadas];

    for (int i = 0; i < cantidadCordenadas; ++i) {
        cout << "Ingrese una cordenada" << endl;
        cin >> coordenadas[i];
    }
        cout << "A continuacion debera ingresar los tamanos de las dimensiones del Arreglo" << endl;

        for (int i = 0; i < cantidadCordenadas; ++i) {
            cout << "Ingrese un tamano de dimension" << endl;
            cin >> tamanosDimension[i];
        }
//
        cout << "Las coordenadas ingresadas son: " << endl;
        for (int coor: coordenadas) {
            cout << "Coordenada: " << coor << endl;
        }
        cout << "Tamanos maximos de cada dimension: " << endl;
        for (int  coor: tamanosDimension) {
            cout << "Tamano de dimension: " << coor << endl;
        }

    int numDimensiones = sizeof(tamanosDimension) / sizeof(coordenadas[0]);

    int posicion = calcularPosicion(coordenadas, tamanosDimension, numDimensiones);

    cout << "La posicion calculada es: " << posicion <<endl;

    return 0;
}















//#include <iostream>
//using namespace std;

//int calcularPosicion_nDims(int indice[], int tDims[]){
//    int posicion = 0;
//    int cantidadDimensiones = sizeof indice / sizeof indice[0];
//
//    int dimenAux = cantidadDimensiones;
//
//    for (int i = 0; i < cantidadDimensiones; ++i) {
//        int pos;
//        dimenAux--;
//        if(i==0){
//            pos +=  indice[dimenAux];
//        }else{
//            int cantidadOpe
//            for (int j = 0; j < ; ++j) {
//
//            }
//
////            pos +=(indice[dimenAux-1])*(cantidadDimensiones[dimenAux]);
//              int indice = ;
////            pos +=();
//
//        }
//
//    }


//    i   j    k
//    i(#j*#k)+(j*#k)+k


//    return posicion;
//}
//int Operacion_por_Dimension(int cor, int tamD){
//
//
//}

//
//int main() {
//    int cantidadCordenadas;
//    int opcion;
//
//    cout << "Para comenzar, ingrese la cantidad de cordenadas a ingresar" << endl;
//    cin >> cantidadCordenadas;
//
//    int  coordenadas[cantidadCordenadas];
//    int  tamanosDimension[cantidadCordenadas];
//
//    for (int i = 0; i < cantidadCordenadas; ++i) {
//        cout << "Ingrese una cordenada" << endl;
//        cin >> coordenadas[i];
//    }
//        cout << "A continuacion debera ingresar los tamanos de las dimensiones del Arreglo" << endl;
//
//        for (int i = 0; i < cantidadCordenadas; ++i) {
//            cout << "Ingrese un tamano de dimension" << endl;
//            cin >> tamanosDimension[i];
//        }
//
//        cout << "Las coordenadas ingresadas son: " << endl;
//        for (int coor: coordenadas) {
//            cout << "Coordenada: " << coor << endl;
//        }
//        cout << "Tamanos maximos de cada dimension: " << endl;
//        for (int  coor: tamanosDimension) {
//            cout << "Tamano de dimension: " << coor << endl;
//        }
//
//    int posicioncalculada;
//    posicioncalculada = calcularPosicion_nDims(coordenadas,tamanosDimension);
//
//
//
//
//        return 0;
//    }
