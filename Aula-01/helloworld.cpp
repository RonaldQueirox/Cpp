#include <iostream>

int main() {

    int x; // Declaração
    x = 5; // Atribui Valor
    std::cout << x << '\n'; // Exibir a variável x

    int z = 12;
    std::cout << z << '\n'; // '\n' = quebra de linha

    int soma = x + z;
    std::cout << soma << '\n';

    std::cout << "==========================" << '\n';

    //Inteiro (Número inteiro)
    int idade = 15;
    int ano = 2023;
    int dias = 7;
    std::cout << dias << '\n';

    std::cout << "==========================" << '\n';

    //Racional (número incluindo decimal)
    double preco = 3.50;
    double temperatura = 37.3;
    double media = 7.4;

    std::cout << preco << '\n';
    std::cout << temperatura << '\n';
    std::cout << media << '\n';

    std::cout << "==========================" << '\n';

    //Caractere Unico
    char nota = 'A';
    char iniciao = 'R';
    char moeda = '$';
    std::cout << iniciao << moeda << '\n';

    //Booleano (Verdadeiro ou Falso)
    bool estudante = true;
    bool lampada = false;
    bool a_venda = true;

    std::cout << "===========================" << '\n';

    //String (Palavras e Frases)
    std::string primeiro_nome = "Antonio"; //Cria uma variável string
    std::string segundo_nome = " Ronald";
    std::string sobrenome = " Queiroz";
    std::string dia = "Domingo";
    std::string comida = "Feijoada";
    std::string endereco = "321 Rua do limoeiro St.";
    std::string user = "Usuario";

    std::cout << "Ola !!!! " << user << '\n'; //Concatenação
    std::cout << "Voce Tem " << idade << '\n';
    std::cout << "Meu Nome e " << primeiro_nome << segundo_nome << sobrenome << '\n';
    std::cout << "Hoje e " << dia << '\n';
    std::cout << "Minha comida favorita e " << comida << '\n';
    std::cout << "Moro na " << endereco << '\n';

    return 0;

}
