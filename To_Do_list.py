tasks = []


def addtask():
    task = input('Enter task : ')
    tasks.append(task)
    print('Task added successfully')


def removetask():
    try:
        num = int(input('Enter number of the task : ')) - 1
        if 0 < num < len(tasks):
            tasks.pop(num)
            print('Task removed successfully')
        else:
            print('Invalid task number')
    except ValueError:
        print('Please enter a valid input')


def updatetask():
    try:
        num = int(input('Enter number of the task : ')) - 1
        if 0 <= num < len(tasks):
            task = input('Enter the task : ')
            tasks[num] = task
            print('Task updated successfully')
        else:
            print('Invalid task number.')
    except ValueError:
        print('Please enter a valid input')


def showtasks():
    if len(tasks) < 1:
        print('Your To-Do list is empty')
    else:
        for x in range(0, len(tasks)):
            print(x+1, '. ', tasks[x])


def main():
    while True:
        print()
        print('----MENU----')
        print('1. Add task')
        print('2. Remove task')
        print('3. Update task')
        print('4. Show tasks')
        print('5. Exit')
        print()
        choice = input('Enter your choice : ')

        if choice == '1':
            addtask()
        elif choice == '2':
            removetask()
        elif choice == '3':
            updatetask()
        elif choice == '4':
            showtasks()
        elif choice == '5':
            print("Exiting...", end='')
            break
        else:
            print("Invalid choice. Please try again.")

    print('Thankyou!!!\n')


if __name__ == "__main__":
    main()
