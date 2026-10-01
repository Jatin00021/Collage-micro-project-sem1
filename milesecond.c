#include <stdio.h>

struct Student {
    char name[50];
    char enrollNo[50];
    char branch[50];
};

int main() {
    int choice;
    // Mam ye only interface hai milestone 2 ke liye, database aur file handling milestone 3 me implement hoga

    struct Student dummy = {"Vivek", "0901CS260000", "CSE"};

    printf("\n=== MITS SDMS PORTAL (MILESTONE 2) ===\n");
    printf("1. Admin Panel (Add Data)\n");
    printf("2. Faculty Panel (View List)\n");
    printf("3. Student Panel (View Profile)\n");
    printf("4. Exit\n");
    
    printf("Enter choice: ");
    scanf("%d", &choice);

    // Sirf basic if-elseka use hai, koi complex loop nahi hai kyonki mam abhi jyada nahi study kiya
    if(choice == 1) {
        printf("\n[Admin] Input will be linked in Milestone 3.\n");
    } 
    else if(choice == 2) {
        printf("\n[Faculty] Micro project status: Work in Progress for milestone 3.\n");
    } 
    else if(choice == 3) {
        printf("\n[Student] Micro project status: Work in Progress for milestone 3.\n");
    } 
    else {
        printf("\nExiting system...\n");
    }

    return 0;
}