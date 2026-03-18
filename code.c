#include <kipr/wombat.h>

int right= 3;
int left= 0; 

int main() {
   
}

int claw_open_and_close() {
    
}

clear_motor_piosition_counter(right);

while (get_motor_position_counter(right) < 3000)
{
  motor(right,100);
  motor(left,100);
}


int servo_extend()
{
    enable_servos(); // turns on all servos
    set_servo_position(1,1216); // this sets the servo position to 1216 while on servo 1  
    set_servo_position(1,649); // this sets the servo position to 649 while on servo 1
    set_servo_position(1,1216);  
    set_servo_position(1,649); 
    ao(); // turns off all servos
}

