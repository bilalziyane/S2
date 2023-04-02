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

private:
    bool set[MAX_CHAR];
    int count;
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

    return 0;
}
