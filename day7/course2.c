#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char courseName[50] = "";
    char courseCode[20] = "";
    int courseExists = 0;  // 0 = no course stored, 1 = course stored

    while (1) {
        printf("\n----- Course Management -----\n");
        printf("1. Add Course\n");
        printf("2. Edit Course\n");
        printf("3. Delete Course\n");
        printf("4. Display Course\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear leftover newline

        if (choice == 1) {
            printf("Enter Course Name: ");
            fgets(courseName, sizeof(courseName), stdin);

            printf("Enter Course Code: ");
            fgets(courseCode, sizeof(courseCode), stdin);

            courseExists = 1;
            printf("\nCourse added successfully!\n");
        }

        else if (choice == 2) {
            if (!courseExists) {
                printf("No course found to edit.\n");
            } else {
                printf("Enter New Course Name: ");
                fgets(courseName, sizeof(courseName), stdin);

                printf("Enter New Course Code: ");
                fgets(courseCode, sizeof(courseCode), stdin);

                printf("\nCourse edited successfully!\n");
            }
        }

        else if (choice == 3) {
            if (!courseExists) {
                printf("No course to delete.\n");
            } else {
                courseExists = 0;
                courseName[0] = '\0';
                courseCode[0] = '\0';
                printf("Course deleted successfully!\n");
            }
        }

        else if (choice == 4) {
            if (!courseExists) {
                printf("No course to display.\n");
            } else {
                printf("\n----- Course Details -----\n");
                printf("Course Name: %s", courseName);
                printf("Course Code: %s", courseCode);
            }
        }

        else if (choice == 5) {
            printf("Exiting...\n");
            break;
        }

        else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
