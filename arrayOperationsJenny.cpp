#include <iostream>
using namespace std;
int main()
{
//	In this tuts we are gonna discuss:	
//	Array in DSA (Data Structure and Algorithm)
//  1) Traversal
//  2) Insertion
//  3) Deletion
//  4) Searching
//  5) Sorting
	cout << "Array Operations in C++ By Jenny";
//  Creating Array
	int a[50];
	int number;
	int size;
	int pos;
//	cout << "How many numbers you Wanna Enter?\n";
//	cin >> number;
////    int size;
//    for(int i=0;i<=number;i++)
//    {
//    	cin >> a[i];
//	}
//	for(int x=0;x<=number;x++)
//	{
//		cout << a[x] <<endl;
//	}
	cout << "How many intergers you want to insert?";
	cin >> number;
	if (number>50)
	{
		cout << "Sorry you cannot enter numbers more than 50: It is overflow Problem";
	}
	else
	{
		cout << "Go Ahead!!! You are good to go!!!";
		for(int i=0;i<=number;i++)
    		{
    			cin >> a[i];
			}
		for(int i=0;i<=number;i++)
    		{	
    			cout << a[i] << endl;
			}
	}
			
			
    return 0;    
} 

