#include <iostream>

using namespace std;

//1

struct Point {
    double x;
    double y;
};

double distance(Point a, Point b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}


//2

struct Fraction {
    int numerator;
    int denominator;
};

int gcdFraction(int a, int b) {
    if (b == 0)
        return a;
    return gcdFraction(b, a % b);
}

Fraction reduceFraction(Fraction f) {
    int divisor = gcdFraction(abs(f.numerator), abs(f.denominator));

    if (divisor != 0) {
        f.numerator /= divisor;
        f.denominator /= divisor;
    }

    if (f.denominator < 0) {
        f.denominator = -f.denominator;
        f.numerator = -f.numerator;
    }

    return f;
}

Fraction addFraction(Fraction a, Fraction b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    return reduceFraction(result);
}

Fraction subFraction(Fraction a, Fraction b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator - b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    return reduceFraction(result);
}

Fraction mulFraction(Fraction a, Fraction b) {
    Fraction result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    return reduceFraction(result);
}

Fraction divFraction(Fraction a, Fraction b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator;
    result.denominator = a.denominator * b.numerator;
    return reduceFraction(result);
}

void printFraction(Fraction f) {
    if (abs(f.numerator) >= abs(f.denominator) && f.denominator != 0) {
        int whole = f.numerator / f.denominator;
        int rem = abs(f.numerator % f.denominator);

        if (rem == 0)
            cout << whole << "\n";
        else
            cout << whole << " " << rem << "/" << abs(f.denominator) << "\n";
    }
    else {
        cout << f.numerator << "/" << f.denominator << "\n";
    }
}


//3

struct WashingMachine {
    char brand[30];
    char color[20];
    double width;
    double length;
    double height;
    double power;
    int spinSpeed;
    int maxTemperature;
};

void printWashingMachine(WashingMachine wm) {
    cout << "Brand: " << wm.brand << "\n";
    cout << "Color: " << wm.color << "\n";
    cout << "Dimensions: " << wm.width << "x" << wm.length << "x" << wm.height << " cm\n";
    cout << "Power: " << wm.power << " kW\n";
    cout << "Spin speed: " << wm.spinSpeed << " rpm\n";
    cout << "Max temperature: " << wm.maxTemperature << " C\n";
}


//4

struct Animal {
    char name[30];
    char species[30];
    char nickname[30];
};

void fillAnimal(Animal& a, const char* name, const char* species, const char* nickname) {
    strcpy(a.name, name);
    strcpy(a.species, species);
    strcpy(a.nickname, nickname);
}

void printAnimal(Animal a) {
    cout << "Name: " << a.name << ", Species: " << a.species << ", Nickname: " << a.nickname << "\n";
}

void makeSound(Animal a) {
    if (strcmp(a.species, "Dog") == 0)
        cout << a.nickname << " says: Woof!\n";
    else if (strcmp(a.species, "Cat") == 0)
        cout << a.nickname << " says: Meow!\n";
    else if (strcmp(a.species, "Cow") == 0)
        cout << a.nickname << " says: Moo!\n";
    else
        cout << a.nickname << " makes an unknown sound.\n";
}


//5

union IntUnion {
    int signedValue;
    unsigned int unsignedValue;
};


//6

struct Student {
    char fullName[50];
    unsigned grades : 1;
    unsigned grade2 : 1;
    unsigned grade3 : 1;
    unsigned grade4 : 1;
    unsigned grade5 : 1;
    unsigned grade6 : 1;
    unsigned grade7 : 1;
    unsigned grade8 : 1;
    unsigned grade9 : 1;
    unsigned grade10 : 1;
};

void fillStudent(Student& s, const char* name) {
    strcpy(s.fullName, name);
    s.grades = 0;
    s.grade2 = 0;
    s.grade3 = 0;
    s.grade4 = 0;
    s.grade5 = 0;
    s.grade6 = 0;
    s.grade7 = 0;
    s.grade8 = 0;
    s.grade9 = 0;
    s.grade10 = 0;
}

void printStudent(Student s) {
    cout << "Name: " << s.fullName << ", Grades: ";
    cout << s.grades << s.grade2 << s.grade3 << s.grade4 << s.grade5;
    cout << s.grade6 << s.grade7 << s.grade8 << s.grade9 << s.grade10 << "\n";
}

double averageGrade(Student s) {
    int sum = s.grades + s.grade2 + s.grade3 + s.grade4 + s.grade5 +
        s.grade6 + s.grade7 + s.grade8 + s.grade9 + s.grade10;
    return (double)sum / 10.0;
}

void setGrade(Student& s, int subjectIndex, bool passed) {
    switch (subjectIndex) {
    case 1: s.grades = passed; break;
    case 2: s.grade2 = passed; break;
    case 3: s.grade3 = passed; break;
    case 4: s.grade4 = passed; break;
    case 5: s.grade5 = passed; break;
    case 6: s.grade6 = passed; break;
    case 7: s.grade7 = passed; break;
    case 8: s.grade8 = passed; break;
    case 9: s.grade9 = passed; break;
    case 10: s.grade10 = passed; break;
    }
}

void printStudentList(Student* students, int count) {
    for (int i = 0; i < count; i++)
        cout << i << ". " << students[i].fullName << "\n";
}

void printStudentGrades(Student* students, int count, int index) {
    if (index >= 0 && index < count)
        printStudent(students[index]);
}

void printDebtors(Student* students, int count) {
    cout << "Debtors (with at least one failed subject):\n";

    for (int i = 0; i < count; i++) {
        if (averageGrade(students[i]) < 1.0)
            cout << students[i].fullName << "\n";
    }
}


int main() {
    cout << "=== Task 1: Points ===\n";

    Point p1 = { 1.0, 2.0 };
    Point p2 = { 4.0, 6.0 };

    cout << "Distance between points: " << distance(p1, p2) << "\n";

    cout << "\n=== Task 2: Fractions ===\n";

    Fraction f1 = { 3, 4 };
    Fraction f2 = { 1, 6 };

    cout << "Fraction 1: ";
    printFraction(f1);
    cout << "Fraction 2: ";
    printFraction(f2);

    cout << "Sum: ";
    printFraction(addFraction(f1, f2));

    cout << "Difference: ";
    printFraction(subFraction(f1, f2));

    cout << "Product: ";
    printFraction(mulFraction(f1, f2));

    cout << "Quotient: ";
    printFraction(divFraction(f1, f2));

    Fraction improper = { 10, 4 };
    cout << "Improper fraction 10/4 reduced: ";
    printFraction(improper);

    cout << "\n=== Task 3: Washing Machine ===\n";

    WashingMachine wm;
    strcpy(wm.brand, "Redmi");
    strcpy(wm.color, "Black");
    wm.width = 60;
    wm.length = 55;
    wm.height = 85;
    wm.power = 2.1;
    wm.spinSpeed = 1200;
    wm.maxTemperature = 90;

    printWashingMachine(wm);

    cout << "\n=== Task 4: Animal ===\n";

    Animal dog;
    fillAnimal(dog, "Labrador", "Dog", "Rex");
    printAnimal(dog);
    makeSound(dog);

    Animal cat;
    fillAnimal(cat, "Siamese", "Cat", "Whiskers");
    printAnimal(cat);
    makeSound(cat);

    cout << "\n=== Task 5: Union Int ===\n";

    IntUnion val;
    val.signedValue = -1;

    cout << "Signed: " << val.signedValue << "\n";
    cout << "Unsigned: " << val.unsignedValue << "\n";

    cout << "\n=== Task 6: Students ===\n";

    Student single;
    fillStudent(single, "Sahirov Yaroslav");
    setGrade(single, 1, true);
    setGrade(single, 2, true);
    setGrade(single, 3, false);

    printStudent(single);
    cout << "Average grade: " << averageGrade(single) << "\n";

    const int studentCount = 3;
    Student students[studentCount];

    fillStudent(students[0], "Monin Danylo");
    fillStudent(students[1], "Slesarev Lev");
    fillStudent(students[2], "Salenko Mykola");

    setGrade(students[0], 1, true);
    setGrade(students[0], 2, true);
    setGrade(students[0], 3, true);

    setGrade(students[1], 1, true);
    setGrade(students[1], 2, false);

    setGrade(students[2], 1, false);
    setGrade(students[2], 2, false);

    cout << "\nStudent list:\n";
    printStudentList(students, studentCount);

    cout << "\nGrades of student 0:\n";
    printStudentGrades(students, studentCount, 0);

    cout << "\n";
    printDebtors(students, studentCount);
}