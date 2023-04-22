rusty


Table of Contents
─────────────────

1. Environment
2. Prerequisites
.. 1. Antlr CPP Runtime binary
.. 2. Clang++ compiler:
3. Installation
4. Usage
.. 1. Test Case


1 Environment
═════════════

  • Ubuntu 22.04.2


2 Prerequisites
═══════════════

2.1 Antlr CPP Runtime binary
────────────────────────────

  This was the antlr4-cpp-runtime library used to build this project:
  <https://www.antlr.org/download/antlr4-cpp-runtime-4.12.0-source.zip>

  Here is the tutorial to get it up and running on ubuntu:
  <https:https://www.cs.sjsu.edu/~mak/tutorials/InstallANTLR4Cpp.pdf>

  All that is needed is the commands in `Download and install the C++
  runtime for ANTLR` its subsection `Ubuntu installation`


2.2 Clang++ compiler:
─────────────────────

  Recommended: Ubuntu clang version 14.0.0-1ubuntu1

  You will need `clang++>=14.0.0` to run this project.


3 Installation
══════════════

  To install the ANTLR4-generated scanner, follow these steps:

  1. Download or clone the source code for the scanner.

  2. Open a terminal and navigate to the directory where the source code
     is located.

  3. Run the make command to compile the scanner code.

  ┌────
  │ make 
  └────

  1. If the compilation is successful, the scanner executable will be

  ┌────
  │ ./parser 
  └────


4 Usage
═══════

  To use the scanner, follow these steps:

  1. Create a text file containing the input text to be scanned.
  2. Open a terminal and navigate to the directory where the scanner
     executable is located.
  3. Run the scanner executable, passing the input file as a
     command-line argument. For example:

  ┌────
  │ ./parser 
  └────


4.1 Test Case
─────────────

  The input is determined by the file <file:test-in.txt>. The scanner
  will read the input file and output the tokens it recognizes to the
  console. Simply change <file:test-in.txt> for the *master text case*
