#include <iostream>

int main() {

    int estudantes = 20;
    //   ADI��O
    estudantes = estudantes + 1; //Adiciona 1 ao n�meros de alunos
      //Segunda forma
    estudantes += 1;
      //Terceira forma
    estudantes ++;

    //   SUBTRA��O
    estudantes = estudantes - 1; //Subtrai 1 ao n�meros de alunos
      //Segunda forma
    estudantes -= 1;
      //Terceira forma
    estudantes --;

    //   MULTIPLICA��O
    estudantes = estudantes * 2;
      //Segunda forma
    estudantes *= 2;

    //   DIVIS�O
    estudantes = estudantes / 2;
      //Segunda forma
    estudantes /= 2;

    //   M�DULO
    int restante = estudantes % 3;

    std::cout << "O numeros de alunos e " << estudantes << '\n';
    std::cout << "O restante foi " << restante << '\n';
    return 0;
}
