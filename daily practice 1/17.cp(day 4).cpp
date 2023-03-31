#include <stdio.h>
#include <string.h>
struct Song {
    char title[100];
    char artist[100];
    char album[100];
    int year;
};

void print_song(struct Song song) {
    printf("Title: %s, Artist: %s, Album: %s, Year: %d\n",
            song.title, song.artist, song.album, song.year);
}

int main() {
    struct Song my_song = {"Bohemian Rhapsody", "Queen", "A Night at the Opera", 1975};
    print_song(my_song);
    
    return 0;
}

