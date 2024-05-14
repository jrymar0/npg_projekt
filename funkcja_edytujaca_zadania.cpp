void TaskManager::editTask(int index, const std::string& name, const std::string& description) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].name = name;
        tasks[index].description = description;
        saveTasks();
    } else {
        std::cout << "Invalid task index\n";
    }
}
