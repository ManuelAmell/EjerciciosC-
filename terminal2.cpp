#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); // Fuerza UTF-8 en la terminal
    std::cout << "Espa�ol, canci�n, coraz�n, pi�ata, �o�o" << std::endl;
    return 0;
}
