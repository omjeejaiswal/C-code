#include<iostream>
using namespace std;
#define N 10

// defining the function template
// we consider type of array size directly integer

template <class T>

T find_max(T t[], int NO_OF_TERMS){
	T temp_max = t[0];
	for (int i = 0; i < NO_OF_TERMS; i++)
	{
		if (temp_max < t[i] )
		{
			temp_max = t[i];
		}
	}
	return temp_max;
}
template <class P>

P find_min(P t[], int NO_OF_TERMS){
	P temp_min = t[0];
	for (int i = 0; i < NO_OF_TERMS; i++)
	{
		if (temp_min > t[i] )
		{
			temp_min = t[i];
		}
	}
	return temp_min;
}
template <class S>
void sort(S t[], int NO_OF_TERMS){
	for (int i = 0; i < NO_OF_TERMS; i++)
	{
		for (int j = i+1; j < NO_OF_TERMS; j++)
		{
			if (t[i] > t[j])
			{
				S temp;
				temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
}

int main(){
	int numbers[N];
	cout<<"Enter numbers:"<<endl;
	for (int i = 0; i < N; i++)
	{
		cin>>numbers[i];
	}
	cout<<"Largest Number of array is:"<<find_max(numbers,N)<<endl<<endl;
	cout<<"Smallest Number of array is:"<<find_min(numbers,N)<<endl<<endl;
	sort(numbers,N);
	cout<<"After sorting they are :"<<endl;
	for (int i = 0; i < N; i++)
	{
		cout<<numbers[i]<<"   ";
	}
	cout<<endl;
	// though we can make array size dynamic
	return 0;
}