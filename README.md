# Zephyr-ST (Work in Progress)
This repository contains an exemplary CMSIS solution file that can be used to build two Zephyr basic examples on ST development boards. It can be easily adapted to other boards or examples. It uses Zephyr's `west` build system to create the executable file for an application and the [Arm CMSIS Debugger](https://marketplace.visualstudio.com/items?itemName=Arm.vscode-cmsis-debugger) to flash download and run the image on the target hardware.

## Quick start

- Clone this repository onto your machine.
- [Install Zephyr](#zephyr-installation).
- Open this repository in VS Code. It should install required extensions automatically.
- In the CMSIS view, click on **...**, use **Open Solution in Workspace**, and choose your desired project.
- Set the environment variables for Zephyr workspace and Python virtual environoment as explained in the [Keil Studio documentation](https://mdk-packs.github.io/vscode-cmsis-solution-docs/zephyr.html#set-environment-variables).
- Make sure to fully restart the VS Code.
- Press the **Manage Solution Settings** button. In the dialog, select the target board and application.
- Press the **Build solution** button to build the example.
- Press the **Load & Debug application** button to start a debug session.

> [!NOTE]
> Check that the **Arm CMSIS Solution** extension is at least v1.64.0.

## Zephyr installation

This chapter contains installation instructions for [Linux and macOS](#linux-and-macos) and [Windows](#windows).

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

- Get the standard Zephyr source code:

  ```sh
  west init
  west update
  ```

- Install Python dependencies using west packages:

  ```sh
  west packages pip --install
  ```

### Windows

- Open a `cmd.exe` terminal window as a regular user.

- Create a `zephyrproject` directory and change into it:

  ```sh
  mkdir zephyrproject
  cd zephyrproject
  ```

- Create a new virtual environment:

  ```sh
  python -m venv .venv
  ```

- Activate the virtual environment:

  ```sh
  .venv\Scripts\activate.bat
  ```

  Once activated your shell will be prefixed with (.venv). The virtual environment can be deactivated at any time by running `deactivate`.

- Install west:

  ```sh
  pip install west
  ```

- Get the standard Zephyr source code:

  ```sh
  west init
  west update
  ```

- Install Python dependencies using west packages.

  ```sh
  west packages pip --install
  ```

## Examples Description

| Example name                              | Description   |
|---                                        |---            |
| [blinky](./Examples/STM32H7B3I-DK/Blinky/) | A standard Zephyr basic example that blinks an LED forever using the Zephyr GPIO API by configuring a pin as output and toggling it in a loop. |
| [threads](./Examples/STM32H7B3I-DK/Threads/) | A standard Zephyr basic example that spawns multiple compile-time threads that blink LEDs with different periods and report status via a FIFO to a print thread. |

For more information about each example, please see the official [Zephyr example](https://github.com/zephyrproject-rtos/zephyr/tree/main/samples/basic) repository.
