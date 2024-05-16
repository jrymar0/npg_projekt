#include "task_manager.h"
#include <iostream>


int main() {
    std::string path;
    std::cout << "Podaj ścieżkę pliku wraz z nazwą i rozszerzeniem (NIE UŻYWAJ SPACJI BEZ " "): " << std::endl;
    std::cin>>path;
    TaskManager taskManager(path);
    //________________________________________________________________//
    while (true) {
        std::cout << "Wybierz opcję:" << std::endl;
        std::cout << "1. Dodaj zadanie" << std::endl;
        std::cout << "2. Wyświetl wszystkie zadania" << std::endl;
        std::cout << "3. Usuń wybrane zadanie" << std::endl;
        std::cout << "4. Wyczyść wszystkie zadania" << std::endl;
        std::cout << "5. Edytuj zadanie" << std::endl;
        std::cout << "6. Wyjdź" << std::endl;
        std::cout << "Wybieram opcję: " << std::endl;

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                //zaimplementować
                break;
            }
            case 2: {
                //zaimplementować
                break;
            }
            case 3: {
                //zaimplementować
                break;
            }
            case 4: {
                //zaimplementować
                break;
            }
            case 5: {
                //zaimplementować
                break;
            }
            case 6: {
                std::cout << "Zamykanie..." << std::endl;
                return 0;
            }
            default: {
                std::cout << "Nieprawidłowa opcja. Spróbuj ponownie." << std::endl;
            }
        }

    }
}