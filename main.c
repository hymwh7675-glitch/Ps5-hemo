#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    char pkg_url[256];
} Game;

void display_store(Game games[], int count) {
    printf("=== PS5 Store / Library ===\n");
    for (int i = 0; i < count; i++) {
        printf("[%d] %s\n", i + 1, games[i].name);
    }
    printf("===========================\n");
}

int main() {
    Game store_games[] = {
        {"Game 1", "http://example.com/game1.pkg"},
        {"Game 2", "http://example.com/game2.pkg"}
    };
    int total_games = sizeof(store_games) / sizeof(store_games[0]);

    display_store(store_games, total_games);
    
    return 0;
}

