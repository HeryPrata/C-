#include <iostream>//biblioteca de comandos basicos de c++.
#include <string> // biblioteca para trabalhar com strings (textos).
#include <vector> // biblioteca para uso de vetores.

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


// ================================= CASO A CONDICAO FOSSE, DESDE O INICIO, FALSA. ==============================================================
do { // JA INICIA NO 10, RODA UMA VEZ PELO "DO" VIRA 11; E CAI NO WHILE COMO FALSO.
    std:: cout << i << "\n";
    i++;
}

while (i < 10);

std::cout << "resultdo final do indice: " << i << "\n";

// MESMO COM A CONDIÇÃO, INICIALMENTE, SENDO FALSA; O LOOP AINDA IRA RODAR UMA POR CONTA DO "DO".

}


void for_loop(){
  // =============================== EXEMPLO DE ESTURURA =============================================
    /*

    for (declaração 1; declaração 2; declaração 3) {
    // bloco de execução do codigo
    }
    DECLARACAO 1 = EXECUTADA UMA VEZ ANTES DO BLOCO
    DECLARACAO 2 = DEFINE A CONDIÇÃO DO BLOCO DE CODIGO
    DECLARACAO 3 = EXECUTADA SEMPRE APOS A EXECUÇÃO DO BLOCO
  
   */  

  // ============================= EXEMPLO PRATICO ===================================================
  // Contagem de 1 a 10, usando o loop for.

  for (int i = 0; i < 10;i++){ // Defino o indice, defino o a parametro de rotação: < 10, e coloco o contador++ para a somar do indice. 
    std::cout << i + 1 << "\n"; // o indice começa no 0, Para que a 10 voltas sejam representadas do 1 ao 10, colocamos o +1 no print.
  }

 // Contagem regressiva de 10 a 1, usando o contador--
 for (int i = 10; i > 0;i--) {
    std:: cout << i << "\n";
 }
// LAÇOS ALINHADO: UM LOOP DENTRO DE OUTRO LOOP, CRIANDO UM SISTEMA DE COLUNAS E LINHAS.
 for (int i = 1; i <= 3; i++){ // i = 1, da verdadeiro, logo entramos no segundo loop, que tambem e verdadeiro, dentro do cout mostramos a conta i = 1 + j = 1, imprime 1; o loop volta pro topo e segue a logica: 1*2 e 1*3, 2*1 e 2*2 e 2*3,3*1 e 3*2 e 3*3.
    for (int j = 1; j <= 3;j++){
        std::cout << i * j;
        /*
        1x1 = 1 
        1x2 = 2
        1x3 = 3

        2x1 = 2 
        2x2 = 4
        2x3 = 6

        3x1 = 3 
        3x2 = 6
        3x3 = 9
        
        RESULTADO FINAL: 123
                         246
                         369
        */
    }
    std:: cout << "\n";
 }

 // Loop foreach: conhecido como loop baseado em intervalos. E usados para percorre matrizes e, outras estruturas de dados.
 int meu_numero[5] = {10,20,30,40,50};// Definindo a array(vetor). Array e uma estrutura de dados capaz de armazenar multiplas informações em uma unica variavel. Vetor e um tipo de array que armazena de forma sequencial, semelhante a uma lista de itens.
 for (int num : meu_numero){ // variavel vazia, para sobrepor os numeros dentro do vetor.
    std::cout << num << "\n";

    /*
    SIGNIFICADOS:
    NUM = VARIAVEL DO TIPO INT, RESPONSAVEL POR ARMAZENAR OS DADOS DA VETOR.
    : = Para cada elemento de myNumbers, coloque esse elemento em num. 
    OU 
    : = operador do range-based for, que indica que o laço deve percorrer 
        todos os elementos de myNumbers, atribuindo cada um deles à variável num.
    
    */

 }

// Break e continue, podem ser usados em loops, break exerce a função de para o loop; e o continue interrompe uma sequencia e pula para a proxima.

// CONTINUE
for (int i = 1; i < 10; i++){
    if (i == 4){
        continue; 

              // Se i for igual a 4, o continue ignora o restante desta iteração
              // e passa imediatamente para a próxima volta do loop.
              // Assim, o número 4 não será exibido.

    std::cout << i << "\n";
  }

 }

// BREAK 
for (int i = 1; i < 10; i++){
    if (i == 4){
        break;; 

              // Se i for igual a 4, o loop e finalizado pelo break.

    std::cout << i << "\n";
  }

 }

}


void array_matriz_vetor(){
// Como já citado, array e uma estrutura de dados capaz de armazenar varias informações em um unica variavel.
// Matriz e um tipo de array, que se caracteriza por sepera os dados em linhas e colunas.
// A contagem dos array sempre se iniciam com ZERO, logo ele sempre sera o primeiro elemento e o UM o segundo elemento da array.
std:: string carros[4] = {"Volvo", "BMW","Ford","Marzda"}; // Em quesito de sixtaxe, a matriz e caracterizada por []. Dentro contem a quantidade de informações armazenadas.
              
              /*
              ELEMENTO 0 = VOLVO
              ELEMENTO 1 = BMW
              ELEMENTO 2 = FORD
              ELEMENTO 3 = MARZDA
              */

// Acessando um elemento de uma matriz
std::cout << carros[0]; // Escrevemos o nome da matriz e dentro dos colchetes informamos o numero da informação que desejamos, nesse caso, o primeiro veiculo.

// Alterando um elemento de uma matriz
carros[0] = "Ferrari";

// Imprimindo a mudança
std::cout << carros[1];

// Para mostramos todos os elementos de uma matriz, usamos o laço de repetição, para percorrer todas as informações armazenadas na matriz.
for (int i = 0; i < 4;i++){
    std::cout << carros[i] << "\n";

}

// Podemos, também, usar o loop for-each para percorrer as matrizes
for (int num : carros){
    std::cout << num << "\n";
}

//================================== VETOR ===========================================================
// Vetor são, em c++, matrizes redimensionais: capaz de adicionar, remover e modificar elementos conforme o necessario.
// O vetor necessita de import de biblioteca: <vector>

// Declarando um vetor com tres elementos
std::vector<string> carros = {"McLaren","Porche","BMW"};

                /* O TIPO DA INFORMAÇÃO E COLOCADA DENTRO DOS <>
                   O VETOR, EM QUESITO SIXTAXE, E CARACTERIZADO PELAS CHAVES {}


                */

//Adicionando um novo elemento no vetor
carros.push_back("Tesla");
                
                /* Push_back() é a função responsavel por adicionar mais elemento no final do vetor
                   Para remover um elementos que se encontra na extremidade, ultima posicao, usamos a função .pop_back()
                   Para localizar um elementos em especificos, podemos usar o .at()
                
                */

// Removendo o ultimo elemento da tabela
carros.pop_back(); 

// localizando um elemento no vetor
std::cout << carros.at(0); // localizando o primeiro veiculo

//Descobrindo quantos elementos tem no vetor, usando a funcao .size()
std:: cout << carros.size();// pode ser usado em um loop, como parametro, para mostrar todos os elementos de uma tabela que recebe modificacoes constantes.

// Descobrindo se o vetor esta vazio ou se contem elementos, usando o .empty()
std:: cout << carros.empty();

                 /*
                 A FUNCÃO .EMPTY() RETORNA 1 (TRUE) SE O VETOR ESTIVER VAZIO E 0 (FALSO) SE CONTIVER UM OU MAIS ELEMENTOS.  
                 */

}


int main()
// função principal do programa. 
// int e o resultado que deve voltar para a funcão. 0 e 1. Semalhante a uma função boolean.
// as funções VOID são funcões sem retorno que usarei para testar cada parte do codigo dentro da main, e separando conteudo por conteudo.

{
    for_loop();
    std:: cout << "Teste De Funcão\n";
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
