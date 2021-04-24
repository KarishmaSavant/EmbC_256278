
/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>

int main(void)
{

DDRD&=~(1<<PD2);
DDRD&=~(1<<PD3);


PORTD|=(1<<PD2);
PORTD|=(1<<PD3);


DDRB|=(1<<PB1);


while(1)
{

if(!(PIND&(1<<PD2)) && !(PIND&(1<<PD3)))
PORTB|=(1<<PB1);


else
PORTB&=~(1<<PB1);

}

return 0;
}
