# Zephyr-ST (Work in Progress)
This repository contains an exemplary CMSIS solution file that can be used to build two Zephyr basic examples on ST development boards. It can be easily adapted to other boards or examples. It uses Zephyr's `west` build system to create the executable file for an application and the [Arm CMSIS Debugger](https://marketplace.visualstudio.com/items?itemName=Arm.vscode-cmsis-debugger) to flash download and run the image on the target hardware.

## Quick start

1. Make sure that your host OS is up-to-date.
2. Install the following dependencies using your favorite package manager:
    - Cmake (min. version 3.20.5)
    - Python (min. version 3.10)
3. Clone this repository onto your machine.
4. Install Zephyr on your machine (refer to [Linux and macOS](#linux-and-macos)/[Windows](#windows)).
5. [Work with the example](#work-with-the-example)

## Zephyr installation

This chapter contains installation instructions for [Linux and macOS](#linux-and-macos) and [Windows](#windows)).

### Linux and macOS

- In your home directory, create a `zephyrproject` directory and change into it:

  ```sh
  mkdir zephyrproject
  cd zephyrproject
  ```

- Create a new virtual environment:

  ```sh
  python3 -m venv .venv
  ```

- Activate the virtual environment:

  ```sh
  source .venv/bin/activate
  ```

  Once activated, your shell will be prefixed with (.venv). The virtual environment can be deactivated at any time by
  running `deactivate`.

- Install west:

  ```sh
  pip install west
  ```

- Get the Zephyr source code using the Alif SDK:

  ```sh
  west init -m https://github.com/alifsemi/sdk-alif.git --mr v2.0.0
  west update
  ```

- Install Python dependencies using west packages:

  ```sh
  west packages pip --install
  ```

- Set the `ZEPHYR_BASE` environment variable to the `/zephyrproject/zephyr` folder:

  **Linux**
  
  ```sh
  (echo; echo 'export ZEPHYR_BASE="/home/.../zephyrproject/zephyr"') >> ~/.bashrc
  source ~/.bashrc
  ```

  Make sure to restart the VS Code.

  **macOS**
  
  ```sh
  (echo; echo 'export ZEPHYR_BASE="/usr/.../zephyrproject/zephyr"') >> ~/.zshrc
  source ~/.zshrc
  ```
  
  Make sure to fully quit VS Code, not just close the window. Otherwise, the changes won’t be applied.

### Windows

- Open a `cmd.exe` terminal window as a regular user.

- Create a new virtual environment:

  ```sh
  cd %HOMEPATH%
  python -m venv .venv
  ```

- Activate the virtual environment:

  ```sh
  .venv\Scripts\activate.bat
  ```

  Once activated your shell will be prefixed with (.venv). The virtual environment can be deactivated at any time by running deactivate.

> [!Note]
> Remember to activate the virtual environment every time you start working.

- Install west:

  ```sh
  pip install west
  ```

- Get the Zephyr source code using the Alif SDK:

  ```sh
  west init -m https://github.com/alifsemi/sdk-alif.git --mr v2.0.0
  west update
  ```

- Install Python dependencies using west packages.

  ```sh
  west packages pip --install
  ```

- Set the `ZEPHYR_BASE` environment variable to `C:\...\Zephyr-Workspace\zephyr` in
  [Environment Variables](https://learn.microsoft.com/en-us/answers/questions/4330946/change-system-variables-on-windows-11).

- Make sure to restart the VS Code.

## Examples Description

| Example name                              | Description   |
|---                                        |---            |
| [blinky](./Examples/STM32H7B3I-DK/Blinky/) | A standard Zephyr basic example that blinks an LED forever using the Zephyr GPIO API by configuring a pin as output and toggling it in a loop. |
| [threads](./Examples/STM32H7B3I-DK/Threads/) | A standard Zephyr basic example that spawns multiple compile-time threads that blink LEDs with different periods and report status via a FIFO to a print thread. |

For more information about each example, please see the official [Zephyr example](https://github.com/zephyrproject-rtos/zephyr/tree/main/samples/basic) repository.

# Steps to build and debug the Zephyr example
1. Open the cloned repository's folder in VS Code.

2. In the CMSIS view, click on **...**, use **Select Active Solution from workspace**, and choose an option.
   
3. Press the **Manage Solution Settings** button. In the dialog, select the target board and application.

4. Press the **Build solution** button to build the example.

5. Press the **"Build solution"** button to build the example.

6. Start the CMSIS Debugger.
