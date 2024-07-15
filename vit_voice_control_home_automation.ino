int val;
int d1=3;
int d2=4;
int d3=5;
void setup() {
  // put your setup code here, to run once:
pinMode(d1,OUTPUT);
pinMode(d2,OUTPUT);
pinMode(d3,OUTPUT);
digitalWrite(d1,1);
digitalWrite(d2,1);
digitalWrite(d3,1);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  String val = Serial.readString();
 Serial.print(val);

 if (val=="*light on#")
{
 digitalWrite(d1,0);
}
else if (val=="*light off#")
{
 digitalWrite(d1,1);
}
else if (val=="*D2 on#") 
{
 digitalWrite(d2,0);
}
else if (val=="*D2 off#")
{
 digitalWrite(d2,1);
}
else if(val=="*D3 on#")
{
 digitalWrite(d3,0);

}
else if(val=="*D3 off#")
{
 digitalWrite(d3,1);
}
}
}
