#include <iostream>//biblioteca de comandos basicos de c++.

// função principal do programa. 
// int e o resultado que deve voltar para a funcão. 0 e 1. Basicamente uma função boolean.
int main()
{
    // std:: refencia a biblioteca basica de comandos de c++. Count a função. 

    std::cout << "Hello World!\n";
    std::cout << "Esse e o meu primeiro codigo de c++.\n";

    // declarando variavel
    int ano = 2026;
    std::cout << ano;

    // combinando o texto com a variavael 
    std::cout << "minha idade é: " << 20 << "e o ano é: " << ano;
    
    // voce tambem pode declarar um mesmo valor para varias variaveis.
    int x, y;
    x = y = 10;
    std::cout << x << "/" << y;

    // declarando variaveis com valor unico (imutavel), usando o comando "CONST". O 
    const int dias_semana = 7;
    std::cout << "Uma semana tem " << dias_semana;

    // "CIN" e o operador de extração, usado para receber dados do usario. O simbolo de inserção se inverte para o lado: >>
    int user_num;
    std::cout << "Digite um numero: ";
    std::cin >> user_num;
	std::cout << "O numero digitado foi: " << user_num;


    return 0; // finalizando o programa, devolvendo para função o valor 0

}

// Observações:
// Todo comando em c++ termina com ponto e virgula.
// O c++ diferencias mauisculas e minusculas, logo o mesmo codigo pode ter funções difentes, indicadas pelo uso da letra maisculas e minusculas.
// using namespace std; comando para não precisar usar o std::
// e considerado uma má pratica, pois pode causar conflitos de nomes.
// << é o operador de inserção. Nesse caso, ele insere o texto em tela.
// o comando "AUTO" pode ser utilizado para fazer a deteccão automática do tipo de uma variável, ou seja, o compilador irá deduzir o tipo da variável com base no valor atribuído a ela. Exemplo: auto idade = 30; // O compilador deduzirá que 'idade' é do tipo int.