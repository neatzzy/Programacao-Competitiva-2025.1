#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, target; cin >> n >> target;
    vi nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n - 2; i++){
        int left = i + 1, right = n - 1;
        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];
            if(sum == target){
                cout << nums[i] << " " << nums[left] << " " << nums[right] << endl;
                return 0;
            } else if(sum < target){
                left++;
            } else {
                right--;
            }
        }
    }

    cout << "Imppossible" << endl;
    
    return 0;
}