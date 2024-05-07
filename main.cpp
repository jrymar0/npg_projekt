#include "include.h"
#include <vector>

int main(){
    std::vector<Task> tasks;
    Task task("nazwa","opis");
    tasks.push_back(task);
    tasks[0].printTask();
    return 0;
}