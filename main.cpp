#include <bits/stdc++.h>
using namespace std;

class Task {
public:
    int id;
    string title;
    string priority;
    string status;

    Task(int id, string ttl, string pr, string st) {
        this->id = id;
        this->title = ttl;
        this->priority = pr;
        this->status = st;
    }

    void print() const {
        cout <<"id: "<<id<<" ,title: "<<title<<" ,priority: "<<priority<<" ,status: "<<status<<endl;
    }
};

void addTask(vector<Task>& tasks) {
    int id;
    string title, priority, status;

    cout << "enter task id: ";
    cin >> id;
    cin.ignore();

    cout << "enter task title:  ";
    getline(cin, title);

    cout << "enter task priority from low/medium/high ";
    getline(cin, priority);

    cout << "enter status pending/done: ";
    getline(cin, status);

    tasks.push_back(Task(id, title, priority, status));
    cout << "task added.\n";
}

void showAllTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "task list seems to be empty.\n";
        return;
    }

    for (const Task& t : tasks) {
        t.print();  
    }
}

void deleteTask(vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "the list is empty so nothing to delete.\n";
        return;
    }

    int id;
    cout << "enter task id to deleteTask.\n ";
    cin >> id;

    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        if (it->id == id) {
            tasks.erase(it);
            cout << "task is removed successfully\n";
            return;
        }
    }

    cout << "this task is not there with this task id.\n";
}

void updateTask(vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks to update.\n";
        return;
    }

    int id;
    cout << "Enter your task id to update.\n";
    cin >> id;
    cin.ignore();

    for (Task& t : tasks) {
        if (t.id == id) {
            cout << "new title ";
            getline(cin, t.title);

            cout << "new priority: ";
            getline(cin, t.priority);

            cout << "new status: ";
            getline(cin, t.status);

            cout << "Task updated\n";
            return;
        }
    }

    cout << "No task found with this ID.\n";
}

int main() {
    vector<Task> tasks;
    int choice;

    while (true) {
        cout << " Task Menu.\n";
        cout << "Enter 1 for  Adding a  task.\n";
        cout << "Enter 2 for  viewing a  task.\n";
        cout << "Enter 3 for  delete a  task.\n";
        cout << "Enter 4 for  update a  task.\n";
        cout << "Enter 5 for exit.\n";
        cout << "Enter choice: ";

        cin >> choice;

        if (choice == 1) {
            addTask(tasks);
        }
        else if (choice == 2) {
            showAllTasks(tasks);
        }
        else if (choice == 3) {
            deleteTask(tasks);
        }
        else if (choice == 4) {
            updateTask(tasks);
        }
        else if (choice == 5) {
            cout << "Exiting the program\n";
            break;
        }
        else {
            cout << "wrong choice selected\n";
        }
    }

    return 0;
}