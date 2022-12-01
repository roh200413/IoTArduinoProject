const int sensorPin = A0;	// 광센서 값을 측정하기 위한 핀. A0에 연결

void setup()
{
  Serial.begin(9600);  //시리얼 통신 초기화
}

void loop()
{
  int readValue = analogRead (sensorPin); 	// 센서값 읽음
  Serial.println(readValue);
  delay (2000);
}
