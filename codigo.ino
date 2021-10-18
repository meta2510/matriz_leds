int led22 = 22;int led23 = 23;int led24 = 24;int led25 = 25;
int led26 = 26;int led27 = 27;int led28 = 28;int led29 = 29;
int led30 = 30;int led31 = 31;int led32 = 32;int led33 = 33;
int led34 = 34;int led35 = 35;int led36 = 36;int led37 = 37;
int led38 = 38;int led39 = 39;int led40 = 40;int led41 = 41;
int led42 = 42;int led43 = 43;int led44 = 44;int led45 = 45;
int tiempo=4000;

void setup() {
  pinMode(led22, OUTPUT);pinMode(led23, OUTPUT);pinMode(led24, OUTPUT);pinMode(led25, OUTPUT);
  pinMode(led26, OUTPUT);pinMode(led27, OUTPUT);pinMode(led28, OUTPUT);pinMode(led29, OUTPUT);
  pinMode(led30, OUTPUT);pinMode(led31, OUTPUT);pinMode(led32, OUTPUT);pinMode(led33, OUTPUT);
  pinMode(led34, OUTPUT);pinMode(led35, OUTPUT);pinMode(led36, OUTPUT);pinMode(led37, OUTPUT);
  pinMode(led38, OUTPUT);pinMode(led39, OUTPUT);pinMode(led40, OUTPUT);pinMode(led41, OUTPUT);
  pinMode(led42, OUTPUT);pinMode(led43, OUTPUT);pinMode(led44, OUTPUT);pinMode(led45, OUTPUT);
  
}

void letraA(){
  digitalWrite(led42, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led36, HIGH);
  delay(tiempo);
  digitalWrite(led42, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led36, LOW);
}

void letraB(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led23, HIGH);  
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led23, LOW);  
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);
}

void letraC(){
  digitalWrite(led29, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led41, HIGH);
  delay(tiempo);
  digitalWrite(led29, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led41, LOW);
}

void letraD(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led23, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led23, LOW);
}

void letraE(){
  digitalWrite(led25, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  delay(tiempo);
  digitalWrite(led25, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);
}

void letraF(){
  digitalWrite(led25, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led31, HIGH);
  delay(tiempo);
  digitalWrite(led25, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led31, LOW);
}

void letraG(){
  digitalWrite(led29, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led36, HIGH);
  delay(tiempo);
  digitalWrite(led29, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led36, LOW);
}

void letraH(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);
}

void letraI(){
  digitalWrite(led22, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led45, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led45, LOW);
}

void letraJ(){
  digitalWrite(led22, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
}

void letraK(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led25, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led25, LOW);
}

void letraL(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led41, HIGH);
  delay(tiempo);
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led41, HIGH);
}

void letraM(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);  
}

void letraN(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led25, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led25, LOW); 
}

void letraO(){
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led23, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led23, LOW);
}

void letraP(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led31, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led31, LOW);
}

void letraQ(){
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led23, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led23, LOW);
}

void letraR(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led45, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led45, LOW);
}

void letraS(){
  digitalWrite(led25, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led42, HIGH);
  delay(tiempo);
  digitalWrite(led25, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led42, LOW);
}

void letraT(){
  digitalWrite(led22, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led44, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led44, LOW);
}

void letraU(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led25, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led25, LOW);
}

void letraV(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led25, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led25, LOW);
}

void letraW(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led25, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led25, LOW);
}

void letraX(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led25, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led25, LOW); 
}

void letraY(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led25, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led25, LOW);
}

void letraZ(){
  digitalWrite(led26, HIGH);
  digitalWrite(led22, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led41, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led22, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led41, LOW); 
}

void numero0(){
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led23, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led23, LOW); 
}

void numero1(){
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led45, HIGH);
  delay(tiempo);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led45, LOW);
}

void numero2(){
  digitalWrite(led22, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led45, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led45, LOW);
}

void numero3(){
  digitalWrite(led22, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);
}

void numero4(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led29, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led29, LOW);
}

void numero5(){
  digitalWrite(led25, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led42, HIGH);
  delay(tiempo);
  digitalWrite(led25, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led42, LOW);
}

void numero6(){
  digitalWrite(led25, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led34, HIGH);
  delay(tiempo);
  digitalWrite(led25, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led34, LOW); 
}

void numero7(){
  digitalWrite(led26, HIGH);
  digitalWrite(led22, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led22, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);  
}

void numero8(){
  digitalWrite(led26, HIGH);
  digitalWrite(led22, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led22, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);  
}

void numero9(){
  digitalWrite(led30, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led22, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  delay(tiempo);
  digitalWrite(led30, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led22, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);   
}

void letraa(){
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  delay(tiempo);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led25, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);   
}

void letrab(){
  digitalWrite(led22, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led31, HIGH);
  delay(tiempo);
  digitalWrite(led22, LOW);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led31, LOW);  
}

void letrac(){
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led29, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led29, LOW);
}

void letrad(){
  digitalWrite(led25, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  delay(tiempo);
  digitalWrite(led25, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);
}

void letrae(){
  digitalWrite(led33, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  delay(tiempo);
  digitalWrite(led33, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW); 
}

void letraf(){
  digitalWrite(led28, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led35, HIGH);
  delay(tiempo);
  digitalWrite(led28, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led35, LOW); 
}

void letrag(){
  digitalWrite(led33, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led43, HIGH);
  delay(tiempo);
  digitalWrite(led33, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led43, LOW);
}

void letrah(){
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
}

void letrai(){
  digitalWrite(led23, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  delay(tiempo);
  digitalWrite(led23, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
}

void letraj(){
  digitalWrite(led38, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led25, HIGH);
  delay(tiempo);
  digitalWrite(led38, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led25, LOW);
}

void letrak(){
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led45, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led45, LOW);
}

void letral(){
  digitalWrite(led27, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led43, HIGH);
  delay(tiempo);
  digitalWrite(led27, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led43, LOW);
}

void letram(){
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  delay(tiempo);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
}

void letran(){
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
}

void letrao(){
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led28, HIGH);
  delay(tiempo);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led28, LOW);
}

void letrap(){
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led35, HIGH);
  delay(tiempo);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led35, LOW);
}

void letraq(){
  digitalWrite(led33, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led36, HIGH);
  delay(tiempo);
  digitalWrite(led33, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led36, LOW); 
}

void letrar(){
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led28, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led28, LOW); 
}

void letras(){
  digitalWrite(led27, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led42, HIGH);
  delay(tiempo);
  digitalWrite(led27, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led42, LOW);  
}

void letrat(){
  digitalWrite(led27, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led44, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led32, HIGH);
  delay(tiempo);
  digitalWrite(led27, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led44, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led32, LOW); 
}

void letrau(){
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led29, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led29, LOW); 
}

void letrav(){
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led29, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led40, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led29, LOW);  
}

void letraw(){
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led40, HIGH);
  digitalWrite(led33, HIGH);  
  delay(tiempo);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led40, LOW);  
  digitalWrite(led33, LOW);  
}

void letrax(){
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led31, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led41, HIGH);
  digitalWrite(led45, HIGH);
  digitalWrite(led42, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led33, HIGH);  
  digitalWrite(led39, HIGH);
  digitalWrite(led38, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led31, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led41, LOW);
  digitalWrite(led45, LOW);
  digitalWrite(led42, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led33, LOW);  
  digitalWrite(led39, LOW);
  digitalWrite(led38, LOW);  
}

void letray(){
  digitalWrite(led26, HIGH);
  digitalWrite(led30, HIGH);
  digitalWrite(led34, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led36, HIGH);
  digitalWrite(led37, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led39, HIGH);  
  digitalWrite(led40, HIGH);
  digitalWrite(led43, HIGH);
  digitalWrite(led44, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led30, LOW);
  digitalWrite(led34, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led36, LOW);
  digitalWrite(led37, LOW);
  digitalWrite(led33, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led39, LOW);  
  digitalWrite(led40, LOW);
  digitalWrite(led43, LOW);
  digitalWrite(led44, LOW);    
}

void letraz(){
  digitalWrite(led26, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led28, HIGH);
  digitalWrite(led29, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led35, HIGH);
  digitalWrite(led38, HIGH);
  digitalWrite(led39, HIGH);
  digitalWrite(led40, HIGH);  
  digitalWrite(led41, HIGH);
  delay(tiempo);
  digitalWrite(led26, LOW);
  digitalWrite(led27, LOW);
  digitalWrite(led28, LOW);
  digitalWrite(led29, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led35, LOW);
  digitalWrite(led38, LOW);
  digitalWrite(led39, LOW);
  digitalWrite(led40, LOW);  
  digitalWrite(led41, LOW);   
}

void Inicio(){
  digitalWrite(led22, LOW);digitalWrite(led23, LOW);digitalWrite(led24, LOW);digitalWrite(led25, LOW);
  digitalWrite(led26, LOW);digitalWrite(led27, LOW);digitalWrite(led28, LOW);digitalWrite(led29, LOW);
  digitalWrite(led30, LOW);digitalWrite(led31, LOW);digitalWrite(led32, LOW);digitalWrite(led33, LOW);
  digitalWrite(led34, LOW);digitalWrite(led35, LOW);digitalWrite(led36, LOW);digitalWrite(led37, LOW);
  digitalWrite(led38, LOW);digitalWrite(led39, LOW);digitalWrite(led40, LOW);digitalWrite(led41, LOW);
  digitalWrite(led42, LOW);digitalWrite(led43, LOW);digitalWrite(led44, LOW);digitalWrite(led45, LOW);
}

void loop() {

  letraA();
  letraB();
  letraF();
  numero3();
  numero5();
 

}
