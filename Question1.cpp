/*
Question: 
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.

Algorthm;
1.enter the number = 10;
that multiple 3 0r 5;
the Result of Multiple must below the number you enter.
and We get

multiple by 3 = 3,6,and 9
multiple by 5 = 5
and sum All the result by two multiple above
3 + 5 + 6 + 9 = 23;

2.enter the number = 20;
that multiple 3 0r 5;
the Result of Multiple must below the number you enter.
and we get

multiple by 3 = 3,6,9,12,15,18
multiple by 5 = 10, 15

Attention for Example 2
we got the same number by two multiple above
[multiple by 3 = 15]
[multiple by 5 = 15]
what we need, just put one number between multiple by 3 or 5;

What we do is using "Mod Method";

if (the number mod By 3 == 0 || The number Mod by 5 == 0)
	{
		Combine The Result;
	
	}

Source Code:
*/


# include <iostream>
	using namespace std;
	int main ()
	{

		int sum = 0;
		int limit = 20;

		for (int r =1 ; r < limit ; r++)
		{	
			
			
			
				if (r%3 == 0 || r%5 == 0)
				{
					cout << r << endl;
					sum = sum+r;

			
				}

			
			
		}


		cout << sum << endl;
		return 0;

	}
	
}
