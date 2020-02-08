void printLocalTime()
{
  //time_t rawtime;
  time_t t = now(); 
  time (&t);
  timeinfo = localtime (&t);
  strftime (datetimebuffer,80,"%d %B %Y %H:%M:%S",timeinfo);
  strftime (hmbuffer,10,"%H:%M",timeinfo);
  Serial.println(datetimebuffer);
  Serial.println(hmbuffer);
}
