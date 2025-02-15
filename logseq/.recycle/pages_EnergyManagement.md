- Revision of Relevant Electrical and Electronics Concepts
	- Current = Charge/sec
	- Voltage = (potential energy)
- **Battery Management System**
	- ![image.png](../assets/image_1713268483404_0.png)
	- BMS is responsible for
		- `Cell monitoring` via info on charging and discharging in the form of State of Charge (*SoC*) & State of Health (*SoH*).
		- `Power management` via specifying SoC and SoH healthy limits. During charging, check permitted current on each cells, and During discharging, check if the voltage does not go too low.
		- `Safety` via monitoring Voltage, Temperature and Current data
		- `Diagnostics` stores issues/warnings/ ...
	- BMS cell balancing:
		- **Passive:** dissipate the excess amount of charge from cells with higher soc( in form of heat through resistance, ... ) and equalize with the cell with the least amount of SoC. waste of energy, wasted energy as heat requires cooling.
		- **Active:** Sharing excess energy to low energy cell, averaging the SoCs( via conduction/induction/capacitance). no waste of energy, hazard safer, but requires additional setup.
	- **SoC**
		- {{embed ((661e503f-21d7-4afb-8023-9cd1bf677fc1))}}
		- $$
		  % if expressed in percentage
		  \boxed{
		      \textbf{SoC} = \frac{\text{Charge available atm}}{\text{Charge available when full}} * 100\%
		  }
		  $$
		- Estimation Methods:
			- Voltage methods
			- Coulomb Counting methods
			- Hybrid methods.
			- Kalman Filters methods
			- Deep Learning methods
	- **SoH**
		-
- **Battery State of Charge** (SoC)
  id:: 661e503f-21d7-4afb-8023-9cd1bf677fc1
	- It refers to the level of charge of a battery relative to its capacity, usually expressed in percentage.
	- It is essential to know remaining charge to measure battery lifespan/ performance.
	- [@](https://www.batteryskills.com/battery-state-of-charge-understanding-the-basics/)