#include <iostream>
#include <string>
using namespace std; 

int main(void){
    int num = 0;
    string cadena1 = " *";
    string cadena2 = " ";
    cout << "Ingrese el tamaño del rombo: ";
    cin >> num;
    
   if (num%2==0){
      cout << "porfavor ingrese un numero impar" << endl;
    }
    else{
        for(int a = 1; a<=num; a++){
        cout << cadena1 << cadena2;
        cadena1 += " *";
        cadena2 += " ";
        cout << "\n";
    
    }

    cadena1.erase(0,1);
    cadena2.erase(0,1);
    for(int a = num; a >=0; a--){
        for (int b=1; b>=0; b--){
          cout << cadena2;
          cadena2 = " ";
        }
        cadena1 = cadena1.erase(0,1);   
        cadena2 = cadena2.erase(0,1);
        cout << cadena1 << cadena2;
        cout <<"\t\n";
    }
  }
}