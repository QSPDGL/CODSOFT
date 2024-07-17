choice = -1

while True:
    a = int(input('Enter a number : '))
    b = int(input('Enter another number : '))

    print('\n')

    print('Enter 0 to Exit', 'Enter 1 for addition', 'Enter 2 for subtraction',
          'Enter 3 for multiplication', 'Enter 4 for division', sep='\n')

    print("\n")

    choice = input('Enter an operation : ')

    print("\n")

    if choice == '0':
        print('Exiting...')
        break
    elif choice == '1':
        print('Answer : ', a + b)
    elif choice == '2':
        print('Answer : ', a - b)
    elif choice == '3':
        print('Answer : ', a * b)
    elif choice == '4':
        print('Answer : ', a / b)
    else:
        print('Invalid Operation\n')

    print("\n")

print('Thank You!')

print("\n")
