/*The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


Algorthm:
 - Find sum of square of the first 100 natural number
 - Find the square ot the sum first 100 natural number
 - Find the different between those number
Math Solution:

    sum of square = 1^2 + 2^2 + 3^2 + ......+100^2 = 338350
    square of sum = (1   + 2   + 3   +.......+ 100) ^2 = 25502500

    HENCE = 25502500 - 338350
    HENCE = 25164150

*/

/*PROGRAM*/
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
int main()
{

    int n=100;
    int sumOfSquare = 0;
    int squareOfSum=0;
    int rSquareOfSum;
    int hence;
    for(int i=1 ; i<=n ; ++i){
        sumOfSquare += i*i+1 /2 ; // formula sum of square
    }

    cout << "Result Sum of Square: " << sumOfSquare << endl;

    for (int j=1 ; j<=n ; ++j){

        squareOfSum+=j;
    }

    rSquareOfSum = squareOfSum*squareOfSum+1/2; // Formula sum of Square
    cout <<"Result square of Sum: " << rSquareOfSum << endl;

    hence = rSquareOfSum - sumOfSquare;
    cout << "HENCE : " << hence << endl;
    return 0;
}
