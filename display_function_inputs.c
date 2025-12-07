#include <stdio.h>

// Function declaration
// This function takes: 
// 1) an int (j)
// 2) a double (k)
// 3) a char (q)
// and returns a double value
double myFunction(int j, double k, char q);

int main(void) {
    int a = 1;       // integer variable
    double b = 1.0;  // double variable
    char c = 'p';    // character variable

    // Loop runs from i = 0 to i = 4 (total 5 times)
    for (int i = 0; i <= 4; i++) {

        // Calling the function and storing the returned value in 'd'
        // Here, we pass:
        //   a  (int)
        //   b * i (double)
        //   c  (char)
        double d = myFunction(a, b * i, c);

        // You can print the returned value if you want
        // printf("Returned: %lf\n", d);
    }

    return 0; // Program ends
}

// Function definition
double myFunction(int j, double k, char q) {
    // Print the received values
    printf("Function received: %d, %lf, %c\n", j, k, q);

    // Return the double value 'k'
    // You can change this to return any double value you want
    return k;
}
