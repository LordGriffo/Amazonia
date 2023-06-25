#include "../lib/color.hpp"

namespace Color {
    std::string set(Code code) {
        return "\033[" + std::to_string(code) + "m";
    }
}  // namespace Color
