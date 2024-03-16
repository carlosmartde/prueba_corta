#include <iostream>

void bubbleSort(int numeros[],int n) {
    for (int i=0; i<n-1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int cambio = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = cambio;
            }
        }
    }
}
using namespace std;

int main (){

    int n;

    cout<<"INGRESE LA CANTIDAD DE NUMEROS QUE TENDRA EL VECTOR: "<<endl;
    cin>>n;

    int numeros[n];
    cout<<"INGRESE EL NUMEROS SEPARADOS POR UN ESPACIO: ";
    for (int i=0; i<n; i++){
        cin>>numeros[i];
    }

    bubbleSort(numeros, n);

    cout<<"LOS NUMEROS ORDENADOS DE MENOR A MAYOR SON: ";
        for(int i=0; i<n; i++){
            cout<<numeros[i]<<" ";
        }

    return 0;
}