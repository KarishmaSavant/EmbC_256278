/**
 * @file EmbProjectMain.c
 * @author KarishmaSavant
 * @brief main file for EmbeddedActivity to call subsequent activities
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <util/delay.h>
#include <activity1.h>
#include <activity2.h>
/**
 * @brief main function to call sub activities
 * 
 * @return int 
 */
int main(void)
{
/**
 * @brief while true enter loop
 * 
 */

while(1)
{
    /**
     * @brief initialize variables and call activity 1
     * 
     */
    uint16_t temp=0;//initialize 10 bit resolution for 16
    activity1();//Detecting user; calling activity1
    /**
     * @brief Construct a new if object activity 1 output holds true
     * 
     */
    if(activity1()==1)
    {
        /**
         * @brief if Activity1 holds true call Activity2
         * 
         */
        temp=ReadADC(0);
        _delay_ms(200);
    }
}

return 0;
}
