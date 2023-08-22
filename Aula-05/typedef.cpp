#include <iostream>
#include <vector>

typedef std::string texto_t; // Atribiu o valor de std::string pra texto_t
typedef int numeros_t; // Atribui o valor de int pra numeros

// Outra forma usando a palavra-chave using
using frases_t = std::string;
using pi_t = double;
int main() {

    texto_t primeiro_nome = "Enzo";
    texto_t sobrenome = "Silveira";
    numeros_t idade = 15;
    numeros_t ano = 2023;
    std::cout << primeiro_nome << '\n';
    std::cout << sobrenome << '\n';
    std::cout << idade << '\n';
    std::cout << ano << '\n';

    frases_t cartoon = "Hora de Aventura";
    pi_t valor_pi= 3.1415;
    std::cout << cartoon << '\n';
    std::cout << valor_pi << '\n';
    return 0;
}
