#include "mbed.h"

namespace
{

DigitalOut led1(LED1);

}

#if !defined(UNIT_TEST)
int main() {
    while (true) {
        led1 = !led1;
        wait(0.5);
    }
}
#endif
