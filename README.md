# Switch-Controlled LED System using PIC24FJ16GA002

## Overview
This project implements a **switch-controlled LED system** using the **PIC24FJ16GA002** microcontroller. The system operates as follows:

- **When the switch is ON:**
  - The **Red LED** stays **ON**.
  - The **Green LED** blinks **every 2 seconds**.

- **When the switch is OFF:**
  - Only the **White LED** is **ON**.

The microcontroller manages the LED behavior based on the switch's state.

---

## Components Used
- **Microcontroller**: PIC24FJ16GA002  
- **LEDs**: Red, Green, and White  
- **Resistors**: 200Ω (one for each LED)  
- **Switch**: SPST (Single Pole Single Throw)  
- **Pull-down Resistor**: 10kΩ (for switch stabilization)  
- **Power Supply**: 5V  

---

## 📂 Project Structure
- 📁 Circuit diagram/ - Contains the circuit simulation image (.png)
- 📁 hex/ - Includes the compiled main.hex file 
- 📁 simulation/ - Proteus simulation
- 📁 src/ - Contains the source code (.c and .h files)


---

## How It Works
1. The **switch** determines the LED operation mode.
2. If the switch is **ON**:
   - The **Red LED** turns **ON**.
   - The **Green LED** blinks **every 2 seconds**.
3. If the switch is **OFF**:
   - The **White LED** turns **ON**, and the other LEDs remain **OFF**.

---

## Simulation & Testing
- The project can be tested in **Proteus** before flashing the HEX file onto the microcontroller.
- Timing for the **Green LED blinking** can be adjusted in the source code.

---

## Required Tools
- **MPLAB X IDE** (for coding & compiling)
- **Proteus** (for circuit simulation)

---

## Authors
This project was designed and implemented by **Abdulbasit Hamid**.

---

## License
This project is open-source. Feel free to use and modify it.

---


