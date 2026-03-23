#include "structures.h"

void testStack() {
    Stack s;
    initStack(&s);
    char word[MAX];
    
    printf("\n--- Anti-Duplicate Tool (STACK) ---\n");
    printf("Enter a word (e.g., abbaca): ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        if (!isStackEmpty(&s) && s.data[s.top] == word[i]) {
            pop(&s);
        } else {
            push(&s, word[i]);
        }
    }

    printf("Result after processing: ");
    for (int i = 0; i <= s.top; i++) {
        printf("%c", s.data[i]);
    }
    printf("\n");
}

void testQueue() {
    Queue q;
    initQueue(&q);
    char word[MAX];

    printf("\n--- Input Buffer Tool (QUEUE) ---\n");
    printf("Enter a sequence of characters: ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        enqueue(&q, word[i]);
    }

    printf("Buffer Output (FIFO order): ");
    while (!isQueueEmpty(&q)) {
        printf("%c ", dequeue(&q));
    }
    printf("\n");
}

void testDeque() {
    Deque d;
    initDeque(&d);
    char word[MAX];
    bool isPal = true;

    printf("\n--- Palindrome Analyzer (DEQUE) ---\n");
    printf("Enter a word to check: ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        insertLast(&d, word[i]);
    }

    while (!isDequeEmpty(&d) && d.front != d.rear) {
        if (deleteFront(&d) != deleteLast(&d)) {
            isPal = false;
            break;
        }
    }

    if (isPal) printf("Result: It is a palindrome!\n");
    else printf("Result: It is NOT a palindrome.\n");
}

int main() {
    int choice;

    do {
        printf("\n==================================\n");
        printf("   TEXT PROCESSOR - DATA STRUCT   \n");
        printf("==================================\n");
        printf("1. Remove Duplicates (STACK)\n");
        printf("2. Input Buffer (QUEUE)\n");
        printf("3. Check Palindrome (DEQUE)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n'); 
            continue;
        }

        switch (choice) {
            case 1: testStack(); break;
            case 2: testQueue(); break;
            case 3: testDeque(); break;
            case 4: printf("Goodbye!\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}