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

    int freq=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=arr[i];
        }
        if(ans == arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout << "\n" << ans;

    return 0;
}