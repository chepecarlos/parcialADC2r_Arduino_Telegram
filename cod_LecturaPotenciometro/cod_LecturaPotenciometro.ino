
long valor; //esta variable almacena el valor del potenciometro
int numero; // esta avriable la cuparemos para definir el numero segun el rango en el que nos encontremos

void setup() {
  // put your setup code here, to run once:
 // inicializamos la comunicacion serial
 Serial.begin(9600);

//Escribimos un mensaje de inicio
 Serial.println("Inicio - valores del potenciometro");

}


void loop() {
  // put your main code here, to run repeatedly:
// leeremos el pin A0 valor o el pin analogico que este conectado la salida del potenciometro
valor = analogRead(A0);

//Para probar imprimimos el valor por pantalla
Serial.print("El valor es = ");
Serial.println(valor);
Serial.println("");

if(valor >= 0 && valor <= 93.09)
{
  numero == 0;
  Serial.print("El numero es = ");
  Serial.println(numero);
}
if(valor >= 93.1 && valor <= 186.19)
{
  numero == 1;
  Serial.print("El numero es = ");
  Serial.println(numero);
}
if(valor >= 186.20 && valor <= 279.3)
{
  numero == 2;
  Serial.print("El numero es = ");
  Serial.println(numero);
}
if(valor >= 279.4 && valor <= 372.5)
{
  numero == 3;
  Serial.print("El numero es = ");
  Serial.println(numero);
}
if(valor >= 372.51 && valor <= 465.6)
{
  numero == 4;
  Serial.print("El numero es = ");
  Serial.println(numero);
}
if(valor >= 465.61 && valor <= 558.8)
{
  numero == 5;
  Serial.print("El numero es = ");
  Serial.println(numero);
}
if(valor >= 558.9 && valor <= 651.8)
{
  numero == 6;
  Serial.print("El numero es = ");
  Serial.println(numero);
}
if(valor >= 651.9 && valor <= 744.9)
{
  numero == 7;
  Serial.print("El numero es = ");
  Serial.println(numero);
}
if(valor >= 744.81 && valor <= 838.0)
{
  numero == 8;
  Serial.print("El numero es = ");
  Serial.println(numero);
}
if(valor >= 838.1 && valor <= 931.1)
{
  numero == 9;
  Serial.print("El numero es = ");
  Serial.println(numero);
}
if(valor >= 931.2 && valor <= 1023)
{
  numero == 10;
  Serial.print("El numero es = ");
  Serial.println(numero);
}



}
