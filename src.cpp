#include "task_manager.h"
#include <iostream>
#include <fstream>

void TaskManager::addTask(const std::string& name, const std::string& description) {
    Task newTask = {name, description};
    tasks.push_back(newTask);
    saveTasks();
}

void TaskManager::printTasks() {
    std::cout << "Saved tasks:\n";;
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i].name << ": " << tasks[i].description << '\n';
    }
}
void TaskManager::deleteTask(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
        saveTasks();
    } else {
        std::cout << "Invalid task index\n";
    }
}

void TaskManager::clearTasks() {
    tasks.clear();
    saveTasks();
}

void TaskManager::editTask(int index, const std::string& name, const std::string& description) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].name = name;
        tasks[index].description = description;
        saveTasks();
    } else {
        std::cout << "Invalid task index\n";
    }
}

void TaskManager::loadTasks() {
    tasks.clear();
    std::ifstream file(filepath);
    if (file.is_open()) {
        std::string name, description;
        while (std::getline(file, name) && std::getline(file, description)) {
            Task task = {name, description};
            tasks.push_back(task);
        }
        file.close();
    }
}

void TaskManager::saveTasks() {
    //zaimplementować
}
