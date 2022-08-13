#include <iostream>
using namespace std;

std::vector resultado (float media){
    if (media < 40)
        return "REPROVADO\n";
    else if ((media >=40)&&(media <60))
        return "EXAME ESPECIAL\n";
    else if ((media >=60)&&(media<90))
        return "APROVADA\n";
    else 
        return "APROVADA COM MÉRITOS\n";
}

int main (){
    int nota1, nota2, nota3;
    float media;
    cout << "Insira abaixo as notas correspondentes ao primeiro, segunto e terceiro trimeste:\n";
    cin >> nota1 >> nota2 >> nota3;
    media = (nota1*1 + nota2*2 + nota3*3) / 6;
    cout << "Resultado: " << resultado (media) << "\n";
    return 0;
}