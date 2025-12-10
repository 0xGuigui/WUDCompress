# WudCompress

This project is a modified version of the Wii U image WUD compression tool.

**Original Source:** [https://gbatemp.net/threads/wii-u-image-wud-compression-tool.397901/](https://gbatemp.net/threads/wii-u-image-wud-compression-tool.397901/)

This repository contains modifications to make the tool compatible with Linux, in addition to its original Windows support.

## Building the Project

This project uses CMake for cross-platform compilation.

### Prerequisites

*   CMake (version 3.10 or higher)
*   A C++ compiler (e.g., GCC for Linux, MSVC for Windows)

### Build Instructions for Linux

1.  Open a terminal at the root of this project.
2.  Create a build directory and navigate into it:
    ```bash
    mkdir build && cd build
    ```
3.  Generate the Makefiles with CMake:
    ```bash
    cmake ..
    ```
4.  Compile the project with make:
    ```bash
    make
    ```
    The executable `WudCompress` will be located in the `build` directory.

### Build Instructions for Windows (with Visual Studio)

1.  Open a command prompt (or PowerShell) at the root of this project.
2.  Create a build directory and navigate into it:
    ```cmd
    mkdir build && cd build
    ```
3.  Generate the Visual Studio solution with CMake:
    ```cmd
    cmake ..
    ```
    CMake will create a `WudCompress.sln` file in the `build` directory.
4.  Open this `.sln` file with Visual Studio and build the project from the IDE (typically by pressing `F7` or via the `Build > Build Solution` menu).
    The executable `WudCompress.exe` will be located in a subfolder within `build` (e.g., `build/Debug` or `build/Release`).
