//Carrega a biblioteca LiquidCrystal
#include <LiquidCrystal.h>

//Carrega a biblioteca DHT
//#include <DHT.h>

//Define os pinos que serão utilizados para ligação ao display
LiquidCrystal lcd(13, 12, 5, 4, 3, 2);

//Array (vetor) para criar o símbolo grau
byte grau[8] ={ B00001100,
                B00010010,
                B00010010,
                B00001100,
                B00000000,
                B00000000,
                B00000000,
                B00000000,};

void setup()
{
  //Define o número de colunas e linhas do LCD
  lcd.begin(16, 2);
  lcd.createChar(0, grau); //Mostra o simbolo do grau formado pelo array
  Serial.begin(9600);
  pinMode (A0, INPUT) ;
}

void loop()
{
  int leitura_bruta = analogRead(A0) ;
  float voltagem = leitura_bruta * (5000.0 / 1023.0) ;
  float temperatura = (voltagem - 500) / 10.0;

  lcd.clear(); //Limpa a tela
  lcd.setCursor(0, 0); //Posiciona no início da primeira linha
  
  lcd.print(temperatura); //Imprime o valor da temperatura (ex: 25.00)
  lcd.write((byte)0);     //Imprime o símbolo do grau logo após o número
  lcd.print("C");         //Imprime a letra C logo após o grau

  delay(5000);

  lcd.clear(); //Limpa a tela
  lcd.setCursor(3, 0); //Posiciona o cursor na coluna 3, linha 0;
  lcd.print("Olá Senai"); //Envia o texto entre aspas para o LCD
  lcd.setCursor(3, 1);
  lcd.print(" LCD 16x2");
  delay(5000);

  //Rolagem para a esquerda
  for (int posicao = 0; posicao < 3; posicao++)
  {
    lcd.scrollDisplayLeft();
    delay(300);
  }

  //Rolagem para a direita
  for (int posicao = 0; posicao < 6; posicao++)
  {
    lcd.scrollDisplayRight();
    delay(300);
  }

  //Rolagem para a esquerda
  //for (int posicao = 0; posicao < 3; posicao++)
  //{
  //  lcd.scrollDisplayLeft();
  //  delay(300);
  //}

  //Rolagem para a direita
  //for (int posicao = 0; posicao < 6; posicao++)
  //{
  //  lcd.scrollDisplayRight();
  //  delay(300);
  //}
}