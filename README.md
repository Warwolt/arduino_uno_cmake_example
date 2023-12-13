# Arduino Uno C Progamming Hello World

This repository contains a minimal example of building and flashing a Hello
World program on the Arduino Uno (Atmega329p).

## Install AVR Toolchain

Install `AVR 8-Bit Toolchain` for your platform:

- https://www.microchip.com/en-us/tools-resources/develop/microchip-studio/gcc-compilers

Then, install `avrdude` for use as flasher:

- https://github.com/avrdudes/avrdude

Make sure that both the avr toolchain `bin` directory and `avrdude` are added to
your `PATH` environment variable.

## Generate project

```
mkdir build
cmake . -B build -G "Unix Makefiles" -DCMAKE_TOOLCHAIN_FILE=./external/cmake-avr/generic-gcc-avr.cmake
```
