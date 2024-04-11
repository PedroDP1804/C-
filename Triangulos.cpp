#include <iostream>

using namespace std;

// Declaração e implementação da classe Poligono.

class Poligono {

private:

     string nome;

     int numero_lados;

public:

     Poligono(string, int);

     string getNome(){ return nome;}

     int getNumeroLados(){ return numero_lados;}

};

Poligono::Poligono(string nome, int numero_lados) {

     this->nome = nome;

     this->numero_lados = numero_lados;

}

// Declaração e implementação da classe Triangulo.
class Triangulo:public Poligono {
     private:
          float base, altura;
          string nome;

     public:
          Triangulo(float, float, string, int);
          float calcularArea();

};

Triangulo::Triangulo(float base, float altura, string nome, int lados):Poligono(nome, lados) {
     this->base = base;
     this->altura = altura;
     this->nome = nome;
}

float Triangulo::calcularArea() {
     return (altura*base/2);
}

// Implementação de método main.

int main() {

     string nome; 

     float base, altura;   

     cin >> nome;

     cin >> base;

     cin >> altura;

     Triangulo triangulo(base, altura, nome, 3);

     cout << triangulo.getNome();

     cout << triangulo.getNumeroLados();

     cout << triangulo.calcularArea();

     return 0;

}