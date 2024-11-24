#include<iostream>
#include<algorithm>
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
    cout << "\n";
    sort(arr.begin(),arr.end());

    int freq=1;
    int ans=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=arr[i];
        }
    }

    cout << ans << "\n";
    

    return 0;
}