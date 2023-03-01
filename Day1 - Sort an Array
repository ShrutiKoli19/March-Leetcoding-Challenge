/*
Note: worst cast time complexity of QuickSort - O(n^2) and MergeSort - O(nlogn)
*/

class Solution {
public:

    // int partition(vector<int>& nums, int low, int high){

    //     int i = low-1;
    //     int pivot = nums[high];

    //     for(int j = low; j<high   ; j++){

    //         if(nums[j]<pivot){
    //             i++;
    //             swap(nums[i], nums[j]);
    //         }
    //     }

    //     swap(nums[i+1], nums[high]);
    //     return i+1;
    // }

    // void quicksort(vector<int>& nums, int low, int high){

    //     if(low<high){
    //         int pi = partition(nums, low, high);
    //         quicksort(nums, low, pi-1);
    //         quicksort(nums, pi+1, high);
    //     }

    //     return;
    // }

    void merge(vector<int>& nums, int low, int mid, int high){

        int n1 = mid-low+1;
        int n2 = high-mid;

        int temp1[n1];
        int temp2[n2];

        for(int i = 0; i<n1; i++){
            temp1[i] = nums[low+i];
        }

        for(int i = 0; i<n2; i++){
            temp2[i] = nums[mid+1+i];
        }

        int i = 0;
        int j = 0;
        int k = low;

        while(i<n1 && j<n2){

            if(temp1[i]<temp2[j]){
                nums[k] = temp1[i];
                k++;
                i++;
            }

            else{
                nums[k] = temp2[j];
                k++;
                j++;
            }
        }

        while(i<n1){
            nums[k] = temp1[i];
            k++;
            i++;
        }

         while(j<n2){
            nums[k] = temp2[j];
            k++;
            j++;
        }
    }

    void merge_Sort(vector<int>& nums, int low, int high){

        if(low<high){

            int mid = (low+high)/2;
            merge_Sort(nums, low, mid);
            merge_Sort(nums, mid+1, high);

            merge(nums, low, mid, high);
        }
    }


    vector<int> sortArray(vector<int>& nums) {
        
        int low = 0;
        int high = nums.size()-1;

        // quicksort(nums, low, high);
        // return nums;

        merge_Sort(nums, low, high);
        return nums;
    }
};
