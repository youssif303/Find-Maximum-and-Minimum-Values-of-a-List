#include<iostream>
#include<vector>
using namespace std;

int min(vector<int> list) {
	int min_value = list[0];
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i] < min_value)
			min_value == list[i];
	}
    return min_value;
}

int max(vector<int> list) {
	int max_value = list[0];
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i] > max_value)
			max_value == list[i];
	}
    return max_value;
}


int main()
{
	cout <<"the minimum value: "<< min({1,4,6,7,-2,-55}) << endl;
	cout <<"the maximum value: "<< max({3,5,7,88,22});
	return 0;
}