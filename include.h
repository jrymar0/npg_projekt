
#ifndef NPG_PROJEKT_INCLUDE_H
#define NPG_PROJEKT_INCLUDE_H
#include <iostream>
#include <string>

class Task {
private:
    std::string name;
    std::string description;

public:
    // Konstruktor
    Task(const std::string& taskName, const std::string& taskDescription) : name(taskName), description(taskDescription) {}
    // Metody
    void printTask() const;
    void deleteTask();

};


#endif //NPG_PROJEKT_INCLUDE_H