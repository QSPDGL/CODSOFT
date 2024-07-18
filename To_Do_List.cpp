#include <iostream>
#include <string>
using namespace std;

string tasks[100];
int len = 0;

void addtask()
{
    string task;

    cout << "Enter task : ";
    cin.ignore();

    getline(cin, task);

    tasks[len] = task;
    len++;

    cout << "Task added successfully" << endl;
}

void removetask()
{
    int index;

    if (len == 0)
    {
        cout << "Your To-Do List is empty" << endl;
    }
    else if (len == 1)
    {
        len--;
        cout << "Task removed successfully!" << endl;
    }
    else
    {
        cout << "Enter index of the task to remove : ";
        cin >> index;

        if (index > 0 && index <= len)
        {
            for (int i = index - 1; i < len - 1; i++)
            {
                tasks[i] = tasks[i + 1];
            }
            len--;
            cout << "Task removed successfully!" << endl;
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }
}

void updatetask()
{
    int index;
    string task;

    cout << "Enter index of the task to update : ";
    cin >> index;

    if (index > 0 && index <= len)
    {
        cout << "Enter new task : ";
        cin.ignore();

        getline(cin, task);

        tasks[index - 1] = task;

        cout << "Task updated successfully" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
}

void showtasks()
{
    if (len == 0)
    {
        cout << "Your To-Do List is empty" << endl;
    }
    else
    {
        cout << "Your To-Do List:" << endl;
        for (int i = 0; i < len; i++)
        {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

int main()
{
    int choice = -1;

    while (choice != 0)
    {
        cout << endl
             << "-------------MENU-------------" << endl;
        cout << "0. Exit" << endl;
        cout << "1. Add task" << endl;
        cout << "2. Remove task" << endl;
        cout << "3. Update task" << endl;
        cout << "4. Show tasks" << endl;
        cout << endl
             << "Enter your choice : ";
        cin >> choice;
        cout << endl;

        if (choice == 0)
        {
            cout << "Exiting...";
            break;
        }

        switch (choice)
        {
        case 1:
            addtask();
            break;

        case 2:
            removetask();
            break;

        case 3:
            updatetask();
            break;

        case 4:
            showtasks();
            break;

        default:
            cout << "Invalid input!" << endl;
            break;
        }
    }

    cout << "Thankyou!!!" << endl
         << endl;

    return 0;
}
