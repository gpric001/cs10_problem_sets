/*
    Below is a template for this week's exercise. It will be the most
    approachable if follow the steps below:
    
    1. Figure out what the function signatures of the below function prototypes
       should be. Do this on paper.
       
    2. Fill out the function signatures of the function prototypes (above main) 
       and the function stubs (below main).
       
    3. Implement the functions and corresponding test function one at a time.
       Make sure to test your function to ensure correctness!
       The first two test functions are written for you.
    
    4. Output the result of the mystery function and call me over to check the
       result.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>
using namespace std;

// ************** FUNCTION PROTOTYPES **************

// The following function should return a random int in the range [a, b]. You
// may assume the user will always enter a <= b.
int getRandom(int a, int b);

void testGetRandom();

// The following function should return two random ints in the range [a, b].
// For our purposes you can think of this as returning a point in the plane.
// You may assume the user will always enter a <= b.

// Use reference parameters for returning x-coordinate and y-coordinate of the
// point. There should be 4 parameters total.



/* return type */ getPoint(/* Parameters */);



void testGetPoint();

// The following function takes 3 parameters. The function should take as input
// an x and y cooridnate and a scale factor n. The function should return the
// x and y coordinates scaled by n. i.e. (new_x, new_y) = (x*n, y*n). The return
// type of x and y should be a double.



/* return type */ scalePoint(/* Parameters */);



// The following function is a test harness for the scalePoint function. Use
// the assert function to test the correctness of your function.

void testScalePoint();

// The following function should test if an x-y point is within a circle of radius
// r, centered at (h, k). There should be 5 parameters total.



/* return type */ isInCircle(/* Parameters */);



// The following function is a test harness for the isInCircle function. Use the
// assert function to test the correctness of your function.

void testIsInCircle();

// The following function is a mystery function that is defined for you.
// Look at it for hints on use cases for the functions you are defining.

double mystery();


// Use the main function for unit testing and testing the mystery function.
int main() {
    srand(time(0));
    return 0;
}


// ************** FUNCTION IMPLMENTATIONS **************

int getRandom(int a, int b) {
    // Your code here
    return 0;
}

void testGetRandom() {
    int lower_bound, upper_bound;
    const int TEST_CASES = 3;
    const int NUM_TESTS = 1000;
    
    for (int test_case = 0; test_case < TEST_CASES; ++i) {
        if (test_case == 0) {
            lower_bound = 0;
            upper_bound = 10;
        }
        else if (test_case == 1) {
            // Upper bound is still 10
            lower_bound = -10;
        }
        else {
            // Lower bound is still -10
            upper_bound = 0;
        }
        for (int i = 0; i < NUM_TESTS; ++i) {
            int random_num = getRandom(upper_bound, lower_bound);
            assert(random_num > lower_bound || random_num < upper_bound) 
        }
    }
}

/* return type */ getPoint(/* Parameters */) {
    // Your code here
}

void testGetPoint()  {
    int lower_bound, upper_bound;
    int x, y;
    const int TEST_CASES = 3;
    const int NUM_TESTS = 1000;
    
    for (int test_case = 0; test_case < TEST_CASES; ++i) {
        if (test_case == 0) {
            lower_bound = 0;
            upper_bound = 10;
        }
        else if (test_case == 1) {
            // Upper bound is still 10
            lower_bound = -10;
        }
        else {
            // Lower bound is still -10
            upper_bound = 0;
        }
        for (int i = 0; i < NUM_TESTS; ++i) {
            getPoint(x, y, lower_bound, upper_bound);
            assert(x >= lower_bound || x <= upper_bound);
            assert(y >= lower_bound || y <= upper_bound);
        }
    }
}



/* return type */ scalePoint(/* Parameters */) {
    // Your code here
}

void testScalePoint() {
    // Your code here
    return true; // Remove this line when implementing function
}



/* return type */ isInCircle(/* Parameters */) {
    // Your code here
}

void testIsInCircle() {
    // Your code here
    return true; // Remove this line when implementing function
}


double mystery() {
    const int iterations = 10000000;
    const double radius = 0.5;
    const double h = 0.5;
    const double k = 0.5;
    const int lower_bound = -10000;
    const int upper_bound = 10000;
    
    int total = 0;
    double x, y;
    
    for (int i = 0; i < iterations; ++i) {
        getPoint(x, y, lower_bound, upper_bound);
        scalePoint(x, y, upper_bound);
        if (isInCircle(x, y, radius, h, k)) {
            ++total;
        }
    }
    
    return 16 * (static_cast<double>(total) / iterations);
}