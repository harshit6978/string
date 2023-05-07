#include <stdio.h>
#include <string.h>


int main() {
    char email[50];
    char password[50];

 
    char Email[] = "harshit12@gmail.com";
    char Password[] = "password123";

 
 			printf("harshit12@gmail.com\n",Email);
			printf("password123\n",Password);
			
			
    printf("Enter your email: ");
    scanf("%s", email);

    printf("Enter your password: ");
    scanf("%s", password);

   
    if (strcmp(email, Email) == 0 && strcmp(password, Password) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid email or password. Please try again.\n");
    }

    return 0;
}

