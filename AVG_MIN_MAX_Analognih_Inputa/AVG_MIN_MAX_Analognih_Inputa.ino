#define input1 34
#define input2 35

int x;
int y;
float zbirX = 0;
float counterX = 0;
float zbirY = 0;
float counterY = 0;
float najviseX = 0;     //Najmanji ocekivani broj za input X
float najnizeX = 1000;  //Najveci ocekivani broj za input X
float najviseY = 0;     //Najmanji ocekivani broj za input Y
float najnizeY = 1000;  //Najveci ocekivani broj za input Y

void setup() {
  Serial.begin(115200);
  int brojProvera = 100;
  for (int i = 0; i < brojProvera; i++)
  {
    x = analogRead(InPin1);
    y = analogRead(InPin2);
    Serial.print("X je: ");
    Serial.println(x);
    Serial.print("Y je: ");
    Serial.println (y);

    zbirX += x;
    zbirY += y;
    counterX, counterY ++;

    if (x > najviseX)
      najviseX = x;

    if (y > najviseY)
      najviseY = y;

    if (x < najnizeX)
      najnizeX = x;

    if (y < najnizeY)
      najnizeY = y;
    delay(1000);
  }

  Serial.print("Zbir X ");
  Serial.println(zbirX);
  Serial.print("Counter X ");
  Serial.println(counterX);
  Serial.print("Zbir Y ");
  Serial.println(zbirY);
  Serial.print("Counter Y ");
  Serial.println(counterY);
  Serial.println("-----------------");
  Serial.print("Najvise X ");
  Serial.println(najviseX);
  Serial.print("Najnize X ");
  Serial.println(najnizeX);
  Serial.print("Najnize X ");
  Serial.println(najviseY);
  Serial.print("Najnize Y ");
  Serial.println(najnizeY);
}

void loop() {
}
