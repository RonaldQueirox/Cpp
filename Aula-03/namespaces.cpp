#include <iostream>

namespace primeiro {
    int x = 1;
}

namespace segundo {
    int x = 2;
}

int main() {

    int x = 0;
    std::cout << x << '\n';
    std::cout << primeiro::x << '\n';
    std::cout << segundo::x << '\n';
    return 0;
}
