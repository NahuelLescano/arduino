// Semáforo coches y peatones sencillo en Arduino
int tiempoCoches = 5000;
int tiempoPeatones = 3000;
 
void setup(){
  // semaforo coches
  pinMode(10, OUTPUT);    // Rojo
  pinMode(9, OUTPUT);     // Amarillo
  pinMode(8, OUTPUT);     // Verde
  // semaforo peatones
  pinMode(3, OUTPUT);     // Rojo
  pinMode(2, OUTPUT);     // Verde
}

void loop() {
  digitalWrite(10, HIGH); // rojo encendido
  digitalWrite(2, HIGH);  // verde peatones encendido
  digitalWrite(3, LOW);   // rojo peatones apagado
  delay(tiempoCoches);

  digitalWrite(8, HIGH);  // verde encendido
  digitalWrite(10, LOW);  // rojo apagado
  digitalWrite(2, LOW);   // verde peatones apagado
  digitalWrite(3, HIGH);  // rojo peatones encendido
  delay(tiempoPeatones);

  digitalWrite(9, HIGH);  // amarillo encendido
  digitalWrite(8, LOW);   // verde apagado
  delay(1000);

  digitalWrite(9, LOW);   // amarillo apagado
}
