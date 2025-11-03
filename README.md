# Zephyr-ST (Work in Progress)
Zephyr examples for STMicroelectronics STM32 based boards. The debug launch.json file has been adapted to load the ELF image built by the Zephyr West tool debugged by the [CMSIS-Debugger](https://marketplace.visualstudio.com/items?itemName=Arm.vscode-cmsis-debugger) extension.

# Steps to setup the required tools for Zephyr
1. Install dependencies to your PC:
   - python3
   - python3-pip
2. Install west and pyelftools with this command:
   ```bash
   python3 -m pip install west pyelftools jsonschema
   ``` 
3. Verify the west installation by running:
   ```bash
   west --version
   ```
   - In case you see the error `west: command not found`, add the west.exe in PATH if reqired

More details can be found in [Zephyr Getting Started Guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html).

# Steps to build and debug the Zephyr example
1. Open the folder *./Zephyr-ST* in VS code.

2. In Terminal, initialize and update the Zephyr workspace, if none exists:
   ```bash
   mkdir -p zephyrproject
   west init ./zephyrproject
   cd ./zephyrproject
   west update 
   ```
   - Now the standard Zephyr modules can be found under the *./Zephyr-ST/zephyrproject* folder.

3. To use the west tools for projects located in different folders, set the `ZEPHYR_BASE` environment variable to the *./Zephyr-ST/zephyrproject/zephyr* folder:

   **For Ubuntu:**

   ```bash
   (echo; echo 'export ZEPHYR_BASE="/home/.../zephyrproject/zephyr"') >> ~/.bashrc
   source ~/.bashrc
   ```
   - Make sure to restart the VS Code.

   **For MacOS:**

   ```bash
   (echo; echo 'export ZEPHYR_BASE="/usr/.../zephyrproject/zephyr"') >> ~/.zshrc
   source ~/.zshrc
   ```
   - Make sure to fully quit VS Code, not just close the window. Otherwise, the changes won’t be applied.

   **For Windows:**
      - Set ```ZEPHYR_BASE``` to ```C:/.../Zephyr-Workspace/zephyr``` in Environment Variables, and restart the VS Code.

4. Press the **"Select Active Solution from workspace"** button to choose the project you want to work on.

5. Press the **"Build solution"** button to build the example.

6. Start the CMSIS Debugger.