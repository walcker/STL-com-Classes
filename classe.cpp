#include <iostream>
#include <string>
#include <vector>
#include "classe.h"

using namespace std;

string Classe::getNome(){
	return nome;
	}
  
void Classe::setNome(string n) {
	nome = n;
	} 

string Classe::getVetor(){
for(int i = 0; i < 2; i++){ 
	return vetor[i];
	}
}
   
void Classe::setVetor(string v) {
for(int i = 0; i < 2; i++){
	vetor[i] = v;
	}
}