# EmbC_256278
|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/KarishmaSavant/EmbC_256278/actions/workflows/Compile.yml/badge.svg)](https://github.com/KarishmaSavant/EmbC_256278/actions/workflows/Compile.yml)|[![Cppcheck](https://github.com/KarishmaSavant/EmbC_256278/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/KarishmaSavant/EmbC_256278/actions/workflows/CodeQuality.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/f862c98b89d9412795b8f90a0105cc7d)](https://www.codacy.com/gh/KarishmaSavant/EmbC_256278/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=KarishmaSavant/EmbC_256278&amp;utm_campaign=Badge_Grade)|
## Contributors 

SF ID. |  Name   |     
-------|---------|
`256278` | Karishma Vivek Savant  |

# Activity 1: LED ON when both Driver's Seat is Occupied and Heater is turned ON
## CASE: LED OFF 
### Case 1: Driver's seat is OCCUPIED, Heater is OFF
![OFF](simulation/Capture2.png)
### Case 2: Driver's seat is UNOCCUPIED, Heater is ON
![OFF](simulation/Capture1.png)
### Case 3: Driver's seat is UNOCCUPIED, Heater is OFF
![OFF](simulation/Capture4.png)
## CASE: LED ON 
### Case 1: Driver's seat is OCCUPIED, Heater is ON
![ON](simulation/Capture3.png)

# Activity 2: ADC Reading of Temperature Sensor Using Potentiometer
## CASE: ADC Reader OFF 
### Case 1: When Activity1 Conditions are False
![OFF](simulation/Act2_1.png)
## CASE: ADC Reader ON 
### Case 1: When Activity1 Conditions are True
![OFF](simulation/Act2_2.png)

# Activity 3: PWM Output according to ADC Reading based on Temperature Table
## CASE: PWM Reader OFF 
### Case 1: When Activity1 Conditions are False
![OFF](simulation/Act3_1.png)
## CASE: PWM Reader ON 
### Case 1: When Activity1 Conditions are True
![OFF](simulation/Act3_2.png)

# Activity 4: USART value of Temperature over protocol according to Temperature Table
