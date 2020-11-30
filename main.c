#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int main() {


    int input_numbers[15];

    printf("how many numbers do you want to check?");
    int numbers = 0;
    scanf_s("%d", &numbers);


    for (int i = 0; i < numbers; i++) {
        printf("Enter the numbers");
        scanf_s("%d", &input_numbers[i]);
    }

    int k;

    for (int i = 0; i < numbers; i++) {
        k = 0;
        for (int o = 0; o < numbers; o++)
        {
            if (abs(input_numbers[i]) == abs(input_numbers[o]))
            {
                k+=1;
                
             


            }

        }
        if (k == 1) {
            printf("%d not passed\n", input_numbers[i]);
        }

    }

cout << "Hello lol";


}