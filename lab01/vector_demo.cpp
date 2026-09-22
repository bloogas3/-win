#include <vector>
#include <iostream>
int main() {
    std::vector<int> v1(5);
    for (int i = 0; i < 5; i++)
        std::cout << v1[i] << ' ';
    std::cout << std::endl;

    for (int x : v1)
        std::cout << x << ' ';
    std::cout << std::endl;

    for (auto x : v1)
        std::cout << x << ' ';
    std::cout << std::endl;

    std::vector<int> v2 = {1, 2, 3, 4, 5};
    for (auto x : v2)
        std::cout << x << ' ';
    std::cout << std::endl;

    std::vector<int> v3 = {1, 2, 3, 4, 5, 0b1100};
    for (auto x : v3)
        std::cout << x << ' ';
    std::cout << std::endl;

    std::vector v4 = {1, 2, 3, 4, 5};
    for (auto x : v4)
        std::cout << x << ' ';
    std::cout << std::endl;

    return 0;
}