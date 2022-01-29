#include <stdio.h>

  int main() {
        int num, large = 0, rem = 0;

        /* get the input from the user */
        scanf("%d", &num);

        /* finding the largest digit of the given input */
        while (num > 0) {
                rem = num % 10;

                if (rem > large) {
                        large = rem;
                }

                num = num / 10;
        }

        /* print the largest digit of the number */
        printf("%d
", large);
        return 0;
  }