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

TFT_eSPI tft = TFT_eSPI(); //Khởi tạo đối tượng tft

void setup() {
  tft.init(); //Chạy màn hình
  tft.setRotation(0); //Đặt vị trí màn là dọc
  tft.setSwapBytes(true); //Đảo màu nếu lỗi màu
  tft.fillScreen(TFT_BLACK); //Fill màn hình với màu đen

  //Đẩy hình ảnh lên trên màn hình
  tft.pushImage(0, 0, 240, 240, logoelab);

}

void loop() {
  
}