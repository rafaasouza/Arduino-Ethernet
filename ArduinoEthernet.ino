/**
 Arduino Ethernet
 @author Rafael & Levy
*/

// As linhas abaixo usam as bibliotecas do módulo Ethernet
// Obs: Este módulo usa os pinos 4,10,11,12 e 13
#include <SPI.h>
#include <Ethernet.h>

// Gerar o MAC ADDRESS (http://ssl.crox.net/arduinomac)
byte mac[6] = { 0x90, 0xA2, 0xDA, 0x17, 0x20, 0x59 };

// Instaciar o servidor
EthernetServer server(80);  // 80 = porta http

void setup() {
  Serial.begin(9600);
  //A Linha abaixo configura a placa de rede como DHCP
  Ethernet.begin(mac);
  // A linha abaixo inicia o servidor
  server.begin();
  // Exibir as configurações da rede
  Serial.println("Arduino Ethernet Shield");
  Serial.print("IP: ");
  Serial.println(Ethernet.localIP());  //exibir o IP
  Serial.print("Máscara: ");
  Serial.println(Ethernet.subnetMask());  //exibir a máscara de rede
  Serial.print("Gateway:");
  Serial.println(Ethernet.gatewayIP()); //exibir o gateway da rede
  Serial.println("DNS: ");
  Serial.println(Ethernet.dnsServerIP());  //exibir o DNS
}

void loop() {
}
