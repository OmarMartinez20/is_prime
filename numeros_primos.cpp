# include <iostream>
using namespace std;

bool is_prime(int number){
    bool es_primo = true; 
    for (int i=2; i < number; i++){
        if (number % i == 0){
            es_primo = false;
            break;
        }
    }
    return es_primo;
}


int main(){
    int number;
    cout<<"Dijíte un número: ";
    cin>>number;
    bool iDetector = is_prime(number);

    if (iDetector)
        cout<<"El número es primo";
    else
        cout<<"El número no es primo";
    return 0;
    
}
