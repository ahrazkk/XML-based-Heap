#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

extern char* pop(char tag_identity[]);
extern void push(char tag_identity[]);
extern void isEmpty(int i);

int main(int argc, char* argv[]) {

    printf("Give tag below: \n\n");

    int ch;
    char tag_identity[100][100];
    int i = 0, j = 0;

    while ((ch = getchar()) != EOF) {
        if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/')) {
            continue;
        }




        if (ch == '<') {
            ch = getchar();

            if (ch == '\n') {
                ch = getchar();
            }

            if (ch == '/') {
                printf("\nclosed tag: \n");

                while ((ch = getchar()) != EOF && ch != '>') {
                    tag_identity[i][j++] = ch;
                }
		
                tag_identity[i][j] = '\0';
                if (i > 0 && i < 100) {
                    pop(tag_identity[i]);
		isEmpty(i);                
		} 
		else {
			isEmpty(i);
                    fprintf(stderr, "Error: pop() called on an empty stack.\n");
                    exit(1);
                }
                i++;
                j = 0;
            }
            else if (isalpha(ch)) {
                printf("\nopen tag: \n");
                tag_identity[i][j++] = ch;

                while ((ch = getchar()) != EOF && ch != '>') {
                    tag_identity[i][j++] = ch;
                }

                tag_identity[i][j] = '\0';
                printf("Tag label is #%d: %s \n", i, tag_identity[i]);
                push(tag_identity[i]);
                i++;
                j = 0;
            }
        }
    }

    exit(0);
}

