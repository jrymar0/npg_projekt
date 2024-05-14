void TaskManager::addTask(const std::string& name, const std::string& description) {
    Task newTask = {name, description};
    tasks.push_back(newTask);
    saveTasks();
}