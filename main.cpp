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
                std::string name, description;
                std::cout << "Podaj nazwę zadania: ";
                std::cin.ignore();
                getline(std::cin, name);
                std::cout << "Podaj opis zadania: ";
                getline(std::cin, description);
                taskManager.addTask(name, description);
                std::cout<<std::endl;
                break;
            }
            case 2: {
                taskManager.printTasks();
                std::cout<<std::endl<<"naciśnij enter aby przejść dalej..."<<std::endl;
                getchar();
                getchar(); // nie wiadomo czemu nie działa jak jest tylko jeden XD
                break;
            }
            case 3: {
				int index;
	            std::cout << "Podaj indeks zadania do usuni�cia: ";
	            std::cin >> index;
	            taskManager.deleteTask(index - 1);
	            std::cout<<std::endl;
	            break;
            }
            case 4: {
                taskManager.clearTasks();
				std::cout << std::endl;
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
