#include<iostream>

using namespace std;

int main(){
    int n, ele, count = 0;
    cout << "enter total number of elements in the array = ";
    cin >> n;
    int aray[n];
    cout << "enter each element one by one : \n";
    for(int i = 0; i < n; i++)cin >> aray[i];
    cout << "Enter element for searching : ";
    cin >> ele;
    for(int i = 0; i < n; i++){
        if(aray[i] == ele)count = 1;
    }
    if(count == 1)cout << "Element found";
    else cout << "element not found";
    cout << endl;
    return 0;
}