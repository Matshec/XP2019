#include "wifiCon.h"

class WifiConnector{

public:
bool connectWifi(const char* ssid){
    const int tryies = 15;
    if(ssid == NULL || strcmp(ssid, "") == 0){
        return false;
    }
    WiFi.begin(ssid, "");
    for(int i=0; i<tryies; i++){
        if(WiFi.status() == WL_CONNECTED){
            return true;
        }
    }
    return false;
   
}
};
