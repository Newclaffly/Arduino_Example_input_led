int led1 = D0; // กำหนดขาใช้งาน
int led2 = D1; // กำหนดขาใช้งาน
int led3 = D2; // กำหนดขาใช้งาน
char key = '0' ; //ตัวแปรเก็บค่าที่คอมพิวเตอร์ส่งมา
void setup()
{
  pinMode(led1, OUTPUT); // กำหนดขาทำหน้าที่ให้ขา D0 เป็น OUTPUT
  pinMode(led2, OUTPUT); // กำหนดขาทำหน้าที่ให้ขา D1 เป็น OUTPUT
  pinMode(led3, OUTPUT); // กำหนดขาทำหน้าที่ให้ขา D2 เป็น OUTPUT
  Serial.begin(9600);
  Serial.println("My arduino");
  digitalWrite(led1, LOW); // LED 1 ดับ
  digitalWrite(led2, LOW);// LED 2 ดับ
  digitalWrite(led3, LOW);// LED 2 ดับ
}
void loop()
{
  if (Serial.available() > 0) { //ถ้าคอมพิวเตอร์ส่งข้อมูลมาใหจะทำใน if นี้
    key = Serial.read(); //นำค่าที่คอมพิวเตอร์ส่งมาเก็บในตัวแปร key
    Serial.print("key : ");
    Serial.println(key); //Arduino ส่งค่าในตัวแปร key เข้าคอมพิวเตอร์ Serial Monitor
  }
  if (key == '0') { //ถ้าตัวแปร key เป็น 0 ให้ทำในปีกกานี้
    digitalWrite(led1, LOW); // LED 1 ดับ
    digitalWrite(led2, LOW);// LED 2 ดับ
    digitalWrite(led3, LOW);// LED 3 ดับ
    Serial.println("LED1 LED2 LED3 OFF");
  }
  if (key == '1') { //ถ้าตัวแปร key เป็น 1 ให้ทำในปีกกานี้
    digitalWrite(led2, HIGH); // LED 1 ติดสว่าง
    Serial.println("LED1 ON");
  }
    if (key == '2') { //ถ้าตัวแปร key เป็น 1 ให้ทำในปีกกานี้
    digitalWrite(led3, HIGH); // LED 1 ติดสว่าง
    Serial.println("LED3 ON");
  }
}
