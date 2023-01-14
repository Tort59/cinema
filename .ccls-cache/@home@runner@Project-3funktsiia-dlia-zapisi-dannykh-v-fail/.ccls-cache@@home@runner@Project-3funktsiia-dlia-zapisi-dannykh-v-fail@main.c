#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 50
#define COUNT 100

typedef struct
{
    char login[LEN];
    char password[LEN];
}users;

void storing_user_data_in_a_structure(char *str, char *str_1, users *save)
{
    printf("fdfg    %s", save[1].login);
}
// void authorization_check(char *str, char *str_1, int len)
// {
    
// }
void writing_to_file(char *str, char *str_1)
{
    FILE *def = fopen("file_users.txt", "a+");
    if(def != NULL)
    {
        fputs("1. ", def);
        fputs(str, def);
        fputs("\n", def);
        fputs("2. ", def);
        fputs(str_1, def);
        fputs("\n", def);
    }
    fclose(def);
}

    // Я ТУПОЙ!!!
int main(void) 
{
    users user_data[COUNT];
    char login[LEN], password[LEN];
    printf("Enter login:\n");
    scanf("%s", login);
    printf("Enter password:\n");
    scanf("%s", password);
    strcpy(user_data[1].login, login);
    printf("%s", user_data[1].login);
    storing_user_data_in_a_structure("qwe", "qwe", user_data);
    writing_to_file(login, password);
    return 0;
}