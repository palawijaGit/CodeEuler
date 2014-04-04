/*
Question:
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

Algorthm:

Prime factor is find prime number in the original number
Example:
Find prime factor 12?
12 / 2 = 6 -> 6 is not prime, try again divide by prime number
6 / 2 = 3 -> 3 is prime factor.

Prime factor 12 is = 2 and 3 
and the largest is 3. 
Source code:
*/


# include <iostream>
using namespace std;
int main ()
{

	long long int number = 600851475143;
	 

	for (int c=2 ; c <= number ; c++)
	{
		if (number % c == 0)
		{
			number= number / c;
			cout << c << endl;

		}

	}

	return 0;

}
 
