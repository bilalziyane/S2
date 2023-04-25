#include <cstdio>

const int MAX_CHAR = 256;

class CharSet {
public:
    CharSet() {
        for (int i = 0; i < MAX_CHAR; i++) {
            set[i] = false;
        }
        count = 0;
    }

    void add(char c) {
        if (!set[c]) {
            set[c] = true;
            count++;
        }
    }

    int size() {
        return count;
    }

    bool contains(char c) {
        return set[c];
    }

    void init() {
        currentIndex = 0;
        while (!set[currentIndex] && currentIndex < MAX_CHAR) {
            currentIndex++;
        }
    }

    bool existe() {
        return currentIndex < MAX_CHAR;
    }

    char prochain() {
        char c = currentIndex;
        currentIndex++;
        while (!set[currentIndex] && currentIndex < MAX_CHAR) {
            currentIndex++;
        }
        return c;
    }

private:
    bool set[MAX_CHAR];
    int count;
    int currentIndex;
};

int main() {
    CharSet charSet;
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        charSet.add(word[i]);
    }

    printf("Number of distinct characters: %d\n", charSet.size());

    charSet.init();
    while (charSet.existe()) {
        printf("%c ", charSet.prochain());
    }

    printf("\n");

    return 0;
}
