#include <xc.h>
#include "microoven.h"
#include "clcd.h"

void power_on_screen(void){
    for(unsigned int i = 0;i<16;i++){
        clcd_putch(BAR,LINE1(1));
    }
}