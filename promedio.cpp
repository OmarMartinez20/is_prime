# include <iostream>
using namespace std;

int main(){
    float suma=0,num=-1,promedio;
    int contador=-1;

    while(num!=0){
        cout<<"Escribe un número. si deseas terminar,digita 0:";
        cin>>num;
        suma = suma+num; 
        contador++;
    }
    promedio = suma/contador;
    cout<<"El promedio de los números que escribiste es: "<<promedio<<endl;
    return 0;
}