#include <iostream>
using namespace std;

 


/*

 


In other words, a prime number is a number that's greater than one and is only divisible by itself. There are no other numbers that can be factored into a prime number. For example, 3 is prime because:
1. It's greater than 1.
2. it's only divisible by 3 and 1.

 

*/
//check this video to know what prime numbers are https://www.youtube.com/watch?v=9pgA-H77BLc

 

 

int main()

 

{

 

    int n, i;
    bool YesPrime = true; //using bool to make it eaiser with True Or false 

 

 

    cout << "Enter a Positive Number : ";

 

    cin >> n;

 

    for (i = 2; i <= n / 2; i++) //prime numbers stars from 2 

 


    {

 

        if (n % i == 0)

 

        {

 

            YesPrime = false;
            break; // here i am saying  if the number is not a prime number set bool to false  and break the if statement 

 

        }

 

    }

 

    if (YesPrime == false)  //if bool is false print this is not a prime number 
                            // Is 8 a Prime Number? No, because it can be made by 2×4=8
    {
        cout << "This is not a prime number";
    }
    else if (YesPrime == true)
        // Is 73 a Prime Number? Yes, as no other whole numbers multiply together to make it.

 

    {

 

        cout << "This is a prime number";
    }

 

    cin.ignore(2);
    return 0;

 

}