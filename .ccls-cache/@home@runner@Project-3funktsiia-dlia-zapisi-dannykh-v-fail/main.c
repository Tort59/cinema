#include <stdio.h>
#include <stdlib.h>
#define LEN 50

typedef struct
{
    char nickname[LEN];
    char password[LEN];
}user;

void  data_recording(char *str_1, char *str_2)
{
    FILE *def = fopen("file_users.txt", "a+");
    if(def != NULL)
    {
        fprintf(def, "1. %s\n", str_1);
        fprintf(def, "2. %s\n", str_2);
    }
    printf("registration completed successfully");
    fclose(def);
}
int main(void) 
{
    printf("login: ");
    char login[LEN];            // login
    scanf("%s", login);
    printf("password: ");
    char password[LEN];         // password
    scanf("%s", password);
    
    data_recording(login, password);

    return 0;
}