const char* mensajes[] = {
  "Hola",
  "Mundo",
  "¿Como",
  "estas",
  "mi",
  "estimado",
  "amigo?"
};

int totalMensajes = 7;
int contador = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (contador < totalMensajes) {
    Serial.println(mensajes[contador]);
    contador++;
    delay(1000);
  }
  // Después de enviar los 7 mensajes, no hace nada
}
