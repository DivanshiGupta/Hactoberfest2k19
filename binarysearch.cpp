#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define rt return 0
#define endln "\n"
#define for1(i,a,b) for(long long int i=a;i<b;i++)
#define for2(i,a,b) for(long long int i=a;i>b;i--)
//  cout << fixed << setprecision(0) << pi <<" "<<npi<<endl;
typedef long long int int1;

int1 binarySearch(int1 arr[], int1 l, int1 r, int1 x) 
{ 
    if (r >= l) { 
        int1 mid = l + (r - l) / 2; 

        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
      
        return binarySearch(arr, mid + 1, r, x); 
    }  
    return -1; 
} 
  
int main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int1 arr[] = { 2, 3, 4, 10, 40 }; 
    int1 n = sizeof(arr) / sizeof(arr[0]); 
    int1 x = 10; 
    int1 result = binarySearch(arr, 0, n - 1, x); 
    if(result == -1)
    {
        cout <<"Element not found\n";
    }
    else
    {
        cout <<"Element is present at index "<<result <<"\n";
    }
    return 0; 
} 
