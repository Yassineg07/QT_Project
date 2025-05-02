# QT_Project

## Overview
This project is a Qt-based GUI application that interfaces with an ESP32 microcontroller via a serial connection. The application provides a user-friendly interface to control and monitor various functionalities such as a lamp, a fan (ventilator), and temperature measurement. It also includes obstacle detection functionality.

## Features
- **Lamp Control**: Turn a lamp on/off and adjust its brightness using a slider.
- **Fan Control**: Turn a fan on/off and adjust its speed using a slider.
- **Temperature Measurement**: Enable or disable temperature measurement.
- **Obstacle Detection**: Detect motion and display the status on the GUI.

## File Structure
- **mainwindow.h / mainwindow.cpp**: Contains the main GUI logic and event handling for user interactions.
- **arduino.h / arduino.cpp**: Handles the serial communication with the ESP32 microcontroller (named "arduino" for compatibility with Arduino IDE).
- **main.cpp**: Entry point of the application.
- **mainwindow.ui**: Defines the GUI layout using Qt Designer.
- **QT_Project.pro**: Qt project configuration file.

## How It Works
1. **Serial Communication**: The `Arduino` class establishes a serial connection with the ESP32 microcontroller on a specified COM port (default: COM5).
2. **GUI Interaction**: The `MainWindow` class connects GUI elements (buttons, sliders) to corresponding slots that send commands to the ESP32.
3. **Commands**: Specific commands are sent to the ESP32 to control devices:
   - `1`: Turn lamp on
   - `0`: Turn lamp off
   - `3`: Turn fan on
   - `2`: Turn fan off
   - `7`: Enable temperature measurement
   - `6`: Disable temperature measurement
   - `G[value]`: Set fan speed
   - `L[value]`: Set lamp brightness
4. **Feedback**: The ESP32 sends data back to the application, which updates the GUI labels accordingly.

## Prerequisites
- Qt framework installed on your system.
- An ESP32 microcontroller connected to the specified COM port.

## How to Build and Run
1. Open the project in Qt Creator.
2. Build the project using the provided `.pro` file.
3. Run the application.
4. Ensure the ESP32 is connected and configured to communicate on the specified COM port.

## Notes
- The default COM port is set to `COM5`. Update the `arduino_port_name` in `arduino.h` if your ESP32 is connected to a different port.
- Ensure the ESP32 sketch is programmed to handle the commands sent by this application.

## License
This project is open-source and available under the MIT License.

## Contact
For questions or support, please open an issue or contact [Yassineg07](mailto:gharbiyasine040@gmail.com).