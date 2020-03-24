
// the setup function runs once when you press reset or power the board
  boolean door_history = 0;
  int time_counter = 0;
  boolean door_closed = 0;
  String string = "string";


void setup() {
  // open a serial connection

  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {


  
  
  //making sure it doesn't start when plugged in if door happens to be shut

    
  if (digitalRead(4) == LOW) {
  Serial.println("LOW");
  delay(1000);
       if (digitalRead(4) == LOW){
         Serial.println("LOW");
         delay(1000);
        if (digitalRead(4) == LOW){
        Serial.println("Final LOW");
        door_history = 1;
        Serial.println(door_history);}
        
        else { delay(500);
          Serial.println("door closed 2");
          }}}

             else { delay(500);
          Serial.println("door closed 1");
          }} while (door_history < 1);

//else {
//        Serial.println("door closed");
//          door_history = 0;}}
          

 

     
    
  
 

 //Checks 3 readings consecutively (as long as door has been cycled)
if (door_history = 1){
if (digitalRead(4) == HIGH){ 
  
delay(2000);
  if (digitalRead(4) == HIGH){
     delay(2000);
     if (digitalRead(4) == HIGH){
  
  digitalWrite(2, HIGH);
    Serial.println("turned on");

  digitalWrite(LED_BUILTIN, LOW);
  door_closed = 1;
  
  
  //As long as door is shut and 20 minutes has not passed keep looping
  while (digitalRead(4) == HIGH){
  if (time_counter >= 12000){
  digitalWrite(2, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  door_history = 1;
  Serial.println("We made it to 20");
     return;}
  //12000*100 miliseconds is 20 minutes
   delay(100);
  time_counter = time_counter + 1;
  string = String(time_counter/10);
  Serial.println("twas another HIGH, and we made it to");
  Serial.println(string);
  Serial.println("seconds");}
  Serial.println("A LOW broke the streak");


  while (digitalRead(4) == HIGH){
  if (time_counter >= 12000){
  digitalWrite(2, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  door_history = 1;
  Serial.println("We made it to 20");
     return;}
  //12000*100 miliseconds is 20 minutes
   delay(100);
  time_counter = time_counter + 1;
  string = String(time_counter/10);
  Serial.println("twas another HIGH, and we made it to");
  Serial.println(string);
  Serial.println("seconds");}
  Serial.println("A LOW broke the streak");

  


  while (digitalRead(4) == HIGH){
  if (time_counter >= 12000){
  digitalWrite(2, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  door_history = 1;
  Serial.println("We made it to 20");
     return;}
  //12000*100 miliseconds is 20 minutes
   delay(1000);
  time_counter = time_counter + 1;
  string = String(time_counter/10);
  Serial.println("twas another HIGH, and we made it to");
  Serial.println(string);
  Serial.println("seconds");}
  
  Serial.println("A LOW broke the streak");

  //Shut off if door is opened
  digitalWrite(2, LOW);
  Serial.println("door opened SHUT OFF");

  digitalWrite(LED_BUILTIN, HIGH);

  }}}}}
  
  

  
  
  
