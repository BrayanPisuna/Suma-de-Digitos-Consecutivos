
#include <iostream>
using namespace std;

int suma_dig(int n);

int main(void) {
   int numero;
   cout << " la suma de sus digitos." <<
   endl << endl;

   cout << "Por favor, introduzca un numero entero positivo: ";
   cin >> numero;
   cout << endl;

   cout << "La suma de los digitos del numero " << numero << " es " <<
   suma_dig(numero) << "." << endl;

   system("pause");
}


int suma_dig(int n) {
   int suma=0;
   if (n < 0) n=-n;
   while (n!=0) {
     suma+=n%10;           
      n=n/10;               
   }
   return suma;
}
