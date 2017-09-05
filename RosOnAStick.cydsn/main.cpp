/* ========================================
 *
 * PSoC4 "RosOnAStick" demo code
 *
 * Copyright C. Harrison
 * BSD 2-clause license http://opensource.org/licenses/BSD-2-Clause
 *
 * ========================================
*/

#include <ros.h>
#include "examples/examples.h"

extern void init(void);

ros::NodeHandle  nh;

int main()
{
    init(); // start millisec clock

    nh.initNode();
    Blink::setup();
    HelloWorld::setup();
    //ADC::setup();
    Button::setup();
    ServoControl::setup();
    StepperControl::setup();
    Encoder::setup();
    //Capsense::setup();
    UpDownCount::setup();
	I2C_device::setup();

    for(;;)
    {
        Blink::loop();
        HelloWorld::loop();
        //ADC::loop();
        Button::loop();
        ServoControl::loop();
        StepperControl::loop();
        Encoder::loop();
        //Capsense::loop();
        UpDownCount::loop();
		I2C_device::loop();
        
        nh.spinOnce();
    }
}

/* [] END OF FILE */
