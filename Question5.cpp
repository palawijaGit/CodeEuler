
/*

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


ALGORTHM :
    Prime number is a whole of number larger than 1 , can divided by 1 or itself.

    For find the smallest number can evenly divided by 1-10 is when a number can smoothly
    be divided by the prime of number by (1 - 10) which is (2,3,5,7) without any reminder. Cause prime number is
    a constan number which is those number can't be expanded anymore.


    Math Solution:

    1. find prime number each of number 1-10

        2 = 2 * 1     6 = 2 * 3
        3 = 3 * 1     7 = 1 * 7
        4 = 2 * 2     8 = 2 * 2 * 2
        5 = 1 * 5     9 = 3 * 3
                     10 = 2 * 5

    2. take the number where is those number (1-10) created by prime number

        - prime number  2
           4 = 2 * 2 and 8 = 2 * 2 * 2

           take the biggest one  is 8 = 2 * 2 * 2
           cause 4 is created from 8

           which is:
           8 = 2 * 4
           4 = 2 * 2





        - prime number 3
           3 = 3 * 1 , 6 = 2 * 3 , and 9 = 3  * 3

           take the biggest one is 9 = 3 * 3


        - prime number 5
           5 = 1 * 5


         - prime number 7
            7 = 1 * 7


     3. mutiple the whole of number has been take by instruction 2

        8 * 9 * 5 * 7 = 2520



*/

/*PROGRAM*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int num,i,count;
    int n=30;
    int MAX;
    int rMul =1;

    for(num = 2;num<=n;num++){
         count = 0;
         for(i=2;i<=num/2;i++){

             if(num%i==0){
                 count++;
                 break;
             }
        }

         if(count==0 && num!= 1){

                MAX = 0;
               for (int xVal=1 ; xVal<=n ; ++xVal){

                    //convert val to the power in the current prime num
                    //Example current prime num=2
                    // keep the number when number have the power of current prime num (2,4,and 8)
                    // find the largest number and keep it and soon


                   for (int yVal=1 ; yVal<=n ; ++yVal ){

                      if (pow(num,xVal) == yVal){

                           if(pow(num,xVal) > MAX){
                               MAX = pow(num,xVal);


                               cout <<"number power of : " << num<<": "<< MAX << endl;
                             }
                      }

                   }

                }

               rMul= rMul * MAX;

         }


    }

    cout << rMul << endl;

   return 0;
}























