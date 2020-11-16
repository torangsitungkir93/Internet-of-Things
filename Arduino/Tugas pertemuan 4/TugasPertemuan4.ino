// Program Tugas Praktikum Iot

int merah= 5;
int kuning= 4;
int hijau= 3;


void setup()
{
  pinMode(merah, OUTPUT);
  pinMode(kuning, OUTPUT);
  pinMode(hijau, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  char input=Serial.read();
  while(Serial.available()==0){
    if(input=='a' ){       
      digitalWrite(merah, HIGH);
      digitalWrite(kuning, LOW);
      digitalWrite(hijau, LOW);
      Serial.println("Lampu Merah Menyala");       
    }
    else if(input=='b'){
      digitalWrite(merah, LOW);
      digitalWrite(kuning, HIGH);
      digitalWrite(hijau, LOW);
      Serial.println("Lampu Kuning Menyala");
    }
    else if(input=='c'){
      digitalWrite(merah, LOW);
      digitalWrite(kuning, LOW);
      digitalWrite(hijau, HIGH);
      Serial.println("Lampu Hijau Menyala");
    }
    delay(500);
    digitalWrite(merah, LOW);
    digitalWrite(kuning, LOW);
    digitalWrite(hijau, LOW);
    delay(500);
  }
}