# A4 Vending Machine using Arduino UNO

This project showcases the design and implementation of an A4 vending machine using Arduino UNO, L298N motor drivers, and infrared sensors. The vending machine is capable of dispensing A4-sized paper sheets upon user request. This README file provides an overview of the project and instructions for setting up and using the vending machine.

## Components

To build and operate the A4 vending machine, you will need the following components:

- Arduino UNO board
- L298N motor drivers
- Infrared sensors
- Stepper motor or DC motor
- Power supply
- A4 paper sheets
- Breadboard and jumper wires

## Circuit Diagram

![circuito_PjtV29iqFx](https://github.com/informsarfu/A4-Vending-Machine-using-L298N-Drivers/assets/78136256/7aa62c71-ff31-469f-98ab-7452c7b1de96)


The circuit diagram illustrates the connection setup between the Arduino UNO, L298N motor drivers, and infrared sensors. Please refer to the diagram when connecting the components.


![image](https://github.com/informsarfu/A4-Vending-Machine-using-L298N-Drivers/assets/78136256/606759d6-c0cf-4ec5-9869-d69e9c30f86e)


## Installation

To set up the A4 vending machine, follow these steps:

1. Clone the repository to your local machine using the following command:

   ```
   git clone https://github.com/informsarfu/A4-Vending-Machine-using-L298N-Drivers.git
   ```

   Alternatively, you can download the repository as a ZIP file and extract it.

2. Open the Arduino IDE on your computer.

3. Connect the Arduino UNO board to your computer via USB.

4. Open the `A4_Vending_machine.ino` file located in the `src` directory of the cloned repository.

5. Click on the Upload button in the Arduino IDE to upload the code to the Arduino UNO board.

## Usage

1. Connect the L298N motor drivers to the appropriate motor (stepper or DC motor) that will dispense the A4 paper sheets.

2. Connect the infrared sensors to the Arduino UNO board, ensuring proper wiring and connection.

3. Power up the Arduino UNO board using the power supply.

4. Load the A4 paper sheets into the vending machine.

5. Start the vending machine by turning on the power.

6. The machine is now ready to receive user requests.

7. When a user triggers the infrared sensor (coin sensor) by passing a coin in front of it, the motor will activate and dispense an A4 paper sheet.

8. Repeat the process for subsequent paper sheet requests.

## Contributing

Contributions to this project are welcome! If you have any improvements, bug fixes, or new features to propose, please open an issue or submit a pull request on the GitHub repository.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use, modify, and distribute the code as per the terms of the license.

## Acknowledgments

- The project relies on the Arduino platform for hardware programming capabilities.
- We would like to thank the open-source community for their valuable contributions.

## Contact

If you have any questions or inquiries, please feel free to contact the project maintainer:

- Sarfraz Nawaz
- Email: informsarfu@gmail.com
- GitHub: https://github.com/informsarfu
