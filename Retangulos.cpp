#include <iostream>

using namespace std;

// Declaração e implementação da classe Poligono.

class Poligono {

protected:

     int numero_lados;

public:

     int getNumeroLados() const;

};

inline int Poligono::getNumeroLados() const {
    return numero_lados;
};

// Declaração e implementação da classe Retangulo.

class Retangulo:public Poligono {
    private:
        float base, altura;

    public:
        Retangulo(float, float);
        float calcularArea();
        float calcularPerimetro();


};

Retangulo::Retangulo(float base, float altura):Poligono() {
    numero_lados = 4;
    this->base = base;
    this->altura = altura;
}

float Retangulo::calcularArea() {
    return base*altura;
}

float Retangulo::calcularPerimetro() {
    return 2*(base + altura);
}

// Implementação de método main.

int main() {

     float base, altura;   

     cin >> base;

     cin >> altura;

     Retangulo retangulo(base, altura);

     cout << retangulo.getNumeroLados();

     cout << retangulo.calcularArea();

     cout << retangulo.calcularPerimetro();

     return 0;

}