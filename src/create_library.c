#include <kipr/botball.h>
#include "create_library.h"

void Sweepy_Thingie(int power, int servo) {
    create_drive_direct(70, 70);
    msleep(3000);
    create_drive_direct(70, -70);
    msleep(3000);
    set_servo_position(3, 1712);
    msleep(1000);
    create_drive_direct(-100, -100);
    msleep(2000);
    set_servo_position(3, 535);
    msleep(1000);
    create_drive_direct(-70, 70);
    msleep(4000);
    create_drive_direct(70, 70);
    msleep(3000);
};
    
// Moves the servo SLOWLY to its desired position.
void servo(int port, int desired_position) {
    int current_position; //Calling for 'current_position' to be a number; int = interger

    current_position = get_servo_position(port); 
    if (desired_position > current_position) {
        while (TRUE) {
            current_position = current_position + 15;
            if (current_position > desired_position) {
                break;
            }
            set_servo_position(port, current_position);
            msleep(50);
        }
        set_servo_position(port, desired_position);
        msleep(500);
    } else {
        while (TRUE) {
            current_position = current_position - 15;
            if (current_position < desired_position) {
                break;
            }
            set_servo_position(port, current_position);
            msleep(50);
        }
        set_servo_position(port, desired_position);
        msleep(500);
    }
}
    
    
    
    
    
    
    
    
    
    
    
    