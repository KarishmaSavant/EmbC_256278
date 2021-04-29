/**
 * @file activity1.h
 * @author KarishmaSavant
 * @brief activity1 header file of declarations and macros
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED
/**
 * @brief definition of macros
 * 
 */
#define heater_switch_close !(PIND&(1<<PD2))
#define seat_switch_close !(PIND&(1<<PD3))
#define LED (PORTB1)
#define heater (PORTD2)
#define seat (PORTD3)
/**
 * @brief function declarations
 * 
 */
void port_assignment();
int activity1();

#endif // ACTIVITY1_H_INCLUDED
