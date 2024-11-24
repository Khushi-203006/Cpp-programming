#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter lenght:- " ;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout << "Enter element:- ";
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    for(int i: arr){
        int freq=0;
        for(int j: arr){
            if(i==j){
                freq++;
            }
        }
        if(freq>(n/2)){
            cout << "\n" << i;
            break;
        }
    }
    return 0;
}