
int valor; //esta variable almacena el valor del potenciometro

// variables para capturar valor mayor y menor
//int Lista[11];
int Maximo = 0;
int Minimo = 10;

void setup() {
  // put your setup code here, to run once:
 // inicializamos la comunicacion serial
 Serial.begin(9600);

//Escribimos un mensaje de inicio
 Serial.println("Iniciando Arduino.....");

}


void loop() {
  // put your main code here, to run repeatedly:
// leeremos el pin A0 valor o el pin analogico que este conectado la salida del potenciometro
//valor = analogRead(A0);
valor = map(analogRead(A0), 0, 1023, 0, 10); //https://www.arduino.cc/reference/en/language/functions/math/map/
//Opcion con regla de 3 a mano 
// valor = analogRead(A0)*(10/1023);
//Para probar imprimimos el valor por pantalla
imprimir();
}


//Funcion Imprimir
void imprimir()
{
 Serial.print("MAX: ");
 Serial.print(Mayor());
 Serial.print(" MIN: ");
 Serial.print(Menor());
 Serial.print(" actual es = ");
 Serial.println(numero);
 delay(1000);//una pequena espera para darle tiempo a nodejs de mandar el mensaje 
}

//Funcion para capturar numero mayor
int Mayor(){
  if(valor > Maximo){
    Maximo = valor;
  } 
  return Maximo;
}

//Funcion para capturar el numero menor
int Menor(){
 if(valor < Minimo){
    Minimo = valor;
  } 
  return Maximo;
}
