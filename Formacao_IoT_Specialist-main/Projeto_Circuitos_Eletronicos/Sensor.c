
int BOTAO = 3;
int ESTADO_B1 = 0;
int MODO = 0;

int LED_VM = 13;
int BUZINA = 7;

int RELE = 4;

int LM36 = A5;
int VALOR_ADC = 0;
float Volts = 0;
float Temperatura = 0;

void setup()
{
  pinMode (BOTAO, INPUT);
  pinMode (LM36, OUTPUT);
  pinMode (LED_VM, OUTPUT);
  pinMode (BUZINA, OUTPUT);
  pinMode (RELE, OUTPUT);
  
}
void loop()
{
  ESTADO_B1 = digitalRead(BOTAO);
  Serial.print("O estado do botão é:");
  Serial.print(ESTADO_B1);
  
  if (ESTADO_B1 == HIGH)
  {
        MODO = !MODO;
        delay (300);
  }
  Serial.print("O modo atual é:");
  Serial.print(MODO);
  
  if (MODO == 1)
  {
   VALOR_ADC = analogRead (LM35);
    
   Volts = (VALOR_ADC * 5.0) / 1023.0;
   Serial.print("A tensão é:");
   Serial.print(Volts);
    
   Temperatura = Volts * 100.0;
   Serial.print("A temperatura é:");
   Serial.print(Temperatura);
   
   if (Temperatura >= 30.0)
  {
   digitalWrite(RELE, HIGH);
  }
   if (Temperatura > 30.0);
  {
   digitalWrite(RELE, LOW);
  }
  if (Temperatura > 50.0);
  {
   digitalWrite(LED_VM, HIGH);
   digitalWrite(BUZINA, HIGH);
  }
  }
  else
  {
   digitalWrite(LED_VM, LOW);
   digitalWrite(BUZINA, LOW);
   delay (300);
   
  }
}