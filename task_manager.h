#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <string>
#include <vector>

struct Task {
    std::string name;
    std::string description;
};

class TaskManager {
private:
    std::vector<Task> tasks;
    std::string filepath;

public:
    //konstruktor z implementacją
    TaskManager(const std::string& filepath) : filepath(filepath) {loadTasks();}

    // dodanie zadania z nazwą i opisem
    void addTask(const std::string& name, const std::string& description);

    // wypisanie wszystkich zadań
    void printTasks();

    // usuwanie wybranego zadania
    void deleteTask(int index);

    // czyszczenie listy zadań
    void clearTasks();

    // edytowanie wybranego zadania
    void editTask(int index, const std::string& name, const std::string& description);

    // wczytanie zadań z pliku
    void loadTasks();

    // zapisanie zadań do pliku
    void saveTasks();
};

#endif