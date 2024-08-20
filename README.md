
# Project Summary: ProjectOS2 📘

## Development Steps 🚀

### 1. Creating ProjectOS2 Library
I started by designing and making a dynamic library with C++. This library helps do things like sorting, reading, showing, and calculating averages. It created two main files:
- **ProjectOS2.dll**: This file has all the real work of the functions.
- **ProjectOS2.lib**: This file helps connect programs to the dynamic library.
Delivery date: August 17, 2024
**ProjectOS2.lib** is made automatically when ProjectOS2 is built. It helps connect apps dynamically with the dynamic library ProjectOS2.dll. Adding ProjectOS2.lib to the linker settings in Visual Studio makes sure functions in ProjectOS2.dll can be accessed. After building, you can find ProjectOS2.lib in the output folder to use in other projects.

<!-- Picture  -->

### 2. Setting Up the TestProject Program
To check if the library works well, I made a test program called TestProject that uses functions from ProjectOS2. This program does the following:
- Brings in function definitions from ProjectOS2.h.
- Runs a series of functions including readInfo, customSort, display, and computeAvg to process array data.
- The program shows the processed data and calculates the average.

### 3. Project Configuration and Assembly
In Visual Studio, I changed the Properties settings for both the ProjectOS2 and TestProject to make sure they link properly and the paths to libraries and header files are correct. ProjectOS2.lib was included in the linker settings for TestProject to enable dynamic linking with ProjectOS2.dll.

### 4. Testing Results and Verification
After assembling and running TestProject, the program successfully showed the expected results, confirming that the functions of the ProjectOS2 library work well. This test proves that the library can perform the required tasks efficiently and accurately. The results were displayed on the screen and matched expectations, reflecting the effective performance of the developed functions.

<!-- Picture -->
