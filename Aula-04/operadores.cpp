#include <iostream>

int main() {

    int estudantes = 20;
    //   ADIÇÃO
    estudantes = estudantes + 1; //Adiciona 1 ao números de alunos
      //Segunda forma
    estudantes += 1;
      //Terceira forma
    estudantes ++;

    //   SUBTRAÇÃO
    estudantes = estudantes - 1; //Subtrai 1 ao números de alunos
      //Segunda forma
    estudantes -= 1;
      //Terceira forma
    estudantes --;

    //   MULTIPLICAÇÃO
    estudantes = estudantes * 2;
      //Segunda forma
    estudantes *= 2;

    //   DIVISÃO
    estudantes = estudantes / 2;
      //Segunda forma
    estudantes /= 2;

    //   MÓDULO
    int restante = estudantes % 3;

    std::cout << "O numeros de alunos e " << estudantes << '\n';
    std::cout << "O restante foi " << restante << '\n';
    return 0;
}
