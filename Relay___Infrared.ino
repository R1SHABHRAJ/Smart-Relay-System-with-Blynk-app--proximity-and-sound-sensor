#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
char auth[] = "******************************";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "********";
char pass[] = "********";

#define IR D5 //D5
#define SOUND D6
#define relay D4  
#define relayPin D7  //D4
bool ir;
int val = 0; //light value for pin D6
int lightON = 0; //light status
int heard = 0; //sound heard status

void setup()
{
  // Debug console
  Serial.begin(9600);
  pinMode(IR, INPUT);
  pinMode(SOUND, INPUT_PULLUP);
  pinMode(relayPin, OUTPUT);
  pinMode(relay, OUTPUT);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  //for infrared modue
  ir = digitalRead(IR);
  if(ir == 1){
    digitalWrite(relay, LOW);
    Serial.print("IR is Working");
    }
  else{
    digitalWrite(relay, HIGH);
    }
  delay(100);
  //Sound sensor module
  val = digitalRead(SOUND);
  if(val == HIGH && lightON == LOW){

    heard = 1-heard;
    delay(100);
  }    
   lightON = val;

      if(heard == HIGH){
        Serial.println("Light ON");
        digitalWrite(relayPin, LOW); 
       
      }else{
        Serial.println("Light OFF");
        digitalWrite(relayPin, HIGH);
   
      }   
  Blynk.run(); //Blynk app run

  }
