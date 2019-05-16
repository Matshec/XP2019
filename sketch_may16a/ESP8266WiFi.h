
class ESP8266WiFiInterface {
public:
   virtual ~ESP8266WiFiInterface() {}
   virtual int begin() = 0;
}

class ESP8266WiFiMock : public ESP8266WiFivInterface {
public:
   virtual ~ESP8266WiFiMock() {}
   MOCK_METHOD0(lib_x_function, int());
}