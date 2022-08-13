#include <iostream>
using namespace std;

int main (){
    int nota1, nota2, nota3;
    float media;
    cout << "Insira abaixo as notas correspondentes ao primeiro, segunto e terceiro trimeste:\n";
    cin >> nota1 >> nota2 >> nota3;
    media = (nota1*1 + nota2*2 + nota3*3) / 6;
    if (media < 40)
        cout << "REPROVADO\n";
    else if ((media >=40)&&(media <60))
        cout << "EXAME ESPECIAL\n";
    else if ((media >=60)&&(media<90))
        cout << "APROVADA\n";
    else 
        cout << "APROVADA COM MÉRITOS\n";
    return 0;
}