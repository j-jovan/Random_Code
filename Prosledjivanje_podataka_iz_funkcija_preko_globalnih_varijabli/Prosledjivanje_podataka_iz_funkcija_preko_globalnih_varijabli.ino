static int a;

void setup() {
  Serial.begin(115200);
}

void loop() {
  test1();
  test2();
}

void test1() {
  a++;
  delay(1000);
}

void test2() {
  Serial.println(a);
}
