#include <iostream>
using namespace std;

int calcularPosicion_nDims(int coordenadas[], int tamanos_Dims[]){
    int posicion = 0;
    int cantidadDimensiones = sizeof coordenadas/sizeof coordenadas[0];

    for (int i = 0; i < cantidadDimensiones; ++i) {
        int pos;
        if(i==0){
            pos +=  coordenadas[cantidadDimensiones-1];
        }else{
            pos =

        }

    }


//    i   j    k
//    i(#j*#k)+(j*#k)+k


    return posicion;
}
int resultado(){

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

        cout << "Las coordenadas ingresadas son: " << endl;
        for (int coor: coordenadas) {
            cout << "Coordenada: " << coor << endl;
        }
        cout << "Tamanos maximos de cada dimension: " << endl;
        for (int  coor: tamanosDimension) {
            cout << "Tamano de dimension: " << coor << endl;
        }

    int posicioncalculada;
    posicioncalculada = calcularPosicion_nDims(coordenadas,tamanosDimension);




        return 0;
    }
