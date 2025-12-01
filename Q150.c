#include <stdio.h>
#include <string.h>

 
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
     
    struct Student s1;

    
    struct Student *ptr;
    ptr = &s1;
 
    strcpy(ptr->name, "Alice");  
    ptr->age = 20;               
    ptr->marks = 88.5;           

    
    printf("Student Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
