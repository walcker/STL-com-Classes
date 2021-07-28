#include <iostream>
#include <string>
#include <vector>
#include "classe.h"

using namespace std;

int main() {
    Classe c;
    c.largura = 10;
    c.altura = 5;
    for(int i = 0; i < 5; i++){
      c.vetor.push_back(i);
    }

    cout << "Area: " << c.area() << endl;
    cout << "Perimetro: " << c.perimetro() << endl;
    cout << "Vetor: ";
    for(int i = 0; i< 5; i++){
      cout << c.vetor[i] << " ";
    }
    return 0;
}