#ifndef CLASSE_H
#define CLASSE_H

using namespace std;

class Classe {
  private:
string nome;
//vector<string> vetor;   
string vetor[10];                            ;

  public:
string getNome();
void setNome(string n);

string getVetor();
void setVetor(string v);

};

#endif