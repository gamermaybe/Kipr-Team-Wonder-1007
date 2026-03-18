#include <kipr/wombat.h>

int main()
{
    enable_servos(); // turns on all servos
    set_servo_position(1,1216); // this sets the servo position to 1216 while on servo 1  
    set_servo_position(1,649); // this sets the servo position to 649 while on servo 1
    set_servo_position(1,1216); // this sets the servo position to 1216 while on servo 1 
    set_servo_position(1,649); // this sets the servo position to 649 while on servo 1 
    ao() // turns off all servos
}