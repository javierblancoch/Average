#include <iostream>
using namespace std;

int main() {
  int i=1;
  int contador,cantidadnotas;
  float promedio,nota,suma;

  cout << "Ingresa cantidad de pruebas: ";
  cin >> cantidadnotas;

  contador = cantidadnotas + 1;
  while (i<contador) {
    cout << "Ingrese nota de prueba "<<i<<":";
    cin >> nota;
    suma = suma + nota;
    i=i+1;
  }

  promedio = suma/cantidadnotas;
  cout << "El promedio es : "<<promedio<<endl;
  return 0;
}
