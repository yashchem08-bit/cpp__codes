// #include <bits/stdc++.h>
// using namespace std;
// int Partion_index(vector<int> &arr, int low, int high)
// {
//     int i = low, j = high;
//     int pivot = arr[low];
//     while (i < j)
//     {

//         while (arr[i] <= pivot && i <= high-1)
//         {
//             i++;
//         }
//         while (arr[j] > pivot && j >= low+1)
//         {
//             j--;
//         }

//         if (i < j)
//         {
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[low],arr[j]);

//     return j;
// }
// void quick_sort(vector<int> &arr, int low, int high, int n)
// {
//     if (low < high)
//     {
//         int partion_idx;
//         partion_idx = Partion_index(arr, low, high);
//         quick_sort(arr, low, partion_idx-1, n);
//         quick_sort(arr, partion_idx + 1, high, n);
//     }
// }
// int main()
// {
//     vector<int> arr = {4, 2, 1, 3, 5, 9, 6, 7};
//     int n = arr.size();
//     int low = 0;
//     int high = n - 1;
//     quick_sort(arr,low,high,n);
//     for(auto & gval : arr){
//         cout<<gval<<" ";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int Partion_idx(vector<int> &arr, int low, int high){
//     int i = low , j = high;
//     int pivot =arr[low];
//     while(i < j){
//         while(arr[i] <= pivot && i <= high -1){
//             i++;
//         }
//         while(arr[j] > pivot && j >= low +1){
//             j--;
//         }
//         if(i <j){
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[low],arr[j]);
//     return j;
// }
// void quick_sort(vector<int> &arr, int low, int high, int n)
// {
//     if(low <high){
//         int patidx = Partion_idx(arr,low,high);
//         quick_sort(arr,low,patidx-1,n);
//         quick_sort(arr,patidx+1,high,n);
//     }
// }
// int main()
// {
//     vector<int> arr = {4, 2, 1, 3, 5, 9, 6, 7};
//     int n = arr.size();
//     int low = 0;
//     int high = n - 1;
//     quick_sort(arr,low,high,n);
//     for(auto & gval : arr){
//         cout<<gval<<" ";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int Partion_idx(vector<int> &arr , int low , int high){
//     int i = low;
//     int j = high;
//     int pivot = arr[i];
//     while(i <j){
//         while(arr[i] >= pivot && i <= high -1){
//             i++;
//         }
//         while(arr[j] < pivot && j >= low +1){
//             j--;
//         }
//         if(i < j){
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[low],arr[j]);
//     return j;

// }
// void Quick_sort(vector<int> &arr , int low , int high){
//     if(low < high){
//         int partion_idx = Partion_idx(arr,low,high);
//         Quick_sort(arr,low , partion_idx-1);
//         Quick_sort(arr,partion_idx+1,high);
//     }
// }
// int main(){
//     vector<int> arr = {3,5,2,6,1,8};
//     int n = arr.size();
//     int low = 0;
//     int high = n-1;
//     Quick_sort(arr,low,high);
//     for(auto &val : arr){
//         cout<<val<<" ";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// void Merge(vector<int> &arr, int low, int mid, int high)
// {
//     int left = low;
//     int right = mid + 1;
//     vector<int> temp;
//     while (left <= low && right <= high)
//     {
//         if (arr[left] < arr[right])
//         {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else
//         {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
//     while (left <= mid )
//     {
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while (right <= high)
//     {
//         temp.push_back(arr[right]);
//         right++;
//     }
//     for (int i = low; i <= high; i++)
//     {
//         arr[i] = temp[i - low];
//     }
// }
// void Merge_sort(vector<int> &arr, int low, int high)
// {
//     if (low >= high)
//     {
//         return;
//     }
//     int mid = (low + high) / 2;
//     Merge_sort(arr, low, mid);
//     Merge_sort(arr, mid + 1, high);
//     Merge(arr, low, mid, high);
// }
// int main()
// {
//     vector<int> arr = {3, 5, 2, 6, 1, 8};
//     int n = arr.size();
//     int low = 0;
//     int high = n - 1;
//     Merge_sort(arr, low, high);
//     for (auto &val : arr)
//     {
//         cout << val << " ";
//     }
// }

#include <bits/stdc++.h>
using namespace std;
// int partion_idx(int arr[5],int low , int high){
//     int i = low , j = high;
//     int pivot = arr[low];
//     while(i < j){
//         while(arr[i] >= pivot && i <= high -1){
//             i++;
//         }
//         while(arr[j] < pivot && j >= low +1){
//             j--;
//         }
//         if(i <j){
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[low],arr[j]);
//     return j;
// }
// void qs(int arr[5] ,int low , int high){
//     if(low < high){
//         int partidx = partion_idx(arr,low , high);
//         qs(arr,low , partidx -1);
//         qs(arr,partidx+1,high);
//     }
// }
// void Merge(int arr[5],int low , int mid , int high){
//     int left = low;
//     int right = mid +1;
//     vector<int> temp;
//     while(left <= mid && right <= high){
//         if(arr[left] <arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }else{
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
//     while( left <= mid){
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right <= high){
//         temp.push_back(arr[right]);
//         right++;
//     }
//     for(int i = low ; i<=high ;i++){
//         arr[i] = temp[i-low];
//     }

// }
// void ms(int arr[5] , int low , int high){
//     if( low >= high){
//         return;
//     }
//     int mid = (low + high)/2;
//     ms(arr,low,mid);
//     ms(arr,mid+1,high);
//     Merge(arr,low , mid ,high);
// }
int partition_idx(int arr[5], int low, int high)
{

    int i = low, j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }
        if( i < j ){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(int arr[5], int low, int high)
{
    if (low < high)
    {
        int part_idx = partition_idx(arr, low, high);
        qs(arr, low, part_idx - 1);
        qs(arr, part_idx + 1, high);
    }
}
void Merge(int arr[5],int low ,int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;
    while(left <= mid && right <= high ){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low ;i<= high;i++){
        arr[i] = temp[i-low];
    }
}
void ms(int arr[5], int low , int high){
    if(low >= high){
        return ;
    }
    int mid = (low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    Merge(arr,low,mid,high);
}
int main()
{
    int arr[5] = {5, 7, 2, 7, 4};
    int n = 5;
    int low = 0;
    int high = n - 1;
    // qs(arr,low,high);
    // for(auto &val : arr){
    //     cout<<val<<" ";
    // }
    ms(arr,low,high);
    for(auto &val : arr){
        cout<<val<<" ";
    }
    // cout<<endl;
    // for(int i = 0; i<= n-1;i++){         // insertion_sort
    //         int j = i;
    //         while(arr[j] < arr[j-1] && j >0){
    //             swap(arr[j-1], arr[j]);
    //             j--;
    //         }

    //     }
    //  for(int k = 0 ;k<n;k++){
    //     cout<<arr[k]<<" ";
    // }

    //     for(int i = 0 ;i<= n-1;i++){     //selection_sort
    //         int min = INT_MAX;
    //         int minidx = -1;
    //         for(int j = i; j<n;j++){
    //             if(min > arr[j]){
    //                 min = arr[j];
    //                 minidx = j;
    //             }
    //         }
    //         swap(arr[i], arr[minidx]);
    //     }
    //     for(int k = 0 ;k<n;k++){
    //         cout<<arr[k]<<" ";
    //     }
}
