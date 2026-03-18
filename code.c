#include <kipr/wombat.h>

int main()
{
    enable_servos();
    set_servo_position(1,1216); // this sets the servo position to 1216 while at servo 1  
    set_servo_position(1,649);
    set_servo_position(1,1216);
    set_servo_position(1,649);
    ao() // turns off all servos
}