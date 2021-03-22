#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    double L1, L2, L3; 
    
    cout << "Digite o primeiro laod do triângulo: "; 
    cin >> L1; 

    cout << "Digite o segundo lado do triângulo: ";
    cin >> L2;
    
    cout << "Digite o terceiro lado do triângulo: "; 
    cin >> L3; 

    if( L1 >= (L2 + L3 ) && L2 >= (L1 + L2) && L3 >= (L2 + L1) ){
        cout <<  "Não é um triângulo";
    }else if(L1 == L2 == L3){
        cout << "TRIÂNGULO EQUILÁTERO";
    }else if(L1 != L2 != L3){
        cout << "TRIÂNGULO ESCALENO"; 
    }else if( L1 != L2 == L3 || L2 != L1 == L3 || L3 != L1 == L2  ){
        cout << "TRIÂNGULO ISÓSCELES";
    }
}