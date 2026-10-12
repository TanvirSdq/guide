#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char line[100], name[50], city_club[30], year[5], jer[10];
    
    if (!fgets(line, sizeof(line), stdin)) return 1;
    line[strcspn(line, "\n")] = '\0';

    // Parse the input line using sscanf
    if (sscanf(line, "%[^-]-%[^#]#%[^*]*%s", name, city_club, year, jer) != 4) {
        return 1; // Handle invalid input
    }

    // Extract Last Name
    char *last = strrchr(name, ' ');
    last = (last) ? last + 1 : name;

    // Extract City and Club
    int len = strlen(city_club);
    char *club_str = city_club + len - 3;
    char city_str[4];
    strncpy(city_str, city_club, 3);
    city_str[3] = '\0';

    // Print ID
    printf("ID: %s", jer);
    for(int i=0; club_str[i]; i++) putchar(toupper(club_str[i]));
    printf("%s", year + 2);
    for(int i=0; city_str[i]; i++) putchar(toupper(city_str[i]));
    printf("\n");

    // Print Email
    for(int i=0; last[i]; i++) putchar(tolower(last[i]));
    for(int i=0; jer[i]; i++) putchar(tolower(jer[i]));
    printf("@");
    for(int i=0; club_str[i]; i++) putchar(tolower(club_str[i]));
    printf(".league.bd\n");

    return 0;
}