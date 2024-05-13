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

To build the programs, you can use the provided script `cprogs` with the build command:

```bash
./cprogs build
```

This script will handle the creation of the build directory, configuration of build files, and compilation of the programs.

### Cleaning the Build

To clean up the build directory, use the clean command:

```bash
./cprogs clean
```

This command will remove the build directory, ensuring a clean state for a fresh build.

### Running the Binaries

To run any of the compiled binaries:

```bash
./cprogs run executable_name
```

Replace executable_name with the name of the binary you wish to run. This command will execute the specified program from the build/bin directory.

### List Available Executables

If you're unsure what executables are available, you can simply run the command without specifying an executable:

```bash
./cprogs run
```

This will list all the available executables in the build/bin directory.

### Usage

The `cprogs` script enhances the ease of building, running, and maintaining the programs in this repository. Each program demonstrates different functionalities of the C language.

### Contributing

Contributions to this project are welcome! Feel free to fork the repository and submit pull requests.

### License

This project is licensed under the MIT License - see the LICENSE file for details.
