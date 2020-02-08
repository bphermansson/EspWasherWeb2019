double readPower(){
    current = power.getCurrent(SAMPLES_X_MEASUREMENT);
    realPower = current * MAINS_VOLTAGE;
    //Serial.println(realPower); 
    return realPower;
}
