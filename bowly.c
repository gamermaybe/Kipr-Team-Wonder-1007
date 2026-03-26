#include <kipr/wombat.h>

int right=0;
int left=3;

void push_balls(){
    motor(right,96);
    motor(left,100);
    msleep(4000);
}

void go_backwards(){
    (right,-100);
    (left, -100);
    msleep(500);
}

int main(){
    push_balls();
}



