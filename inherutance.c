#include <stdio.h>
#include <string.h>

// Base structure
struct Person {
    char name[50];
    int age;
};

// Derived structure (inherits Person)
struct Student {
    struct Person person; // Inheritance by composition
    int rollNumber;
    float marks;
};

int main() {
    struct Student s1;

    // Assigning values to base struct members
    strcpy(s1.person.name, "Alice");
    s1.person.age = 20;

    // Assigning values to derived struct members
    s1.rollNumber = 101;
    s1.marks = 89.5;

    // Accessing all members
    printf("Name: %s\n", s1.person.name);
    printf("Age: %d\n", s1.person.age);
    printf("Roll Number: %d\n", s1.rollNumber);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}