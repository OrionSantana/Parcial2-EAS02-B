#include <iostream>
using namespace std;

class Figura{
private:
    int b, h;
    float p;

public:
    Figura(int base);
    Figura(int base, int height);
    void setPerimetro(float a);
    float getPerimetro();
};

class Cuadrado: public Figura{
    public:
Cuadrado(int base);
};

class Rectangulo: public Figura{
    public:
Rectangulo(int base,int height);
};

class Circulo: public Figura{
    public:
Circulo(int base);
};
/*
    Implementa los constructores y funciones de la clase Figura.
    La función setPerimetro UNICAMENTE recibe el perímetro y lo asigna, NO lo calcula.
*/

/*
    Implementa la clase Cuadrado que hereda de Figura.
    Crear constructor de Cuadrado que herede del constructor de Figura.
    Calcular y asignar el perímetro del cuadrado.
*/

/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Calcular y asignar el perímetro del Rectángulo.
*/

/*
    Implementa la clase Círculo que hereda de Figura.
    Crear constructor de Círculo que herede del constructor de Figura.
    Calcular y asignar el perímetro del Círculo.
*/

int main () {

    Cuadrado s(5);
    cout << s.getPerimetro() << endl; // 20
    Rectangulo r(5,10);
    cout << r.getPerimetro() << endl; // 30
    Circulo t(5);
    cout << t.getPerimetro() << endl; // ~31.41592
    return 0;
}

Figura::Figura(int base){
    b=base;
};
Figura::Figura(int base, int height){
    b = base;
    h = height;
};

void Figura::setPerimetro(float a){
    p=a;
};

float Figura::getPerimetro(){
    return p;
};

Cuadrado::Cuadrado(int base): Figura(base){
    setPerimetro(base*4);
}

Rectangulo::Rectangulo(int base,int height): Figura(base,height){
    setPerimetro((base+height)*2);
}

Circulo::Circulo(int base): Figura(base){
    setPerimetro(base*2*3.141592);
}