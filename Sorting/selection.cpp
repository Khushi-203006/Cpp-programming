#include<iostream>
using namespace std;

// int swap(int a,int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }

int main(){
    int n,i,j;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=0;i<n;i++){
        cout << arr[i];
    }
    cout << "\n";
    for(i=0;i<=n-2;i++){
        int min=i;
        for(j=i;j<n-2;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(i=0;i<n;i++){
        cout << arr[i];
    }
    cout << "\n";
    return 0;
}