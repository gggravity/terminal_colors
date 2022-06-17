#pragma once

#include <string>

namespace terminal_colors
  {
    std::string black (const std::string &s)
      {
        return "\x1B[30m" + s + "\033[0m\t\t";
      }

    std::string red (const std::string &s)
      {
        return "\x1B[31m" + s + "\033[0m\t\t";
      }

    std::string green (const std::string &s)
      {
        return "\x1B[32m" + s + "\033[0m\t\t";
      }

    std::string yellow (const std::string &s)
      {
        return "\x1B[33m" + s + "\033[0m\t\t";
      }

    std::string blue (const std::string &s)
      {
        return "\x1B[34m" + s + "\033[0m\t\t";
      }

    std::string magenta (const std::string &s)
      {
        return "\x1B[35m" + s + "\033[0m\t\t";
      }

    std::string cyan (const std::string &s)
      {
        return "\x1B[36m" + s + "\033[0m\t\t";
      }

    std::string white (const std::string &s)
      {
        return "\x1B[37m" + s + "\033[0m\t\t";
      }

    std::string bright_black (const std::string &s)
      {
        return "\x1B[90m" + s + "\033[0m\t\t";
      }

    std::string bright_red (const std::string &s)
      {
        return "\x1B[91m" + s + "\033[0m\t\t";
      }

    std::string bright_green (const std::string &s)
      {
        return "\x1B[92m" + s + "\033[0m\t\t";
      }

    std::string bright_yellow (const std::string &s)
      {
        return "\x1B[93m" + s + "\033[0m\t\t";
      }

    std::string bright_blue (const std::string &s)
      {
        return "\x1B[94m" + s + "\033[0m\t\t";
      }

    std::string bright_magenta (const std::string &s)
      {
        return "\x1B[95m" + s + "\033[0m\t\t";
      }

    std::string bright_cyan (const std::string &s)
      {
        return "\x1B[96m" + s + "\033[0m\t\t";
      }

    std::string bright_white (const std::string &s)
      {
        return "\x1B[97m" + s + "\033[0m\t\t";
      }
  }