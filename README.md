# OOP Lab Assignment (CSE 262 - Object Oriented Programming Sessional)

---

#### Course Instructor: [Pankaj Bhowmik](https://hstu.ac.bd/teacher/pankaj)

Each student should solve all the problems individually (group works will not be accepted). Plagiarism (copy and paste) is strictly prohibited.

## Instructions:

You need to design an algorithm, flow chart and finally do implementation of the following problems using C++ programming language. Besides, write a report addressing the given instructions. You may use comments for each line/block in your program and show at least one sample test case (I/O) for your program. No static initialization will be allowed.

## Task: Review and solve the lab works (not limited to):

- [C++ Basics & Arithmetic Operations](#c-basics--arithmetic-operations)
- [Conditional Statements](#control-flowconditional-ifelse-switchcase)
- [Loop](#loop-forwhile)
- [Recursion](#recursion)
- [C++ Concepts](#c-concepts-not-limited-to)
- [Java Basics](#java-basics)

## C++ Basics & Arithmetic Operations

1. Print your Name, SID and CGPA.
2. Add two integer numbers.
3. Subtract two integer numbers.
4. Multiply two integer numbers.
5. Divide two integer numbers.
6. Determine the largest number among two integers.
7. Find the area of a rectangle.
8. Calculate the average of two numbers.
9. Write a C++ program that illustrates the use (s) of reference variable.
10. Write a C++ program that illustrates the use (s) of pointer data type.

### Solutions:

1. Print your Name, SID and CGPA.

```cpp
#include <iostream>
using namespace std;

int main() {
    string name;
    int sid;
    float cgpa;

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter SID: ";
    cin >> sid;
    cout << "Enter CGPA: ";
    cin >> cgpa;

    cout << "Name: " << name << "\nSID: " << sid << "\nCGPA: " << cgpa << endl;
    return 0;
}
```

2. Add two integer numbers.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
    return 0;
}
```

3. Subtract two integer numbers.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Difference: " << a - b << endl;
    return 0;
}
```

4. Multiply two integer numbers.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Product: " << a * b << endl;
    return 0;
}
```

5. Divide two integer numbers.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Quotient: " << a / b << endl;
    return 0;
}
```

6. Determine the largest number among two integers.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Larger number: " << (a > b ? a : b) << endl;
    return 0;
}
```

7. Find the area of a rectangle.

```cpp
#include <iostream>
using namespace std;

int main() {
    int length, width;
    cin >> length >> width;
    cout << "Area of rectangle: " << length * width << endl;
    return 0;
}
```

8. Calculate the average of two numbers.

```cpp
#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    cout << "Average: " << (a + b) / 2 << endl;
    return 0;
}
```

9. Write a C++ program that illustrates the use (s) of reference variable.

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &ref = x;
    ref = 20;

    cout << "x: " << x << endl;
    cout << "ref: " << ref << endl;

    return 0;
}
```

10. Write a C++ program that illustrates the use (s) of pointer data type.

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;
    *ptr = 20;

    cout << "x: " << x << endl;
    cout << "Pointer points to: " << *ptr << endl;

    return 0;
}
```

## Control flow/Conditional: (if...else, switch...case)

1. Check if an integer number is positive or negative.
2. Check if an integer number is even or odd.
3. Check if an integer number is prime or not.
4. Program to check whether a person is eligible to vote or not.
5. Program to find the largest number of the three.
6. Write a C++ program to check whether a number is divisible by 5.
7. Write a C++ program to check Leap Year.
8. Write a C++ program showing the use of switch case.

### Solutions:

1. Check if an integer number is positive or negative.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num > 0)
        cout << "Positive" << endl;
    else if (num < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;
    return 0;
}
```

2. Check if an integer number is even or odd.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
    return 0;
}
```

3. Check if an integer number is prime or not.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    bool isPrime = true;

    if (num <= 1)
        isPrime = false;
    else {
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}
```

4. Program to check whether a person is eligible to vote or not.

```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    if (age >= 18)
        cout << "Eligible to Vote" << endl;
    else
        cout << "Not Eligible to Vote" << endl;
    return 0;
}
```

5. Program to find the largest number of the three.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << "Largest number: " << a << endl;
    else if (b >= a && b >= c)
        cout << "Largest number: " << b << endl;
    else
        cout << "Largest number: " << c << endl;
    return 0;
}
```

6. Write a C++ program to check whether a number is divisible by 5.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num % 5 == 0)
        cout << "Divisible by 5" << endl;
    else
        cout << "Not Divisible by 5" << endl;
    return 0;
}
```

7. Write a C++ program to check Leap Year.

```cpp
#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << "Leap Year" << endl;
    else
        cout << "Not a Leap Year" << endl;
    return 0;
}
```

8. Write a C++ program showing the use of switch case.

```cpp
#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day;

    switch (day) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday" << endl; break;
        case 5: cout << "Friday" << endl; break;
        case 6: cout << "Saturday" << endl; break;
        case 7: cout << "Sunday" << endl; break;
        default: cout << "Invalid day" << endl; break;
    }
    return 0;
}
```

## Loop: (for/while)

1. Display the first 10 natural numbers.
2. Calculate the sum of n integer numbers using loop.
3. Print even/odd numbers from n natural numbers.
4. Program to calculate the sum of even/odd numbers from n natural numbers.
5. Calculate factorial of an integer number n using loop.
6. Apply break and continue conditions in a loop.

### Solutions:

1. Display the first 10 natural numbers.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; ++i) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
```

2. Calculate the sum of n integer numbers using loop.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
```

3. Print even/odd numbers from n natural numbers.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "Even numbers: ";
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
```

4. Program to calculate the sum of even/odd numbers from n natural numbers.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, sumEven = 0, sumOdd = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }
    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;
    return 0;
}
```

5. Calculate factorial of an integer number n using loop.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    cout << "Factorial: " << factorial << endl;
    return 0;
}
```

6. Apply break and continue conditions in a loop.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; ++i) {
        if (i == 5) {
            continue;
        }
        if (i == 8) {
            break;
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
```

## Recursion

1. Calculate factorial of an integer number.
2. Solve the tower of Hanoi problem.
3. Find the Fibonacci sequence in a given range.
4. Program to find the power of a number.

### Solutions:

1. Calculate factorial of an integer number.

```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << "Factorial: " << factorial(n) << endl;
    return 0;
}
```

2. Solve the tower of Hanoi problem.

```cpp
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    towerOfHanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
```

3. Find the Fibonacci sequence in a given range.

```cpp
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int range;
    cin >> range;
    for (int i = 0; i < range; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
```

4. Program to find the power of a number.

```cpp
#include <iostream>
using namespace std;

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

int main() {
    int base, exp;
    cin >> base >> exp;
    cout << "Power: " << power(base, exp) << endl;
    return 0;
}
```

## C++ Concepts (not limited to)

1. Write a C++ program that performs the basic I/O using the concepts of class and objects.
2. Write a C++ program that handles the students' records using the concepts of class and objects.
3. Write a C++ program that performs basic arithmetic operations using the concepts of class and objects.
4. Write a C++ program that calculates the CGPA for students using the concepts of class and objects.
5. Write a C++ program that illustrates function prototyping using the concepts of class and objects.
6. Write a C++ program that shows function overloading using the concepts of class and objects.
7. Write a C++ program that uses friend function using the concepts of class and objects.
8. Write a C++ program that shows the use(s) of different access specifiers using the concepts of data hiding.
9. Write a C++ program that illustrates the concepts of constructor and destructor.
10. Write a C++ program that shows constructor overloading concept.
11. Write a C++ program that illustrates the concepts of different inheritance(s) using class and objects.
12. Write a C++ program that exemplifies the use(s) of abstract class using the concepts of inheritance.
13. Write a C++ program that illustrates the concepts of run-time polymorphism using class and objects.
14. Write a C++ program that illustrates the concepts of compile-time polymorphism using class and objects.
15. Write a C++ program exemplifying the concept of exception handling.

### Solutions:

1. Write a C++ program that performs the basic I/O using the concepts of class and objects.

```cpp
#include <iostream>
using namespace std;

class Person {
public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }

private:
    string name;
    int age;
};

int main() {
    Person p;
    p.input();
    p.display();
    return 0;
}
```

2. Write a C++ program that handles the students' records using the concepts of class and objects.

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter student roll number: ";
        cin >> rollNumber;
    }

    void display() {
        cout << "Name: " << name << "\nRoll Number: " << rollNumber << endl;
    }

private:
    string name;
    int rollNumber;
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
```

3. Write a C++ program that performs basic arithmetic operations using the concepts of class and objects.

```cpp
#include <iostream>
using namespace std;

class Arithmetic {
public:
    void setValues(int a, int b) {
        x = a;
        y = b;
    }

    void add() {
        cout << "Sum: " << x + y << endl;
    }

    void subtract() {
        cout << "Difference: " << x - y << endl;
    }

    void multiply() {
        cout << "Product: " << x * y << endl;
    }

    void divide() {
        if (y != 0)
            cout << "Quotient: " << x / y << endl;
        else
            cout << "Division by zero error" << endl;
    }

private:
    int x, y;
};

int main() {
    Arithmetic a;
    a.setValues(10, 5);
    a.add();
    a.subtract();
    a.multiply();
    a.divide();
    return 0;
}
```

4. Write a C++ program that calculates the CGPA for students using the concepts of class and objects.

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    void inputGrades() {
        cout << "Enter the number of subjects: ";
        int numSubjects;
        cin >> numSubjects;
        grades = new float[numSubjects];
        totalSubjects = numSubjects;
        float total = 0;
        for (int i = 0; i < numSubjects; ++i) {
            cout << "Enter grade for subject " << i + 1 << ": ";
            cin >> grades[i];
            total += grades[i];
        }
        cgpa = total / numSubjects;
    }

    void displayCGPA() {
        cout << "CGPA: " << cgpa << endl;
    }

    ~Student() {
        delete[] grades;
    }

private:
    float *grades;
    int totalSubjects;
    float cgpa;
};

int main() {
    Student s;
    s.inputGrades();
    s.displayCGPA();
    return 0;
}
```

5. Write a C++ program that illustrates function prototyping using the concepts of class and objects.

```cpp
#include <iostream>
using namespace std;

class Math {
public:
    int add(int, int);
    int subtract(int, int);
};

int Math::add(int a, int b) {
    return a + b;
}

int Math::subtract(int a, int b) {
    return a - b;
}

int main() {
    Math m;
    cout << "Sum: " << m.add(10, 5) << endl;
    cout << "Difference: " << m.subtract(10, 5) << endl;
    return 0;
}
```

6. Write a C++ program that shows function overloading using the concepts of class and objects.

```cpp
#include <iostream>
using namespace std;

class Display {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }

    void show(double d) {
        cout << "Double: " << d << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Display d;
    d.show(10);
    d.show(15.5);
    d.show("Hello");
    return 0;
}
```

7. Write a C++ program that uses friend function using the concepts of class and objects.

```cpp
#include <iostream>
using namespace std;

class Box {
public:
    Box(int l, int w) : length(l), width(w) {}
    friend void displayArea(Box b);

private:
    int length;
    int width;
};

void displayArea(Box b) {
    cout << "Area: " << b.length * b.width << endl;
}

int main() {
    Box b(10, 5);
    displayArea(b);
    return 0;
}
```

8. Write a C++ program that shows the use(s) of different access specifiers using the concepts of data hiding.

```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    int publicVar;
    void publicMethod() {
        cout << "Public Method" << endl;
    }

private:
    int privateVar;
    void privateMethod() {
        cout << "Private Method" << endl;
    }

protected:
    int protectedVar;
    void protectedMethod() {
        cout << "Protected Method" << endl;
    }
};

int main() {
    MyClass obj;
    obj.publicVar = 10;
    obj.publicMethod();

    return 0;
}
```

9. Write a C++ program that illustrates the concepts of constructor and destructor.

```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called" << endl;
    }

    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    MyClass obj;
    return 0;
}
```

10. Write a C++ program that shows constructor overloading concept.

```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Default Constructor" << endl;
    }

    MyClass(int a) {
        cout << "Parameterized Constructor with value: " << a << endl;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2(10);
    return 0;
}
```

11. Write a C++ program that illustrates the concepts of different inheritance(s) using class and objects.

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    void baseMethod() {
        cout << "Base class method" << endl;
    }
};

class Derived : public Base {
public:
    void derivedMethod() {
        cout << "Derived class method" << endl;
    }
};

class ProtectedDerived : protected Base {
public:
    void protectedDerivedMethod() {
        cout << "Protected Derived class method" << endl;
    }
};

class PrivateDerived : private Base {
public:
    void privateDerivedMethod() {
        cout << "Private Derived class method" << endl;
    }
};

int main() {
    Derived d;
    d.baseMethod();
    d.derivedMethod();

    ProtectedDerived pd;
    pd.protectedDerivedMethod();

    PrivateDerived pvt;
    pvt.privateDerivedMethod();

    return 0;
}
```

12. Write a C++ program that exemplifies the use(s) of abstract class using the concepts of inheritance.

```cpp
#include <iostream>
using namespace std;

class AbstractBase {
public:
    virtual void show() = 0;
};

class Derived : public AbstractBase {
public:
    void show() override {
        cout << "Derived class implementation of abstract method" << endl;
    }
};

int main() {
    Derived d;
    d.show();
    return 0;
}
```

13. Write a C++ program that illustrates the concepts of run-time polymorphism using class and objects.

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display" << endl;
    }
};

int main() {
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->display();
    return 0;
}
```

14. Write a C++ program that illustrates the concepts of compile-time polymorphism using class and objects.

```cpp
#include <iostream>
using namespace std;

class Print {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }

    void show(double d) {
        cout << "Double: " << d << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;
    p.show(10);
    p.show(15.5);
    p.show("Hello");
    return 0;
}
```

15. Write a C++ program exemplifying the concept of exception handling.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw "Division by zero!";
        }
        cout << "Result: " << a / b << endl;
    } catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    }

    return 0;
}
```

## Java Basics

1. Write a java program that performs the basic I/O operations.
2. Write a java program that performs the basic arithmetic operations.
3. Write a java program that performs the basic conditional (if...else) operations.

### Solutions:

1. Write a java program that performs the basic I/O operations.

```java
import java.util.Scanner;

public class BasicIO {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = scanner.nextLine();

        System.out.print("Enter your age: ");
        int age = scanner.nextInt();

        System.out.println("Name: " + name);
        System.out.println("Age: " + age);

        scanner.close();
    }
}
```

2. Write a java program that performs the basic arithmetic operations.

```java
import java.util.Scanner;

public class BasicArithmetic {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int num1 = scanner.nextInt();

        System.out.print("Enter second number: ");
        int num2 = scanner.nextInt();

        System.out.println("Sum: " + (num1 + num2));
        System.out.println("Difference: " + (num1 - num2));
        System.out.println("Product: " + (num1 * num2));
        System.out.println("Quotient: " + (num1 / num2));

        scanner.close();
    }
}
```

3. Write a java program that performs the basic conditional (if...else) operations.

```java
import java.util.Scanner;

public class BasicConditional {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        if (number > 0) {
            System.out.println("The number is positive.");
        } else if (number < 0) {
            System.out.println("The number is negative.");
        } else {
            System.out.println("The number is zero.");
        }

        scanner.close();
    }
}
```
