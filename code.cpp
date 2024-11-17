                                                             
#define sensorPin A0   // تعریف پین سنسور
float temperature; // تعریف متغیر دما
void setup() {
  Serial.begin(9600);  // ارسال داده ها به کامپیوتر با سرعت 9600 
}

void loop() {  
  int sensorValue=analogRead(sensorPin); // خواندن مقدار سنسور
  temperature = sensorValue * 0.48818225;  //  مقدار سنسور به دما تبدیل می شود
  Serial.print("Temp = ");  //ارسال داده به سریال 
  Serial.print(temperature); //چاپ  متغیر دما 
   Serial.println(" C"); // تبدیل به سانتی گراد

   delay(1000); //  1000  تاخیر میلی ثانیه ای

}
