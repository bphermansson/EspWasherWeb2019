void showOnLcd(String LocalIP, String totalTime, String temp, String hum, String realPower)
{
    String ipshort = String(LocalIP);
    ipshort.remove(0,9);
    lcd.setCursor(1,0);   // (Col, Row)
    lcd.print("IP: ");
    lcd.print(ipshort);
    
    lcd.setCursor(5,1);   // (Col, Row)
    lcd.print(totalTime);
    
    lcd.setCursor(1,2);   // (Col, Row)
    lcd.print("Temp: ");
    lcd.print(temp);
    
    lcd.setCursor(1,3);   // (Col, Row)
    lcd.print("Hum:  ");
    lcd.print(hum);
    
    lcd.setCursor(1,4);   // (Col, Row)
    lcd.print("Pwr:  ");
    lcd.print(realPower);
    
}
