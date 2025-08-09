
// this is a 7 segment display pinout to arduino
int dp = 10;
int a = 3;
int b = 4;
int c = 5;
int d = 6;
int e = 7;
int f = 8; 
int g = 9;

void setup() {
  // initialize digital pins 3-10 as an output.
  pinMode(dp, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}
void num0(){
  //digitalWrite(dp, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  //digitalWrite(g, HIGH);
}
void num1(){
  //digitalWrite(dp, HIGH);
  //digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  //digitalWrite(d, HIGH);
  //digitalWrite(e, HIGH);
  //digitalWrite(f, HIGH);
  //digitalWrite(g, HIGH);
}

void num2(){
  //digitalWrite(dp, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  //digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  //digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void num3(){
  //digitalWrite(dp, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  //digitalWrite(e, HIGH);
  //digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void num4(){
  //digitalWrite(dp, HIGH);
  //digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  //digitalWrite(d, HIGH);
  //digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
  
 void num5(){
  //digitalWrite(dp, HIGH);
  digitalWrite(a, HIGH);
  //digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  //digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

}

void num6(){
  //digitalWrite(dp, HIGH);
  digitalWrite(a, HIGH);
  //digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void num7(){
  //digitalWrite(dp, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  //digitalWrite(d, HIGH);
  //digitalWrite(e, HIGH);
  //digitalWrite(f, HIGH);
  //digitalWrite(g, HIGH);
 
}

void num8(){
  //digitalWrite(dp, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void num9(){
  //digitalWrite(dp, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  //digitalWrite(d, HIGH);
  //digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
 
}

void num10(){
  //digitalWrite(dp, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  //digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void num11(){
  //digitalWrite(dp, HIGH);
 // digitalWrite(a, HIGH);
  //digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void num12(){
  //digitalWrite(dp, HIGH);
  //digitalWrite(a, HIGH);
  //digitalWrite(b, HIGH);
  //digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  //digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void num13(){
  //digitalWrite(dp, HIGH);
  //digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  //digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void num14(){
  //digitalWrite(dp, HIGH);
  digitalWrite(a, HIGH);
  //digitalWrite(b, HIGH);
  //digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void num15(){
  //digitalWrite(dp, HIGH);
  digitalWrite(a, HIGH);
  //digitalWrite(b, HIGH);
  //digitalWrite(c, HIGH);
 // digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void clear(){
  digitalWrite(dp, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

// the loop function runs over and over again forever
void loop() {
  num0();
  delay(500);
  clear();
  delay(500);  
  num1();
  delay(500);
  clear();
  delay(500);  
  num2();
  delay(500);
  clear();
  delay(500);  
  num3();
  delay(500);
  clear();
  delay(500); 
  num4();
  delay(500);
  clear();
  delay(500);  
  num5();
  delay(500);
  clear();
  delay(500);   
  num6();
  delay(500);
  clear();
  delay(500);
  num7();
  delay(500);
  clear();
  delay(500);  
  num8();
  delay(500);
  clear();
  delay(500); 
  num9();
  delay(500);
  clear();
  delay(500); 
  num10();
  delay(500);
  clear();
  delay(500);  
  num11();
  delay(500);
  clear();
  delay(500);   
  num12();
  delay(500);
  clear();
  delay(500);
  num13();
  delay(500);
  clear();
  delay(500);  
  num14();
  delay(500);
  clear();
  delay(500);  
  num15();
  delay(500);
  clear();
  delay(500); 
                 
}
