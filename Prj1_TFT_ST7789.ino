/*-------------------------------*/
//           GND        - GND
//           VCC        - 3.3V
//           SCL (SCLK) - 18
//           SDA (MOSI) - 23
//           RES        - 04
//           DC         - 16
//           BLK        - 3.3V
/*-------------------------------*/

// Include các thư viện cần thiết
#include <TFT_eSPI.h>
#include "logoelab.h"
#include "sontungmtp.h"

TFT_eSPI tft = TFT_eSPI(); //Khởi tạo đối tượng tft

void setup() {
  tft.init(); //Chạy màn hình
  tft.setRotation(0); //Đặt vị trí màn là dọc
  tft.setSwapBytes(true); //Đảo màu nếu lỗi màu
  tft.fillScreen(TFT_BLACK); //Fill màn hình với màu đen

  Serial.begin(115200);
  Serial.println("Connected");
}

void loop() {
  unsigned long time = millis();

  //Loading screen
  while(time <= 10000) {
    tft.drawString("LOADING .", 60, 120, 4);
    delay(1000);
    tft.drawString("LOADING ..", 60, 120, 4);
    delay(1000);
    tft.drawString("LOADING ...", 60, 120, 4);
    delay(1000);
    tft.drawString("LOADING ....", 60, 120, 4);
    delay(1000);
    tft.fillScreen(TFT_BLACK);
    time = millis();
  }


  //Start
  Serial.println("Flop quá thì ghi tên anh vào");
  tft.pushImage(0, 0, 240, 240, logoelab);
  delay(5000);
  tft.fillScreen(TFT_BLACK);
  tft.drawString("Flop Qua", 70, 90, 4);
  delay(2000);
  tft.drawString("Thi Ghi Ten Anh Vao", 5, 120, 4);
  delay(2000);
  tft.drawString("-Ba tuoc Saint Tone Emtippy-", 60, 180, 1);
  delay(5000);
  tft.pushImage(0, 0, 240, 240, sontungmtp);
  delay(10000);
  tft.fillScreen(TFT_BLACK);
}
