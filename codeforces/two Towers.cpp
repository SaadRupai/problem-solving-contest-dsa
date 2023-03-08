// There are two towers consisting of blocks of two colors: red and blue. Both towers are represented by strings of characters B and/or R denoting the order of blocks in them from the bottom to the top, where B corresponds to a blue block, and R corresponds to a red block.
// These two towers are represented by strings BRBB and RBR.

// You can perform the following operation any number of times: choose a tower with at least two blocks, and move its top block to the top of the other tower.

// The pair of towers is beautiful if no pair of touching blocks has the same color; i. e. no red block stands on top of another red block, and no blue block stands on top of another blue block.

// You have to check if it is possible to perform any number of operations (possibly zero) to make the pair of towers beautiful.


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n;
		string s, t;
		string sum;
		cin >> m >> n;
		cin >> s >> t;

		// reverse the second string and sum it up with first to see if same color repeats
		reverse(t.begin(), t.end());
		sum = s + t;
		int count = 0;
		for (int i = 0; i + 1 < sum.size(); i++)
		{
			if (sum[i] == sum[i + 1])
			{
				count++;
			}
		}
		if (count > 1)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
}
