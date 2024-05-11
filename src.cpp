#include "task_manager.h"
#include <iostream>

void TaskManager::addTask(const std::string& name, const std::string& description) {
    //zaimplementować
}

void TaskManager::printTasks() {
    std::cout << "Saved tasks:\n";;
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i].name << ": " << tasks[i].description << '\n';
    }
}
void TaskManager::deleteTask(int index) {
    //zaimplementować
}

void TaskManager::clearTasks() {
    //zaimplementować
}

void TaskManager::editTask(int index, const std::string& name, const std::string& description) {
    //zaimplementować
}

void TaskManager::loadTasks() {
    //zaimplementować
}

void TaskManager::saveTasks() {
    //zaimplementować
}


