unsigned long timeNow = 0;
unsigned long timeLast = 0;



int startingHour = 0;

int seconds = 0;
int minutes = 0;
int hours = startingHour;
int days = 0;



int dailyErrorFast = 0;
int dailyErrorBehind = 0;
int correctedToday = 1;

void setup() {
  Serial.begin(9600);
}

void loop() {

  timeNow = millis() / 1000;
  seconds = timeNow - timeLast;



  if (seconds == 60) {
    timeLast = timeNow;
    minutes = minutes + 1;
  }

  if (minutes == 60) {
    minutes = 0;
    hours = hours + 1;
  }

  if (hours == 24) {
    hours = 0;
    days = days + 1;
  }

  //if 24 hours have passed , add one day

  if (hours == (24 - startingHour) && correctedToday == 0) {
    delay(dailyErrorFast * 1000);
    seconds = seconds + dailyErrorBehind;
    correctedToday = 1;
  }
  if (hours == 24 - startingHour + 2) {
    correctedToday = 0;
  }
  Serial.print("The time is:  ");
  Serial.print(days);
  Serial.print(":");
  Serial.print(hours);
  Serial.print(":");
  Serial.print(minutes);
  Serial.print(":");
  Serial.println(seconds);
}
