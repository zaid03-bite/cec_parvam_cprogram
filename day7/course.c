#include <stdio.h>
#include <string.h>

#define MAX 50     // Maximum number of courses
#define LEN 50     // Maximum length of course name/code

// Structure for course
typedef struct {
    char code[LEN];
    char name[LEN];
} Course;

// Array of courses
Course courses[MAX];
int count = 0;

// Function prototypes
void addCourse();
void displayCourses();
void editCourse();
void deleteCourse();

int main() {
    int choice;

    do {
        printf("\n--- Course Manager ---\n");
        printf("1. Add Course\n");
        printf("2. Display Courses\n");
        printf("3. Edit Course\n");
        printf("4. Delete Course\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addCourse(); break;
            case 2: displayCourses(); break;
            case 3: editCourse(); break;
            case 4: deleteCourse(); break;
            case 0: printf("\nExiting...\n"); break;
            default: printf("\nInvalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}

void addCourse() {
    if (count >= MAX) {
        printf("\nCourse list is full!\n");
        return;
    }

    printf("\n--- Add Course ---\n");
    printf("Enter Course Code: ");
    scanf("%s", courses[count].code);

    printf("Enter Course Name: ");
    scanf("%s", courses[count].name);

    count++;
    printf("Course added successfully!\n");
}

void displayCourses() {
    if (count == 0) {
        printf("\nNo courses available.\n");
        return;
    }

    printf("\n--- Course List ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s - %s\n", i + 1, courses[i].code, courses[i].name);
    }
}

void editCourse() {
    if (count == 0) {
        printf("\nNo courses to edit.\n");
        return;
    }

    int index;
    displayCourses();

    printf("\nEnter course number to edit: ");
    scanf("%d", &index);

    if (index < 1 || index > count) {
        printf("Invalid course number!\n");
        return;
    }

    index--; // convert to array index

    printf("Enter NEW Course Code: ");
    scanf("%s", courses[index].code);

    printf("Enter NEW Course Name: ");
    scanf("%s", courses[index].name);

    printf("Course updated!\n");
}

void deleteCourse() {
    if (count == 0) {
        printf("\nNo courses to delete.\n");
        return;
    }

    int index;
    displayCourses();

    printf("\nEnter course number to delete: ");
    scanf("%d", &index);

    if (index < 1 || index > count) {
        printf("Invalid course number!\n");
        return;
    }

    index--; // convert to array index

    // Shift all courses up by one
    for (int i = index; i < count - 1; i++) {
        courses[i] = courses[i + 1];
    }

    count--;
    printf("Course deleted!\n");
}
