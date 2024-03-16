/*#include <iostream>

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
}*/
#include <iostream>
using namespace std;

int main (){
    int numero1;
    int numeros[10]={1,2,3,4,5,6,7,8,9,10};

    cout<<"INGRESE UN NUMERO: "<<endl;
    cin>>numero1;


    bool encontrado=false;
    int posicion=-1;
    for (int i=0; i<10; i++) {
        if (numeros[i] == numero1) {
            encontrado = true;
            posicion = i;
            break;
        }
    }

    if (encontrado){
        cout<<"EL NUMERO "<<numero1<<" SI ESTA EN EL VECTOR EN LA POSICION "<<posicion<<endl;
    }else {
        cout<<"EL NUMERO "<<numero1<<" NO ESTA EN EL VECTOR"<<endl;
    }




    return 0;
}



