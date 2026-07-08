def table():
    print("Printing the table")
    for i in range(1, 11):
        for j in range(1, 11):
            print(i, " X ", j, " = ", i * j)
        print("-----------------------------")


def square():
    print("Printing the squares")
    for i in range(1, 11):
        print(" Square of ", i, " = ", i * i)


def cube():
    print("Printing the cubes")
    for i in range(1, 11):
        print(" Cube of ", i, " = ", i * i * i)


cube()
