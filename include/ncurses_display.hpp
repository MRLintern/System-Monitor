#ifndef NCURSES_DISPLAY_H
#define NCURSES_DISPLAY_H

#include <curses.h>

#include "process.hpp"
#include "system.hpp"

namespace NCursesDisplay {
void Display(System &system, int n = 10);
void DisplaySystem(System &system, WINDOW *window);
void DisplayProcesses(std::vector<Process> &processes, WINDOW *window, int n);
std::string ProgressBar(float percent);
std::string normalizeStringLength(std::string s, std::size_t length);
};  // namespace NCursesDisplay

#endif