#include <stdio.h>
#include <string.h>
#define PASSWORDSIZE 8

int main() {
    
    char truePassword[PASSWORDSIZE] = "Password";
    
    char password[PASSWORDSIZE];
    scanf("%s", password);
    
    if (strcmp(password, truePassword) == 0)
        printf("The password is valid\n");
    else
        printf("The password is invalid\n" );
    
    return 0;
}
    

