#include <kipr/wombat.h>

int right=0;
int left=3;

int main(){
    push_balls();
}

void push_balls(){
    motor(right,100);
    motor(left,100);
}

