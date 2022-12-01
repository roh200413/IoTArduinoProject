int led = 6; 	
int sensor = A0; //고감도 사운드 센서가 연결된 A0(아날로그 핀)을 sensor 변수에 저장
int val = 1;


void setup()
{
  Serial.begin(9600);  //시리얼 통신 초기화
  pinMode(led, OUTPUT); //led 출력으로 설정
  pinModed(sensor, INPUT); // sensor 입력으로 설정
}

Void loop()
{
  val = analogRead (sensor); 	// sensor의 아날로그 입력값 val 변수에 저장
  int light = map(val, 0, 1023, 0, 255);
  analogWrite (led, light);
}
