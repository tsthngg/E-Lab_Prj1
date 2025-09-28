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
#include "demdaysao.h"
#include "thescream.h"
#include "vietnam.h"
#include "onepiece.h"
#include "zero2.h"
#include "shin.h"

TFT_eSPI tft = TFT_eSPI(); //Khởi tạo đối tượng tft

// const char* pics[] = {fullcolor, colorfulnight, demdaysao, thescream, vietnam};


void setup() {
  tft.init(); //Chạy màn hình
  tft.setRotation(0); //Đặt vị trí màn là dọc
  tft.setSwapBytes(true); //Đảo màu nếu lỗi màu
  tft.fillScreen(TFT_BLACK); //Fill màn hình với màu đen

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
  tft.pushImage(0, 0, 240, 240, logoelab);
  delay(5000);
  tft.fillScreen(TFT_BLACK);
  tft.drawString("Test Colors", 60, 120, 4);
  delay(1500);

  // for (int i = 0; i < sizeof(pics); i++){
  //   tft.pushImage(0, 0, 240, 240, pics[i]);
  //   delay(1000);
  //   tft.fillScreen(TFT_BLACK);
  // }

  tft.pushImage(0, 0, 240, 240, vietnam);
  delay(1500);
  tft.fillScreen(TFT_BLACK);
  tft.pushImage(0, 0, 240, 240, demdaysao);
  delay(1500);
  tft.fillScreen(TFT_BLACK);
  tft.pushImage(0, 0, 240, 240, thescream);
  delay(1500);
  tft.fillScreen(TFT_BLACK);
  tft.pushImage(0, 0, 240, 240, onepiece);
  delay(1500);
  tft.fillScreen(TFT_BLACK);
  tft.pushImage(0, 0, 240, 240, shin);
  delay(1500);
  tft.fillScreen(TFT_BLACK);
  tft.pushImage(0, 0, 240, 240, zero2);
  delay(2000);
  tft.fillScreen(TFT_BLACK);
  
}
