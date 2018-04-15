
long valor; //esta variable almacena el valor del potenciometro
int numero; // esta avriable la cuparemos para definir el numero segun el rango en el que nos encontremos


// variables para capturar valor mayor y menor
int Lista[11];

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
valor = analogRead(A0);

//Para probar imprimimos el valor por pantalla
//Serial.print("El valor es = ");
//Serial.println(valor);
//Serial.println("");


if(valor >= 0 && valor <= 93.09)
{
  numero == 0;
  Serial.print("El numero es = ");
  Serial.println(numero);
  Lista[0]=0;
}
if(valor >= 93.1 && valor <= 186.19)
{
  numero == 1;
  Serial.print("El numero es = ");
  Serial.println(numero);
    Lista[1]= numero;
}
if(valor >= 186.20 && valor <= 279.3)
{
  numero == 2;
  Serial.print("El numero es = ");
  Serial.println(numero);
    Lista[2]=numero;
}
if(valor >= 279.4 && valor <= 372.5)
{
  numero == 3;
  Serial.print("El numero es = ");
  Serial.println(numero);
    Lista[3]=numero;
}
if(valor >= 372.51 && valor <= 465.6)
{
  numero == 4;
  Serial.print("El numero es = ");
  Serial.println(numero);
    Lista[4]=numero;
}
if(valor >= 465.61 && valor <= 558.8)
{
  numero == 5;
  Serial.print("El numero es = ");
  Serial.println(numero);
    Lista[5]=numero;
}
if(valor >= 558.9 && valor <= 651.8)
{
  numero == 6;
  Serial.print("El numero es = ");
  Serial.println(numero);
    Lista[6]=numero;
}
if(valor >= 651.9 && valor <= 744.9)
{
  numero == 7;
  Serial.print("El numero es = ");
  Serial.println(numero);
    Lista[7]=numero;
}
if(valor >= 744.81 && valor <= 838.0)
{
  numero == 8;
  Serial.print("El numero es = ");
  Serial.println(numero);
    Lista[8]=numero;
}
if(valor >= 838.1 && valor <= 931.1)
{
  numero == 9;
  Serial.print("El numero es = ");
  Serial.println(numero);
    Lista[9]=numero;
}
if(valor >= 931.2 && valor <= 1023)
{
  numero == 10;
  Serial.print("El numero es = ");
  Serial.println(numero);
    Lista[10]=numero;
}
 delay(1000);



// ahora vamos a capturar numeros: mayor, menor y actual
char orden = Serial.read();
   if (orden == 'Mostrar') {

Mayor();
Menor();
imprimir();
}
}


//Funcion Imprimir
void imprimir()
{
  Serial.print("MAX: ");
 Serial.println(Mayor());

 Serial.print("MIN: ");
 Serial.println(Menor());

 Serial.print("El numero es = ");
 Serial.println(numero);
}

//Funcion para capturar numero mayor
int Mayor(){
  int numMayor = 0;

  //crea un bucle para recorrer ese array
  for (int i=0; i<sizeof(Lista); i++) {
    //compara cada numero del array con el maxVal
    if (numMayor < Lista[i]) {
      numMayor= Lista[i];
    }
  }

  return numMayor;
}

//Funcion para capturar el numero menor
int Menor(){
  int numMenor = 10;

  //crea un bucle para recorrer ese array
  for (int i=0; i<sizeof(Lista); i++) {
    //compara cada numero del array con el minVal y si es menor actualiza la variable
    if (Lista[i] < numMenor) {
      numMenor = Lista[i];
    }
  }

  return numMenor;
}
