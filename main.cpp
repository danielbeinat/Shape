#include <iostream>
#include "./include/Shape.h"
#include "./include/Square.h"
#include "./include/Circle.h"
#include "./include/Triangle.h"
#include "./include/T_Equilateral.h"
#include "./include/T_Isosceles.h"
#include "./include/T_Scalene.h"

using namespace std;

Shape *figura[5];

void cargarFigura()
{

    for (int i = 0; i < 5; i++)
    {

        string opcion;
        cout << "Digite 'circulo' para crear un circulo: " << endl;
        cout << "Digite 'cuadrado' para crear un cuadrado: " << endl;
        cout << "Digite 'equilatero' para crear un triangulo equilatero: " << endl;
        cout << "Digite 'isosceles' para crear un triangulo Isosceles: " << endl;
        cout << "Digite 'escaleno' para crear un triangulo escaleno: " << endl;
        cin >> opcion;
        cout << endl;

        if (opcion == "circulo")
        {

            float radio;

            cout << "ingrese la medida del radio del circulo: " << endl;
            cin >> radio;
            figura[i] = new Circle(radio);
        }

        if (opcion == "cuadrado")
        {
            float lado;

            cout << "ingrese la medida del lado del cuadrado: " << endl;
            cin >> lado;
            figura[i] = new Square(lado);
        }

        if (opcion == "equilatero")
        {

            float lado, base, altura;
            cout << "ingrese la medida del lado del triangulo equilatero: " << endl;
            cin >> lado;

            cout << "ingrese la basee del triangulo equilatero: " << endl;
            cin >> base;

            cout << "Ingrese la altura del triangulo equilatero: " << endl;
            cin >> altura;

            figura[i] = new t_Equilateral(lado, base, altura);
        }

        if (opcion == "isosceles")
        {
            float lado, lado2, base, altura;
            cout << "ingrese la medida del lado del triangulo isosceles: " << endl;
            cin >> lado;

            cout << "ingrese la medida del lado2 del triangulo isosceles: " << endl;
            cin >> lado2;

            cout << "ingrese la basee del triangulo isosceles: " << endl;
            cin >> base;

            cout << "Ingrese la altura del triangulo isosceles: " << endl;
            cin >> altura;

            figura[i] = new t_Isosceles(lado, lado2, base, altura);
        }

        if (opcion == "escaleno")
        {
            float lado1, lado2, lado3, base, altura;

            cout << "Ingrese la medida del lado1 del triangulo escaleno: " << endl;
            cin >> lado1;

            cout << "Ingrese la medida del lado2 del triangulo escaleno: " << endl;
            cin >> lado2;

            cout << "Ingrese la medida del lado3 del triangulo escaleno: " << endl;
            cin >> lado3;

            cout << "Ingrese la base del triangulo escaleno: " << endl;
            cin >> base;

            cout << "Ingrese la altura del triangulo escaleno: " << endl;
            cin >> altura;

            figura[i] = new t_Scalene(lado1, lado2, lado3, base, altura);
        }

        
    }

    
}

void mostrarDatos()
{
    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "-----MOSTRANDO DATOS-----" << endl;
        cout << "El área de la figura: " << i + 1 << " es: " << figura[i]->getArea() << endl;
        cout << "El perímetro de la figura: " << i + 1 << " es: " << figura[i]->getPerimeter() << endl;
    }
}

void pause()
{
    // system("PAUSE") multiplataforma!:
    cin.ignore();
    cin.get();
}

void menu()
{
    int opcion;

    do
    {
        cout << "---MENU---" << endl;
        cout << "1. Cargar una figura " << endl;
        cout << "2. Ver áreas y perímetros " << endl;
        cout << "3. Salir " << endl;

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cargarFigura();
            mostrarDatos();

            break;

        case 2:
            mostrarDatos();
            break;

        case 3:
            exit(EXIT_SUCCESS); // SALIR CORRECTAMENTE
            break;

        default:
            cout << "Opción inexistente." << endl;
            break;
        }

    } while (opcion < 0 && opcion > 3);
}

int main(int argc, char const *argv[])
{
    menu();
    pause();
    return 0;
}