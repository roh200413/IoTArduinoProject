// setup 함수는 보드에 전원 공급 또는 리셋 버튼을 눌렀을 때 한 번 실행된다.
void setup()
{
   pinMode (1, OUTPUT); 	// 11번 디지털 핀을 출력으로 설정
}

// loop 함수는 전원이 켜져 있는 동안 무한 반복해서 실행된다.
void loop()
{
   digitalWrite (1, HIGH); 	// 11번 핀에 HIGH 설정. LED 켜짐
   delay (1000); 	// 1000 ms(1초)동안 대기(시간 지연)
   digitalWrite (1, LOW); 	// 11번 핀에 LOW 설정. LED 꺼짐
   delay (1000); 	// 1000 ms(1초)동안 대기(시간 지연)
}
