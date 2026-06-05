#include <iostream>//biblioteca de comandos basicos de c++.
#include <string> // biblioteca para trabalhar com strings (textos).

// "NAMESPACE" agrupa o código em um escopo lógico, evitando conflitos de nomes.O namespace deve ser utilizado fora da função main, para que possa ser utilizado por todo o código.
namespace matematica {
    int soma(int a, int b){
       return a + b;
    }
// Exeplo dois:

    namespace Jogador {
        void mover() {}
    }

    namespace Inimigo {
        void mover() {}
    }
	// duas funções com o mesmo nome, mas em namespaces diferentes, evitando conflitos de nomes na hora da aplicação do codigo na main.
}

// função principal do programa. 
// int e o resultado que deve voltar para a funcão. 0 e 1. Semalhante a uma função boolean.
int main()
{
	// std:: refencia onde os o comando esta localizado, nesse caso o comando "cout" esta localizado na biblioteca "iostream", que tem o namespace Standard.
	// o std e o namaspace da biblioteca, dependedo da biblioteca o namespace pode ser diferente. O namespace é um recurso que organiza o código em grupos lógicos, evitando conflitos de nomes entre diferentes partes do programa ou entre bibliotecas.

    std::cout << "Hello World!\n";
    std::cout << "Esse e o meu primeiro codigo de c++.\n";

    // declarando variavel
    int ano = 2026;
    std::cout << ano << "\n";

    // combinando o texto com a variavael 
    std::cout << "minha idade é: " << 20 << "\n" << "e o ano é: " << ano;
    
    // voce tambem pode declarar um mesmo valor para varias variaveis.
    int x, y;
    x = y = 10;
    std::cout << x << "/" << y << "\n";

    // declarando variaveis com valor unico (imutavel), usando o comando "CONST". O 
    const int dias_semana = 7;
    std::cout << "Uma semana tem " << dias_semana << "\n";

    // "CIN" e o operador de extração, usado para receber dados do usario. O simbolo de inserção se inverte para o lado: >>
    int user_num;
    std::cout << "Digite um numero: " "\n";
    std::cin >> user_num;
	std::cout << "O numero digitado foi: " << user_num;

	// "NAMESPACE" aplicação. 
    std::cout << "Digite dois numeros: ";
    std::cin >> x >> y;
    matematica::soma(x, y); // chamando a função soma do namespace matematica.
	int resultado = matematica::soma(x, y); // armazenando o resultado da função soma em uma variavel.
    std::cout << resultado;
    
    // ou
	std::cout << matematica::soma(x, y); // chamando a função soma do namespace matematica e imprimindo o resultado diretamente.
    
	//String e um tipo de dado para armazenar texto. Ele é parte da biblioteca "string", que deve ser incluída no início do código.
    std::string comprimento = "Óla";
	std::cout << comprimento << "\n";
	// Conectado String com o operador "+"
    std::string apresentacao = "Meu nome é hery, muito prazer!";
    std::cout << comprimento + " " + apresentacao << "\n"; // concatenando as strings usando o operador "+"
    
    // ou
	std::string comprimento_final = comprimento + " " + apresentacao;
	std::cout << comprimento_final << "\n"; // armazenando a string concatenada em uma nova variável e imprimindo-a.

	// É possivel usar as funcões de string para manipular o texto, como por exemplo a função "length()" e "size()" para obter o comprimento da string.
    
    //===============================================================================================================================================
    
    /* ESTRUTURA DO IF, ELSE.
    
    if (CONDIÇÃO) {
		// BLOCO DE CODIGO A SER EXECUTADO SE A CONDIÇÃO FOR VERDADEIRA
    }
   
    else if (condition2) {
		// BLOCO DE CODIGO A SER EXECUTADO SE A PRIMEIRA CONDIÇÃO FOR FALSA E ESTA CONDIÇÃO FOR VERDADEIRA
    }

	else {
        // BLOCO DE CODIGO A SER EXECUTADO SE A CONDIÇÃO FOR FALSA
    }
    
    */
    
   // =================================================================================================================================================
	int nota_aluno;
    std::cout << "Digite sua nota: ";
    std::cin >> nota_aluno;

	if (nota_aluno >= 90) {
		std::cout << "Parabéns! Você tirou um A!" << "\n";
	}
	else if (nota_aluno >= 80) {
		std::cout << "Bom trabalho! Você tirou um B!" << "\n";
	}
	else if (nota_aluno >= 70) {
		std::cout << "Você tirou um C!" << "\n";
	}
	else if (nota_aluno >= 60) {
		std::cout << "Você tirou um D!" << "\n";
	}
	else {
		std::cout << "Infelizmente, você tirou um F." << "\n";

	}

	// Abreviação do código usando o operador ternário, que é uma forma mais concisa de escrever um if-else. Ele tem a seguinte sintaxe: condição ? expressão_se_verdadeira : expressão_se_falsa;
	std::string resultado_final = (nota_aluno >= 60) ? "Aprovado" : "Reprovado"; // se a condição for verdadeira, resultado_final será "Aprovado", caso contrário, será "Reprovado".
	std::cout << resultado_final << "\n";

    return 0; // finalizando o programa, devolvendo para função o valor 0

}

// Observações:
// Todo comando em c++ termina com ponto e virgula.
// O c++ diferencias mauisculas e minusculas, logo o mesmo codigo pode ter funções difentes, indicadas pelo uso da letra maisculas e minusculas.
// using namespace std; comando para não precisar usar o std::
// e considerado uma má pratica, pois pode causar conflitos de nomes.
// << é o operador de inserção. Nesse caso, ele insere o texto em tela.
// o comando "AUTO" pode ser utilizado para fazer a deteccão automática do tipo de uma variável, ou seja, o compilador irá deduzir o tipo da variável com base no valor atribuído a ela. Exemplo: auto idade = 30; // O compilador deduzirá que 'idade' é do tipo int.
