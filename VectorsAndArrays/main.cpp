#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/* string name {"Trevor"};
    int arr[] {0,1,2,3,4};
    vector <int> numbers {5,4,3,2,1};
    
    cout << "Hello, " << name << "!" << endl;
    cout << arr[1] << endl;
    
    numbers.at(2);  // the preferred approach with vectors, will throw an exception if you go out of bounds
    numbers[2];  // old method is still suppported
    
    numbers.push_back(0);  // add 0 to the end of the vector */
    
    
    //Section 7 Challenge
    vector <int> vector1;
    vector <int> vector2;
    vector <vector<int>> vector_2d;
    
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "The first element of vector1: " << vector1.at(0) << endl;
    cout << "The last element of vector1: " << vector1.at(vector1.size()-1) << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "The first element of vector2: " << vector2.at(0) << endl;
    cout << "The last element of vector2: " << vector2.at(vector2.size()-1) << endl;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "The first element of vector_2d: " << vector_2d.at(0).at(0) << endl;
    
	return 0;
}
