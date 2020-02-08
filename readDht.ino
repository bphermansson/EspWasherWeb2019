void readDht() {
    Serial.print("Read temp/humidity sensor: ");
    int chk = DHT11.read(DHT11PIN);
    switch (chk)
    {
      case DHTLIB_OK: 
        Serial.println("Read DHT - Success"); 
        temp = String((float)DHT11.temperature,1);
        hum = String((float)DHT11.humidity, 0);
        //Serial.println(temp); 
        //Serial.println(hum); 
        break;
      case DHTLIB_ERROR_CHECKSUM: 
        Serial.println("DHT Checksum error"); 
        break;
      case DHTLIB_ERROR_TIMEOUT: 
        Serial.println("DHT Time out error"); 
        break;
      default: 
        Serial.println("DHT Unknown error"); 
        break;
    }
}
