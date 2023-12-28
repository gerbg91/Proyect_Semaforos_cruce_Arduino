
//Semaforo 1
const int semaforo_rojo_1 = 12;
const int semaforo_amarillo_1 = 11;
const int semaforo_verde_1 = 10;

//Semaforo 2
const int semaforo_rojo_2 = 9;
const int semaforo_amarillo_2 = 8;
const int semaforo_verde_2 = 7;

//Tiempo de espera
const int tiempoEspera = 2000;

void setup()
{
  	pinMode(semaforo_rojo_1,OUTPUT);
 	pinMode(semaforo_amarillo_1,OUTPUT);
  	pinMode(semaforo_verde_1,OUTPUT);
 	pinMode(semaforo_rojo_2,OUTPUT);
	pinMode(semaforo_amarillo_2,OUTPUT);
 	pinMode(semaforo_verde_2,OUTPUT);
}

void loop()
{
  	//Primera Fase
	//Semaforo 1
	digitalWrite(semaforo_rojo_1,HIGH);
	digitalWrite(semaforo_amarillo_1,LOW);
	//Semaforo 2
  	digitalWrite(semaforo_verde_2,HIGH);
  	digitalWrite(semaforo_rojo_2,LOW);
	//Tiempo Espera
  	delay(tiempoEspera);
	
  	//Segunda Fase
	//Semaforo 1
	digitalWrite(semaforo_rojo_1,HIGH);
	//Semaforo 2
  	digitalWrite(semaforo_amarillo_2,HIGH);
  	digitalWrite(semaforo_verde_2,LOW);
	//Tiempo Espera
  	delay(tiempoEspera);
	
  	//Tercera Fase
	//Semaforo 1
	digitalWrite(semaforo_verde_1,HIGH);
	digitalWrite(semaforo_rojo_1,LOW);
  	//Semaforo 2
  	digitalWrite(semaforo_rojo_2,HIGH);
  	digitalWrite(semaforo_amarillo_2,LOW);
  	digitalWrite(semaforo_verde_2,LOW);
  	//Tiempo Espera
  	delay(tiempoEspera);
	
  	//Cuarta fase
	//Semaforo 1
 	digitalWrite(semaforo_amarillo_1,HIGH);
	digitalWrite(semaforo_rojo_1,LOW);
  	digitalWrite(semaforo_verde_1,LOW);
	//Semaforo 2
  	digitalWrite(semaforo_rojo_2,HIGH);
  	digitalWrite(semaforo_verde_2,LOW);
  	//Tiempo Espera
  	delay(tiempoEspera);
}