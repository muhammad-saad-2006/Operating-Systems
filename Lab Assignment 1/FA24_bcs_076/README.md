# Implementing a Simpletron:

**Simpletron** is a powerful tool that is used to understand how computers work at a fundamental hardware and machine-language level.

In this task i have implemented a Simpletron that is performing addition.

## Project Structure:

```text
Lab Assignment 1\FA24_bcs_076/
├── makefile
├── README.md
├── simple.c
├── simple.h
├── sml.txt
└── util.c
```

## How to run this file:

Clone the repo get to the folder FA24_bcs_076 and then run these commands

**For Windows**

`mingw32-make`

`./simple.exe sml.txt`

run `mingw32-make clear` to clean the object and library files

**For Linux**

`make`

`./simple.exe sml.txt`

To clear the object and library file current clear written in makefile will not work as of it is for windows if you are using linux make this change in makefile:

```
clean:
    rm -force **files you want to remove**
```

After making this change run

`make clean`

```
**Note:** Try changing the sml file and see how Simpletron do its work.
```
