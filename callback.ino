void callback(char* topic, byte* payload, unsigned int length) 
{
  String stringPayload = "";
  const int offset = 0;   // Central European Time
  //StaticJsonDocument<200> root;  // Arduinojson 6

  Serial.print("Message arrived with topic ");
  Serial.println(topic);
  Serial.print("Message: ");
  
  for (int i=0;i<length;i++) {
    Serial.print((char)payload[i]);
    stringPayload += (char)payload[i];
  }
  Serial.println();

  // Timestamp
  if (strcmp(topic,MQTT_TIME_TOPIC)==0) {
    
    stringPayload = stringPayload.substring(0,10);  // Convert from timestamp in millis to ts i seconds
    //Serial.print("stringPayload: ");   
    t = stringPayload.toInt();  
    setTime(t); 
   // setTime(1357041600);
    Serial.print("Set time to: "); 
    Serial.println(t);
    adjustTime(offset * SECS_PER_HOUR);
    time_t tnow = now(); 
    Serial.println(tnow);
    Serial.print("Got time via Mqtt: ");
    
    if (hour()<10) {
      shour = "0";     // Add trailing zero
      shour.concat(String(hour()));
    }  
    else {
      shour = String(hour());
    }
    if (minute()<10) {
      sminute = "0";     // Add trailing zero
      sminute.concat(String(minute()));
      
    }
    else {
      sminute = String(minute());
    }
    totalTime = shour + ":" + sminute;  
    Serial.println(totalTime);
    
    //    display.showNumberDecEx(totalTime.toInt(), 0b01000000, true, 4, 0);

  }
}
