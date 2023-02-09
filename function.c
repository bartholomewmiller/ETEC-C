#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#define EMP_AMT 10
typedef struct Employee{
    int id;
    char name[25], gender[8], position[20], address[50], telephone[15], email[45];
    float salary, rate, hour, tax;
    double total_income, min, max;
} Employee;
void option();
void output(int n, Employee const *em[EMP_AMT]);
int main()
{
    int n, i, op;
    char sop;
    char sname[25];
    bool c;

    Employee em[EMP_AMT];
    do{
        option();
        printf("\nChoose one option: ");scanf("%d", &op);
        switch(op)
        {
            case 1:{
                printf("Input Number of Employee: ");scanf("%d", &n);
                for(int i = 0; i < n; i++)
                    {
                        printf("\n=========================== INPUT #%d===========================\n", i+1);
                        printf("Input ID: ");scanf("%d", &em[i].id);
                        printf("Input Name: ");fflush(stdin);scanf("%s", &em[i].name);
                        printf("Input Gender: ");fflush(stdin);scanf("%s", &em[i].gender);
                        printf("Input Position: ");fflush(stdin);scanf("%s", &em[i].position);
                        printf("Input Address: ");fflush(stdin);scanf("%s", &em[i].address);
                        printf("Input Telephone: ");fflush(stdin);scanf("%s", &em[i].telephone);
                        printf("Input Email: ");fflush(stdin);scanf("%s", &em[i].email);
                    }
            } break;
            case 2:{
                Employee em1;
                em1 = output(n, &em[EMP_AMT]);
                output(n, &em[EMP_AMT]);
            }

        }


    } while(op != 13);
    


    return 0;
}
void option()
{
    printf("=========================== OPTION ===========================\n");
    printf("1. Input\n");
    printf("2. Output\n");
    printf("3. Search\n");
    printf("4. Update\n");
    printf("5. Delete\n");
    printf("6. Insert\n");
    printf("7. Sort\n");
    printf("8. Add\n");
    printf("9. Minimum Total Income\n");
    printf("10. Maximum Total Income\n");
    printf("11. Total Money Salary All Employees\n");
    printf("12. Clear\n");
    printf("13. Exit\n");

}
void output(int n, Employee const *em[EMP_AMT])
{
    for(int i = 0; i < n; i++)
    {
        printf("\n=========================== OUTPUT #%d ===========================\n", i+1);
        printf("ID: %d\n", em[i]->id);
        printf("Name: %s\n", em[i]->name);
        printf("Gender: %s\n", em[i]->gender);
        printf("Position: %s\n", em[i]->position);
        printf("Address: %s\n", em[i]->address);
        printf("Telephone Number: %s\n", em[i]->telephone);
        printf("Email: %s\n", em[i]->email);
    }
}
// Employee input1(int n, Employee em[EMP_AMT])
// {
//     for(int i = 0; i < n; i++)
//     {
//         printf("Input Name: ");fgets(em[i].name, sizeof(em[i].name), stdin);
//         printf("Input Gender: ");fgets(em[i].gender, sizeof(em[i].gender), stdin);
//         printf("Input Position: ");fgets(em[i].position, sizeof(em[i].position), stdin);
//         printf("Input Address: ");fgets(em[i].address, sizeof(em[i].address), stdin);
//         printf("Input Telephone: ");fgets(em[i].telephone, sizeof(em[i].telephone), stdin);
//         printf("Input Email: ");fgets(em[i].email, sizeof(em[i].email), stdin);
//     }
// }
