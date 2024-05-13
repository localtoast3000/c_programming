# C Programming

This repository contains programs written in C. It includes examples and exercises that demonstrate various concepts of the C programming language.

## Getting Started

These instructions will guide you through the process of setting up your development environment and building the programs contained in this repository.

### Prerequisites

Before you begin, ensure you have installed the following software on your system:

- CMake (version 3.10 or higher)
- GCC (GNU Compiler Collection)
- MinGW (for Windows users)

### Building the Programs

To build the programs, follow these steps:

1. **Create and Navigate to the Build Directory:**

```bash
mkdir build && cd build
```

2. **Generate Build Files:**

   Depending on your operating system, use one of the following commands:

   - **Windows:**

```bash
cmake .. -G "MinGW Makefiles" -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++
```

- **macOS and Linux:**

```bash
cmake .. -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++
```

These commands configure the build system to use GCC for compiling C (and C++ if needed) code. Windows users are instructed to use MinGW Makefiles to generate compatible build configurations.

3. **Compile the Programs:**

```bash
cmake --build .
```

### Running the Binaries

After building, the binaries will be located in the build/bin directory. You can run any of the compiled programs by navigating to this directory and executing the following command:

```bash
./executable_name
```

Replace executable_name with the name of the binary you wish to run. This name corresponds to the filename of the source file in the main directory, without its extension.

### Usage

You can run the executable files generated in the build/bin directory. Each program demonstrates different functionalities of the C language.

### Contributing

Contributions to this project are welcome! Feel free to fork the repository and submit pull requests.

### License

This project is licensed under the MIT License - see the LICENSE file for details.
