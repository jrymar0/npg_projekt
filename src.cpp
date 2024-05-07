#include "include.h"
//#include "tasks.txt"

void Task::printTask() const {
    std::cout << "Nazwa zadania: " << name << std::endl;
    std::cout << "Opis zadania: " << description << std::endl;
}

void Task::deleteTask() {
    //zaimplementować bo nie wiem jak
    std::cout<<"Usunięto klasę: "<<name<<std::endl;
}