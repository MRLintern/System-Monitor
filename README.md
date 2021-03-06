## System-Monitor
This tool developed in C++ can be seen as an equivalent to the htop command line utility,
which allows a user to interactively monitor their computer's system resources in real-time.

## Dependencies
### ncurses
[ncurses](https://www.gnu.org/software/ncurses/) is a library that facilitates text-based graphical output in the terminal. This project relies on ncurses for display output.

You need to install ncurses within your own Linux environment: `sudo apt install libncurses5-dev libncursesw5-dev`

## Make
This project uses [Make](https://www.gnu.org/software/make/). The Makefile has four targets:
* `build` compiles the source code and generates an executable
* `format` applies [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html) to style the source code
* `debug` compiles the source code and generates an executable, including debugging symbols
* `clean` deletes the `build/` directory, including all of the build artifacts

## Instructions

1. Clone the project repository: `$ git clone https://github.com/MRLintern/System-Monitor`

2. Build the project: `$ make build`

3. Run the resulting executable: `$./build/monitor`
