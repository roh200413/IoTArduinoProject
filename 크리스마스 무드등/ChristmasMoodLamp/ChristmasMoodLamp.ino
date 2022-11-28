int led1 = 2;
int led2 = 4;
int led3 = 6;
int led4 = 9;

int soundDigital = 7;

int threadSound = 620;
int count = 0;
int arraySize = 5;
int soundArray[5] = {};

void setup() {
  Serial.begin(9600);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  //pinMode(A0, OUTPUT);
  //pinMode(soundDigital, OUTPUT);
  for(int i = 0; i <arraySize; i ++){
    soundArray[i] = threadSound;
  }
}

void loop() {

  if(analogRead(A0) >= threadSound){
    soundCheck();

    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    delay(200);
    
    if(soundCheck())
      return;
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    delay(200);
    
    if(soundCheck())
      return;
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    delay(200);

    if(soundCheck())
      return;
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
    delay(200);

    if(soundCheck())
      return;
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led4,LOW);
    delay(200);
    
    if(soundCheck())
      return;
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    delay(200);

    if(soundCheck())
      return;
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(200);

    if(soundCheck())
      return;
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(200);

    if(soundCheck())
      return;
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(200);
    
    if(soundCheck())
      return;
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(200);

  }else{
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    delay(200);
  }
}

bool soundCheck(){
  soundArray[count] = analogRead(A0);
  count++;
  if(count == arraySize)
    count = 0;

  if( soundMean() <= threadSound)
    return true; 
  else
    return false;
}

int soundMean(){
  int mean = 0;
  for(int i = 0; i < arraySize; i ++){
    mean += soundArray[i];
  }
  Serial.println(mean/arraySize);
  return mean/arraySize;
}
