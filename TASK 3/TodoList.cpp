#include <iostream>
#include<conio.h> 
#include <vector>
#include <string>
using namespace std;
void displayMenu() {
    cout << "TO-DO LIST"<<endl;
    cout << "1. Add Task"<<endl;
    cout << "2. View Task"<<endl;
    cout << "3. Delete Task"<<endl;
    cout << "4. Exit"<<endl;
    cout << "Enter your choice: ";
}
int main() {
    vector<string> todoList;
    string task;
    int choice;
    int taskToDelete;
    do {
        displayMenu();
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter task to add: ";
                cin.ignore(); 
                getline(cin, task);
                todoList.push_back(task);
                cout << "Task Added"<<endl;
                break;
            case 2: 
                if (todoList.empty()) {
                    cout << "Your to-do list is empty."<<endl;
                } else {
                    cout << "Task"<<endl;
                    for (size_t i = 0; i < todoList.size(); ++i) {
                        cout << i + 1 << ". " << todoList[i] << endl;
                    }
                }
                break;
            case 3:
                if (todoList.empty()) {
                    cout << "Your to-do list is empty. No tasks to delete."<<endl;
                } else {
                    cout << "Enter the task number to delete: ";
                    cin >> taskToDelete;
                    if (taskToDelete >= 1 && taskToDelete <= todoList.size()) {
                        todoList.erase(todoList.begin() + taskToDelete - 1);
                        cout << "Task deleted successfully!"<<endl;
                    } else {
                        cout << "Invalid task number."<<endl;
                    }
                }
                break;
            case 4:
                cout << "Exit"<<endl;
                break;
            default:
                cout << "Invalid choice. Please try again."<<endl;
        }
    } while (choice != 4);


}