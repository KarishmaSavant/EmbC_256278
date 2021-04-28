/**
 * @file activity1.c
 * @author KarishmaSavant
 * @brief activity1-LED ON when seat is OCCUPIED and HEATER is ON
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <util/delay.h>
#include <activity1.h>
/**
 * @brief Define switch close variables
 * 
 */
#define switch_1_close !(PIND&(1<<PD2))
#define switch_2_close !(PIND&(1<<PD3))
/**
 * @brief pin/port assignment function
 * 
 */
void port_assignment()
{
    DDRD&=~(1<<PD2);
    DDRD&=~(1<<PD3);


    PORTD|=(1<<PD2);
    PORTD|=(1<<PD3);


    DDRB|=(1<<PB1);//output LED
}
/**
 * @brief activity1 function to turn on LED
 * 
 * @return int 0
 */
int activity1(void)
{

port_assignment();//Calling port assignments

while(1)
{
/**
 * @brief Construct a new if object
 * 
 * @param switch_1_close and @param switch_2_close
 */
if((switch_1_close) && (switch_2_close)) //if both switches CLOSE
{
    PORTB|=(1<<PB1);//LED ON
    _delay_ms(100);
}


/**
 * @brief if condition not met LED OFF
 * 
 */
else
{
    PORTB&=~(1<<PB1);//LED OFF
    _delay_ms(100);
}


}

return 0;
}
