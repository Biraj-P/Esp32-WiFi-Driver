# ESP32 WiFi Driver Code

Welcome to the ESP32 WiFi Driver Code repository. This repository provides a robust implementation for configuring and managing WiFi AP and STA on the ESP32 using the ESP-IDF framework. Follow the instructions below to set up your development environment and start using the code.

## Prerequisites

Before you begin, ensure you have the following installed:

- **Visual Studio Code**
- **ESP-IDF (Espressif IoT Development Framework)**
- **ESP-IDF VS Code Extension**
- **Python 3.6+**

## Installing ESP-IDF Extension in VS Code

Follow these steps to install and configure the ESP-IDF extension in VS Code:

1. **Install Visual Studio Code**\
   Download and install [VS Code](https://code.visualstudio.com/).

2. **Install ESP-IDF VS Code Extension**

   - Open VS Code and go to **Extensions** (`Ctrl+Shift+X`)
   - Search for `ESP-IDF` and install the extension by Espressif.

3. **Setup ESP-IDF**

   - Open the **ESP-IDF: Configure ESP-IDF Extension** command (`Ctrl+Shift+P` > type `ESP-IDF`)
   - Follow the on-screen instructions to install ESP-IDF and required dependencies
     
     *My Settings*
     - EXPRESS installation
     - ESP-IDF vesrion: v5.2.1 (✔️ Github)
     - Install

4. **Verify Installation**

   - Open a new terminal in VS Code
   - Run: `idf.py --version`
   - If installed correctly, it will display the installed ESP-IDF version.

**Refer [EXPRESSIF](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/linux-macos-setup.html) Page for manual installation.

## Cloning and Setting Up the Project

1. Clone this repository:
   ```sh
   git clone https://github.com/Biraj-P/esp32-wifi-driver.git
   cd esp32-wifi-driver
   ```
2. Set up the ESP-IDF environment:
   ```sh
   . $HOME/esp/esp-idf/export.sh  # Linux/macOS
   %USERPROFILE%\esp\esp-idf\export.bat  # Windows
   ```
3. Configure the project:
   ```sh
   idf.py menuconfig
   ```
4. Build and flash the firmware:
   ```sh
   idf.py build flash monitor
   ```

## Usage

- Modify the `wifi_app.c` file to configure WiFi settings.
- Use `idf.py menuconfig` to update configuration parameters.
- Monitor logs in real-time using `idf.py monitor`.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contributions

Contributions are welcome! Feel free to submit a pull request or open an issue if you find any bugs or have feature requests.

## Contact

For any questions or discussions, reach out via [GitHub Issues](https://github.com/Biraj-P/esp32-wifi-driver/issues).

