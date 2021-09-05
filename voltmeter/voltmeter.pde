import processing.serial.*;

Serial port;
int data =0;
void setup() {
  size(400, 400);
  port = new Serial(this, Serial.list()[0], 9600);
}
void draw() {
   background(000);
  data = port.read();
  textSize(60);
  text("VoltMeter",55,100);
  textSize(40);
  text(data, 100, 250);
    textSize(60);
  text("V", 250, 250);
  
 
}
