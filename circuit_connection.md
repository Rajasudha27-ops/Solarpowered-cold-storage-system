# Circuit Connections
## Solar Powered Cold Storage System

### Components
1. Arduino Nano
2. Solar Panel
3. Temperature Sensor
4. Cooling Fan
5. Pendant Box
6. Connecting Wires

### 1. Temperature Sensor Connection

| Sensor Pin | Arduino Nano |
|---|---|
| VCC | 5V |
| OUT | A0 |
| GND | GND |

Note: These connections are for an analog
3-pin temperature sensor. Actual pinout depends
on the sensor model.

### 2. Cooling Fan Connection

The cooling fan is connected to a suitable
external power supply through a properly
rated switching circuit.

Do not connect the fan directly to an Arduino
GPIO pin.

### 3. Solar Panel Connection

Solar Panel
     |
Solar Charge Controller
     |
Battery / Regulated Power Supply
     |
Arduino Nano and Cooling System

### 4. Working

1. Solar panel generates electrical energy.
2. Arduino Nano receives regulated power.
3. Temperature sensor monitors the temperature
   inside the pendant box.
4. Arduino reads the temperature values.
5. Cooling fan circulates air inside the box.

### Conclusion

The prototype demonstrates solar-powered
temperature monitoring and air circulation
using Arduino Nano.
