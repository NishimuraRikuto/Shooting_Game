int cds1=0;
int cds2=1;
int cds3=2;
int cds4=3;
int cds5=4;
int cds6=5;
int cds7=6;
int cds8=7;
int buzzer=8;


void setup() {
  Serial.begin(9600);
  Serial.println("hello Arduino!");
  pinMode(cds1,INPUT);
  pinMode(cds2,INPUT);
  pinMode(cds3,INPUT);
  pinMode(cds4,INPUT);
  pinMode(cds5,INPUT);
  pinMode(cds6,INPUT);
  pinMode(cds7,INPUT);
  pinMode(cds8,INPUT);
  pinMode(buzzer,OUTPUT);
}

void cds_check_buzzer(int cds_num){
  if(digitalRead(cds_num)==1){
    digitalWrite(buzzer,HIGH);
    delay(1000);
    digitalWrite(buzzer,LOW);
  }
  Serial.print(digitalRead(cds_num));
}


void loop() {
  Serial.print(digitalRead(1));
  for(int i=0;i<9;i++){
    cds_check_buzzer(i);
  }
  

}
