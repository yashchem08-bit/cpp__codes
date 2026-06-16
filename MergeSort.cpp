// #include <bits/stdc++.h>
// using namespace std;
// void Merge(int arr[9], int low, int mid, int high)
// {
//    vector<int> temp;
//     int left= low;
//     int right = mid+1;
//     while(left <= mid && right <= high){
//         if(arr[left] <= arr[right]){
//            temp.push_back(arr[left]);
//             left++;
//         }else{
//            temp.push_back(arr[right]);
//             right++;
//         }

//     }
//     while (left <= mid)
//     {
//             temp.push_back(arr[left]);
//             left++;
//     }
//     while (right <= high)
//     {
//             temp.push_back(arr[right]);
//             right++;
//     }
//     for(int i = low ;i<=high;i++){
//         arr[i] = temp[i-low];
//     }
// }
// void merges_sort(int arr[9], int low, int high)
// {
//     if (low >= high)
//         return ;
//     int mid = (low + high) / 2;
//     merges_sort(arr, low, mid);
//     merges_sort(arr, mid + 1, high);
//     Merge(arr, low, mid, high);
// }
// int main()
// {
//     int arr[9] = {3, 1, 2, 4, 1, 5, 2, 6, 4};
//     int low = 0;
//     int high = (sizeof(arr) / sizeof(arr[0])) - 1;
//     merges_sort(arr,low,high);
//     for(int i = 0 ;i<9;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include <bits/stdc++.h>         Merge_sort
// using namespace std;
// void Merge(vector<int> &nums, int low, int mid, int high)
// {
//     vector<int> temp;
//     int left = low;
//     int right = mid + 1;
//     while (left <= mid && right <= high)
//     {
//         if (nums[left] < nums[right])
//         {
//             temp.push_back(nums[left]);
//             left++;
//         }
//         else
//         {
//             temp.push_back(nums[right]);
//             right++;
//         }
//     }
//     while (left <= mid)
//     {
//         temp.push_back(nums[left]);
//         left++;
//     }
//     while (right <= high)
//     {
//         temp.push_back(nums[right]);
//         right++;
//     }
//     for (int i = low; i <= high; i++)
//     {
//         nums[i] = temp[i - low];
//     }
// }
// void merge_sort(vector<int> &nums, int low, int high)
// {
//     if (low >= high)
//     {
//         return;
//     }
//     int mid = (low + high) / 2;
//     merge_sort(nums, low, mid);
//     merge_sort(nums, mid + 1, high);
//     Merge(nums, low, mid, high);
// }
// int main()
// {
//     vector<int> nums = {5, 4, 2, 6, 1, 2, 3};
//     int n = nums.size();
//     int low = 0;
//     int high = n - 1;
//     merge_sort(nums, low, high);
//     for (auto &val : nums)
//     {
//         cout << val << " ";
//     }
// }

// #include <bits/stdc++.h>     Insertion_sort
// using namespace std;

// void Insertion_sort(vector<int> &nums , int &n)
// {
//     for(int i = 0 ;i<=n-1;i++){
//         int j = i;
//         while(j > 0 && nums[j] <nums[j-1]){
//             int temp = nums[j];
//             nums[j] = nums[j-1];
//             nums[j-1] = temp;
//             j--;
//         }
//     }
// }
// int main()
// {
//     vector<int> nums = {5, 4, 2, 6, 1, 2, 3};
//     int n = nums.size();
//     Insertion_sort(nums, n);
//     for(auto &val : nums){
//         cout<<val<<" ";
//     }
// }

// #include <bits/stdc++.h>     selection_sort
// using namespace std;

// void Selction_sort(vector<int> &nums , int &n)
// {
//     for(int i = 0 ;i<=n-1;i++){
//        int min = INT_MAX;
//        int minidx = -1;
//        for(int j = i;j<=n-1;j++){
//         if(min > nums[j]){
//             min = nums[j];
//             minidx = j;
//         }
//        }
//        int temp = nums[minidx];
//        nums[minidx] = nums[i];
//        nums[i] = temp;
//     }
// }
// int main()
// {
//     vector<int> nums = {5, 4, 2, 6, 1, 2, 3};
//     int n = nums.size();
//     Selction_sort(nums, n);
//     for(auto &val : nums){
//         cout<<val<<" ";
//     }
// }

#include <bits/stdc++.h>
using namespace std;
void Merge(vector<int> &nums, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (left >= low && right >= high)
    {
        if (nums[left] < nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left >= mid +1){
        temp.push_back(nums[left]);
        left++;
    }
    while(right >= high){
        temp.push_back(nums[right]);
        right++;
    }
    for(int i = low ;i<= high;i++){
        nums[i] = temp [i-low];
    }
}
void merge_sort(vector<int> &nums, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    merge_sort(nums, low, mid);
    merge_sort(nums, mid + 1, high);
    Merge(nums, low, mid, high);
}
int main()
{
    vector<int> nums = {5, 4, 2, 6, 1, 2, 3};
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    merge_sort(nums, low, high);
    for (auto &val : nums)
    {
        cout << val << " ";
    }
}