#include <bits/stdc++.h>

using namespace std;


int main()
{
   int arr[1001];
   int n, sum = 0;
   cin >> n;
   for(int i = 0; i < n; i++){
    cin >> arr[i];
   }
   for(int i = 0; i < n; i++){
    sum += arr[i];
   }
   cout << sum;


    return 0;
}

