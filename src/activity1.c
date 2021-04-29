/**
 * @file activity1.c
 * @author KarishmaSavant
 * @brief LED on when Heater on and Seat is Occupied
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#include <activity1.h>

/**
 * @brief port assignments
 * 
 */
void port_assignment()
{
    DDRD&=~(1<<heater);
    DDRD&=~(1<<seat);


    PORTD|=(1<<heater);
    PORTD|=(1<<seat);


    DDRB|=(1<<LED);//output LED
}
/**
 * @brief Initiating Activity1
 * 
 * @return int 
 */
int activity1(void)
{
/**
 * @brief Construct a new port assignment object
 * 
 */
port_assignment();//Calling port assignments
/**
 * @brief while true enter loop
 * 
 */
while(1)
{
/**
 * @brief Construct a new if object and turn on LED if
 * 
 * @param heater_switch_close and @param seat_switch_close
 */
if((heater_switch_close) && (seat_switch_close)) //if both switches CLOSE
{
    PORTB|=(1<<LED);//LED ON
    _delay_ms(100);
}

/**
 * @brief if condition not met LED is OFF
 * 
 */

else
{
    PORTB&=~(1<<LED);//LED OFF
    _delay_ms(100);
}


}

return 0;
}
