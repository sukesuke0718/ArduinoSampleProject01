int LED_SOCKET  = 10;
int INTERVAL  = 1000;     // 1秒

// 初めに実行される関数
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_SOCKET, OUTPUT);

}

// 繰り返し実行される関数
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_SOCKET, HIGH);
  
  delay(INTERVAL);
  digitalWrite(LED_SOCKET, LOW);

  delay(INTERVAL);
}
