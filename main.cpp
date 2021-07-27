#include <iostream>
#include <string>
#include <vector>
#include "classe.h"

using namespace std;

int main(){

	Classe c;
	c.setNome("Walcker Gomes");
	c.setVetor("walcker@ufrn.br");
  c.setVetor("walcker2@ufrn.br");

	cout << "Nome = " << c.getNome() << ", Emails = " << c.getVetor() << endl;

	return 0;
}