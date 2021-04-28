

#include <avr/io.h>
#include <util/delay.h>
#include <activity1.h>

#define switch_1_close !(PIND&(1<<PD2))
#define switch_2_close !(PIND&(1<<PD3))
void port_assignment()
{
    DDRD&=~(1<<PD2);
    DDRD&=~(1<<PD3);


    PORTD|=(1<<PD2);
    PORTD|=(1<<PD3);


    DDRB|=(1<<PB1);//output LED
}

int activity1(void)
{

port_assignment();//Calling port assignments

while(1)
{

if((switch_1_close) && (switch_2_close)) //if both switches CLOSE
{
    PORTB|=(1<<PB1);//LED ON
    _delay_ms(100);
}



else
{
    PORTB&=~(1<<PB1);//LED OFF
    _delay_ms(100);
}


}

return 0;
}
