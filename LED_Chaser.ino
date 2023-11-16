// This code is for a Led chaser, connect LEDs from Digital pin D2 - D11.
// Total LEDs 10.
// Code made by [ElectroVilla].
// Starting of Programme:
const int LED1 = 2, LED2 = 3, LED3 = 4, LED4 = 5, LED5 = 6, LED6 = 7, LED7 = 8, LED8 = 9, LED9 = 10, LED10 = 11;


int nums_of_LED[] = {
  LED1,
  LED2,
  LED3,
  LED4,
  LED5,
  LED6,
  LED7,
  LED8,
  LED9,
  LED10,
};

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);

  delay(2000);  // wait for 2 seconds
}

void loop() {
  //Start...
  //Pattern-1.
  for (int i = 0; i < nums_of_LED; i++) { pattern1(); }
  //pattern-2
  for (int i = 0; i < nums_of_LED; i++) { pattern2(); }
  delay(250);
}

const int time_period = 100;
void pattern1() {
  for (int i = 0; i < nums_of_LED; i++) {
    digitalWrite(nums_of_LED[i], HIGH);
    delay(time_period);
    digitalWrite(nums_of_LED[i], LOW);
  }
  delay(10);
}

void pattern2() {
  delay(10);
  for (int i = 0; i < nums_of_LED; i++) {
    digitalWrite(nums_of_LED[i], HIGH);
    delay(time_period);
  }
  delay(10);
  for (int i = 0; i < nums_of_LED; i++) {
    digitalWrite(nums_of_LED[i], LOW);
    delay(time_period);
  }
}
