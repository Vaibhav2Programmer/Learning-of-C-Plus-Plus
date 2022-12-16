#include<bits/stdc++.h>
using namespace std;


// If we do this without using binary it wioll become a binary Search.


int squareRoot(int n)
{

	int ans = 0, s = 0, e = n;
	int mid = s + (e - s) / 2;

	while (s < e)
	{

		int square = mid * mid;

		if (square == n)
		{
			ans = mid;
		}

		if (square > n)
		{
			e = mid - 1;
		}

		else
		{
			ans = mid;
			s = mid + 1;
		}

		mid = s + (e - s) / 2;
	}

	return ans;

}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	cout << squareRoot(n);

	return 0;

}


// Detailed Solution of the Problem.

/*
    Time Complexity: O(log(N))
    Space Complexity: O(1)

    Where 'N' is the given number.


// Function to find the square root of 'N'
int sqrtN(long long int N){


    // Handle corner case
    if(N == 0 || N == 1)
    {
        return N;
    }

    // Initialize variable 'low' and 'high' with lower and upper bound of answer
    long long int low = 2;
    long long int high = N;

    // To store mid of 'low' and 'high'
    long long int mid;

    // Loop while 'low' is less than 'high'
    while(low < high)
    {
        // Calculating 'mid'
        mid = low + (high - low) / 2;

        /*
            If square of 'mid' is less than 'N' update 'low' else update 'high'
            To avoid overflow we have NOT used the condition as ('mid' * 'mid' <= N)

        if(mid <= (N / mid))
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    // Return 'low' - 1
    return (int)(low - 1);
}

/*