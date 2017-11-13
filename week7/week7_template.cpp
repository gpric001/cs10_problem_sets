/*
    Fill out the following template. Pay attention to the comments above the
    function prototypes for some hints on what the function parameters should
    be. Fill out the file in the following order:
    
    1. Figure out what the function signatures are and fill out the function
       prototypes and function stubs.
       
    2. Start implementing the functions one by one. Implmement both the 
       function itself and the test harness for the function. Test your
       functions using the test harness.
       
    3. For further hints try looking at the mystery function for a use case for
       some of the functions you are implementing.
       
    4. If you need help or are stuck at all please RAISE YOUR HAND.
    
    5. The goal is for you to output the correct value for the mystery function.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// ************** FUNCTION PROTOTYPES **************

// The following function should return a random double in the range [a, b]
int getRandom(int a, int b); // The first signature is done for you, the rest are up to you.

// The following function is a test harness for the getRandom function. Return
// true if your implmentation passes all tests and false otherwise.

bool testGetRandom();

// The following function should return two random doubles in the range [a, b].
// For our purposes you can think of this as returning a point in the plane
// Hint: Use reference parameters

/* return type */ getPoint(/* Parameters */);

// The following function is a test harness for the getPoint function. Return
// true if your implmentation passes all tests and false otherwise.

bool testGetPoint();

// The following function scales an x-y point down by a factor n. This is
// equivalent to (scaled_x, scaled_y) = (x/n, y/n)

/* return type */ scalePoint(/* Parameters */);

// The following function is a test harness for the scalePoint function. Return
// true if your implmentation passes all tests and false otherwise.

bool testScalePoint();

// The following function should test if an x-y point is within a circle of radius
// r, centered at (h, k).

/* return type */ isInCircle(/* Parameters */);

// The following function is a test harness for the isInCircle function. Return
// true if your implmentation passes all tests and false otherwise.

bool testIsInCircle();

// The following function is a mystery function that is defined for you.
// Look at it for hints on use cases for the functions you are defining.

double mystery();


// Use the main function for unit testing and testing the mystery function.
int main() {
    
    return 0;
}


// ************** FUNCTION IMPLMENTATIONS **************

int getRandom(int a, int b) {
    // Your code here
    return 0;
}

bool testGetRandom() {
    // Your code here
    return true; // Remove this line when implementing function
}

/* return type */ getPoint(/* Parameters */) {
    // Your code here
}

bool testGetPoint()  {
    // Your code here
    return true; // Remove this line when implementing function
}

/* return type */ scalePoint(/* Parameters */);

// The following function is a test harness for the scalePoint function. Return
// true if your implmentation passes all tests and false otherwise.

bool testScalePoint() {
    // Your code here
    return true; // Remove this line when implementing function
}

/* return type */ isInCircle(/* Parameters */) {
    // Your code here
}

bool testIsInCircle() {
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