
/**
 * @file EmbProjectMain.c
 * @author KarishmaSavant
 * @brief Calling sub-activities while true
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
/**
 * @brief main fuction to call sub-activities
 * 
 * @return int 0
 */
int main(void)
{

/**
 * @brief while true
 * 
 */
while(1)
{
    activity1();
}

return 0;
}
