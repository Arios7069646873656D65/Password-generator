#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {

    const char *lowCase = "abcdefghijklmnopqrstuvxyz";
    const char *uppCase = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
    const char *numbers = "123456789";
    const char *charcters = "+*ç%&/()=?`!£;:_-.,^'><@|´~[]}{";


    char pool[100];
    strcpy(pool,lowCase);
    strcat(pool,uppCase);
    strcat(pool,numbers);
    strcat(pool,charcters);

    srand(time(NULL));

    int passlen;
   printf("Whats the length of your password ?\n");
    scanf("%d", &passlen);
    char password[passlen + 1];

    for (int i = 0; i < passlen; i++) {
        password[i] = pool[rand() % strlen(pool)];
    }


    password[passlen] = '\0';

    printf("Your generated password is : %s", password);


    return 0;
}