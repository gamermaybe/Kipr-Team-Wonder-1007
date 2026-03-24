#include <kipr/wombat.h>

int right= 3;
int left= 0; 

int main(){
  while (get_motor_position_counter(right) < 3000)
    {
      motor(right,100);
      motor(left,100);
      return 0;
    }
    claw_open_and_close();
    
}
  



// 2047 is the max the claw can close
// 1320 is the max the claw can open (recommended
 
void claw_open_and_close() {
   enable_servos();
   set_servo_position(3,1320);
   msleep(500);
   set_servo_position(3,2047);
   msleep(500);  

}


// This was for the mini video (in the google slides

//void servo_extend()
//{
    //enable_servos(); // turns on all servos
    //set_servo_position(1,1216); // this sets the servo position to 1216 while on servo 1  
    //msleep(500); // sets how long it does 
    //set_servo_position(1,649); // this sets the servo position to 649 while on servo 1
    //msleep(500); // sets how long it does
    //set_servo_position(1,1216);  
    //msleep(500); // sets how long it does
    //set_servo_position(1,649); 
    //msleep(500); // sets how long it does
    //ao(); // turns off all servos
//}