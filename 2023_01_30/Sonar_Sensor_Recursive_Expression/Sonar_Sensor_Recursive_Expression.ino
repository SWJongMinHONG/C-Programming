#include<NewPing.h>
  float avg = 0;
  float old_avg = 0;
  int i =1;

  NewPing R_sensor(R_Sonar,R_Sonar,MaxDistance);
  float R_Sonar_Error = 0.0;
  float R_Sonar_distance = 0.0;
  float R_Sonar_distance_old = 0.0;

  NewPing L_sensor(L_Sonar,L_Sonar,MaxDistance);
  float L_Sonar_Error = 0.0;
  float L_Sonar_distance = 0.0;
  float L_Sonar_distance_old = 0.0;

  NewPing F_sensor(F_Sonar,F_Sonar,MaxDistance);
  float F_Sonar_Error = 0.0;
  float F_Sonar_distance = 0.0;
  float F_Sonar_distance_old = 0.0;


  void read_sonar_sensor(void){ //초음파센서 측정
    R_Sonar_distance = R_sensor.ping_cm()*10.0;
    L_Sonar_distance = L_sensor.ping_cm()*10.0;
    F_Sonar_distance = F_sensor.ping_cm()*10.0;
    if(R_Sonar_distance == 0){R_Sonar_distance = MaxDistance * 10.0;}
    if(L_Sonar_distance == 0){L_Sonar_distance = MaxDistance * 10.0;}
    if(F_Sonar_distance == 0){F_Sonar_distance = MaxDistance * 10.0;}
  }


  void expression_(int a, int k)
  {
    avg = ((k - 1) * old_avg + a) / k;
    old_avg = avg;
  }



void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
   read_sonar_sensor();
   expression(R_Sonar_distance,i);
   i++;
  Serial.print("Ping : ");
  Serial.print(avg);
  Serial.println("mm");
}
