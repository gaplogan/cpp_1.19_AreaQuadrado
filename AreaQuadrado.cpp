#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Declara��o de vari�veis
    double lado, area;

    // Entrada de dados
    cout << "Digite o valor do lado do quadrado: ";
    cin >> lado;

    // Processamento de dados
    lado = abs(lado); //garante lado positivo 
    area = lado * lado; //f�rmula da �rea do quadrado

    // Sa�da de dados
    cout << endl;
    cout << "�rea do quadrado: " << area;

    return 0;
}