#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define SensorOut 8

int redFrequency =0;
int blueFrequency =0;
int greenFrequency =0;


void setup() {
  pinMode(S0,OUTPUT);
  pinMode(S1,OUTPUT);
  pinMode(S2,OUTPUT);
  pinMode(S3,OUTPUT);
  pinMode(SensorOut,INPUT);

  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);

  redFrequency = pulseIn(SensorOut, LOW);

  Serial.print("R= ");
  Serial.print(redFrequency);
  Serial.print("\n");
  delay(100);
  // put your main code here, to run repeatedly:

}
