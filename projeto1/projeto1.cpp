#include <iostream>//biblioteca de comandos basicos de c++.
#include <string> // biblioteca para trabalhar com strings (textos).

// "NAMESPACE" agrupa o código em um escopo lógico, evitando conflitos de nomes.O namespace deve ser utilizado fora da função main, para que possa ser utilizado por todo o código.
namespace matematica {
    int soma(int a, int b){
       return a + b;
    }
}
    /*
    Exemplo dois:
        =========================== CODIGO INICIANDO ====================================
        namespace Jogador {
            void mover() {}
        }

        namespace Inimigo {
            void mover() {}
        }
        =========================== CODIGO FINALIZANDO ====================================

        // duas funções com o mesmo nome, mas em namespaces diferentes, evitando conflitos de nomes na hora da aplicação do codigo na main.
    }

*/ 

void print(){

    // std:: refencia onde os o comando esta localizado, nesse caso o comando "cout" esta localizado na biblioteca "iostream", que tem o namespace Standard.
	// o std e o namaspace da biblioteca, dependedo da biblioteca o namespace pode ser diferente. O namespace é um recurso que organiza o código em grupos lógicos, evitando conflitos de nomes entre diferentes partes do programa ou entre bibliotecas.
    std::cout << "Hello World!\n";
    std::cout << "Esse e o meu primeiro codigo de c++.\n";

}

void variavel_texto(){

    // declarando variavel
    int ano = 2026;
    std::cout << ano << "\n";

    // combinando o texto com a variavael 
    std::cout << "minha idade é: " << 20 << "\n" << "e o ano é: " << ano;

}

void variavel_imutavel(){
    // declarando variaveis com valor unico (imutavel), usando o comando "CONST". O 
    const int dias_semana = 7;
    std::cout << "Uma semana tem " << dias_semana << "\n";

    /*
    // voce tambem pode declarar um mesmo valor para varias variaveis.
    ====================  CODIGO RODANDO ============================
    int x, y;
    x = y = 10;
    std::cout << x << "/" << y << "\n";
    ====================  CODIGO RODANDO ============================
    */
}


void operador_extracao_cin(){
    // "CIN" e o operador de extração, usado para receber dados do usario. O simbolo de inserção se inverte para o lado: >>
    int user_num;
    std::cout << "Digite um numero: " "\n";
    std::cin >> user_num;
	std::cout << "O numero digitado foi: " << user_num;
}

void namespace_aplicacao(){
    // "NAMESPACE" aplicação. 
    int x, y;
    std::cout << "Digite dois numeros: ";
    std::cin >> x >> y;
    matematica::soma(x, y); // chamando a função soma do namespace matematica.
	int resultado = matematica::soma(x, y); // armazenando o resultado da função soma em uma variavel.
    std::cout << resultado;
    
    // ou
	std::cout << matematica::soma(x, y); // chamando a função soma do namespace matematica e imprimindo o resultado diretamente.
}

void exemplo_string(){
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
}

void if_else(){

    //===============================================================================================================================================
    
    /* ESTRUTURA DO IF, ELSE.
    
    if (CONDIÇÃO) {
		// BLOCO DE CODIGO A SER EXECUTADO SE A CONDIÇÃO FOR VERDADEIRA
    }
   
    else if (CONDICAO 2) {
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
}

void operadores_logicos(){

    // OPERADORES LÓGICOS: && (AND), || (OR), ! (NOT)
    // && (AND) RETORNA VERDADEIRO SE AMBAS AS CONDIÇÕES FOREM VERDADEIRAS.
    // || (OR) RETORNA VERDADEIRO SE PELO MENOS UMA DAS CONDIÇÕES FOR VERDADEIRA.
    // ! (NOT) INVERTE O VALOR DE VERDADE DE UMA CONDIÇÃO. SE A CONDIÇÃO FOR VERDADEIRA, O RESULTADO SERÁ FALSO, E SE A CONDIÇÃO FOR FALSA, O RESULTADO SERÁ VERDADEIRO.

    int a,b,c;
    std::cout << "Digite três números: ";
    std::cin >> a >> b >> c;

    if (a > b && b > c ) {
        std::cout << "A sua expressão é verdadeira";
    }
    else if (a > b || b > c){
        std::cout << "A sua expressão é parcialmente verdadeira";
    }
    else if (!(a > b) && !(b > c)){ // isolo a expressão em parenteses e inverto a logica, coloco o AND pra ambas serem  expressões de mesmo valor. E inverto novamente a segunda expressão.
        std::cout << "A sua expressão é falsa";
        // adendo importante, cada argumento dentro do paramentro deve aver um parentese para isolar, nesse caso o simbolo not tem um parenteses, para separa - lo do A > B
    }
};

void switch_case(){

    // SWITCH CASE 
    std:: cout << "BEM VINDO AO BANCO BRASIL\n";
    std:: cout << "Escolha uma das opções abaixo: \n";

    std:: cout << "1 - VER SALDO\n";
    std:: cout << "2 - DEPOSITO\n";
    std:: cout << "3 - SAQUE\n";
    std:: cout << "4 - SAIR\n";
    
    int opcao;
    std:: cin >> opcao;
    
    int saldo = 500;

    switch (opcao){
        case 1:
            std:: cout << "O seu saldo é: " << saldo;
            break;
        case 2:
            std:: cout << "Iniciando o deposito de saldo.";
            break;
        case 3:
            std:: cout << "Iniciando o seu saque.";
            break;
        case 4: 
            std:: cout << "Saindo do sistema, até a proxima.";
            break;

    }
}

void teste_while(){
/*
    while (condicao) {
    
    // code executado
    
    }


*/

int i = 0;

while (i < 5) { // INICIA EM 0, IMPRIME 4 EM TELA, E TERMINA EM 5. LOGO PARA SABER O REAL RESULTADO EU COLO O I + 1. OU APENOS IMPRIMO O RESULTADO FINAL SEPARADO.
 
    std::cout << i << "\n";
    i++; 
}

std::cout << "resultdo final do indice: " << i << "\n";


// DO/WHILE LOOP. é uma variante do while que executaram uma vez antes da verificação de verdadeiro e falso, logo em seguida o loop continuaram enquanto a condição for verdadeira.
/*

    do {
    // codigo sera executado
    }
    while (condicao);

    loop sempre é executado pelo menos uma vez, mesmo que a condição já seja falsa. o loop DO e util quando voce precisar que certa parte precisa ser executada, mesmo quando a condição seja falsa. 
    
*/
do { // INICIA COM 5, E TERMINA EM 10.
    std::cout << i << "\n";
    i++;
}

while (i < 10); // A UM USO OBRIGATORIO DE PONTO E VIRGULA QUANDO USAMOS O DO.

std::cout << "resultdo final do indice: " << i << "\n";


// ======================================== CASO A CONDICAO FOSSE, DESDE O INICIO, FALSA. ==============================================================
do { // JA INICIA NO 10, RODA UMA VEZ PELO "DO" VIRA 11; E CAI NO WHILE COMO FALSO.
    std:: cout << i << "\n";
    i++;
}

while (i < 10);

std::cout << "resultdo final do indice: " << i << "\n";

// MESMO COM A CONDIÇÃO, INICIALMENTE, SENDO FALSA; O LOOP AINDA IRA RODAR UMA POR CONTA DO "DO".

}

// função principal do programa. 
// int e o resultado que deve voltar para a funcão. 0 e 1. Semalhante a uma função boolean.
// as funções VOID são funcões sem retorno que usarei para testar cada parte do codigo dentro da main, e separando conteudo por conteudo.
int main()
{
    
    std:: cout << "Teste De Funcão";
    teste_while();// chamando a funcão. Não e necessaria escreve o seu titulo.

    return 0; // finalizando o programa, devolvendo para função o valor 0

}


// Observações:
// Todo comando em c++ termina com ponto e virgula.
// O c++ diferencias mauisculas e minusculas, logo o mesmo codigo pode ter funções difentes, indicadas pelo uso da letra maisculas e minusculas.
// using namespace std; comando para não precisar usar o std::
// e considerado uma má pratica, pois pode causar conflitos de nomes.
// << é o operador de inserção. Nesse caso, ele insere o texto em tela.
// o comando "AUTO" pode ser utilizado para fazer a deteccão automática do tipo de uma variável, ou seja, o compilador irá deduzir o tipo da variável com base no valor atribuído a ela. Exemplo: auto idade = 30; // O compilador deduzirá que 'idade' é do tipo int.
