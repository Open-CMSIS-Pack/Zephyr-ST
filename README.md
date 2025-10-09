# Zephyr-ST (Work in Progress)
Zephyr examples for STMicroelectronics STM32 based boards. The debug launch.json file has been adapted to load the ELF image built by the Zephyr West tool debugged by the [CMSIS-Debugger](https://marketplace.visualstudio.com/items?itemName=Arm.vscode-cmsis-debugger) extension.

# Steps to setup the required tools
1. Install dependencies to your PC:
   - python3
   - python3-pip
   - wget
   - cmake
   - ninja
2. Install west and pyelftools with this command:
   ```bash
   python3 -m pip install west pyelftools
   ``` 
3. Make sure to add the executable `west.exe` into the **PATH** environment variable.

4. Manually download and [install](https://open-cmsis-pack.github.io/cmsis-toolbox/installation/#manual-setup) the latest cmsis-toolbox from the nightly build artifacts:
   > https://github.com/Open-CMSIS-Pack/cmsis-toolbox/actions/workflows/nightly.yml

More details can be found in [Zephyr Getting Started Guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html).

# Steps to build and debug the Zephyr example
1. Open the folder *./Zephyr-ST* in VS code.

2. Initialize and update the Zephyr workspace, if none exists:
   - Use the menu command **"Terminal - Run Tasks"** and execute:
      - "Setup Zephyr-ST workspace"
   - Now the required Zephyr and ST modules can be found under the *./Zephyr-ST/Zephyr-Workspace* folder.

3. To use the west tools for projects located in different folders:
   - Set ```ZEPHYR_BASE``` to ```C:/.../Zephyr-Workspace/zephyr```, and restart the VS Code.

4. Press the **"Select Active Solution from workspace"** button to choose the project you want to work on.

5. Press the **"Build solution"** button to build the example.

6. Start the CMSIS Debugger.