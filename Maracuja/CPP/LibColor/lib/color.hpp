#ifndef COLOR_HPP
#define COLOR_HPP

#include <string>

namespace Color {
    enum Code {
        RED = 31,
        GREEN = 32,
        YELLOW = 33,
        BLUE = 34,
        MAGENTA = 35,
        CYAN = 36,
        RESET = 0
    };

    std::string set(Code code);
}  // namespace Color

#endif  // COLOR_HPP
