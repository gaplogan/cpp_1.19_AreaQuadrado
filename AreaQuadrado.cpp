#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Declaração de variáveis
    double lado, area;

    // Entrada de dados
    cout << "Digite o valor do lado do quadrado: ";
    cin >> lado;

    // Processamento de dados
    lado = abs(lado); //garante lado positivo 
    area = lado * lado; //fórmula da área do quadrado

    // Saída de dados
    cout << endl;
    cout << "Área do quadrado: " << area;

    return 0;
}