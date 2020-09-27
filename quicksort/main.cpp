#include <iostream>

using namespace std;
 int partition(int arr[], int low, int high)
    {
        // chốt được chọn ở đây là phần tử cuối mảng
        int pivot = arr[high];
        int i = (low-1);
        for (int j=low; j<high; j++)
        {
            // nếu phần tử nhỏ hơn hoặc bằng với chốt
            if (arr[j] <= pivot)
            {
                i++;

                // đổi chỗ arr[i] và arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // đổi chỗ arr[i+1] và arr[high] (chốt)
        int temp = arr[i+1];
        arr[i+1] = arr[high];
        arr[high] = temp;

        // trả về chỉ số của chốt
        return i+1;
    }

    // Hàm thực hiện quicksort
    void sort(int arr[], int low, int high)
    {
        // nếu chỉ số của đầu mảng nhỏ hơn chỉ số cuối mảng
        if (low < high)
        {
            // tìm chỉ số của chốt sau khi đã thực hiện sắp xếp
            int pi = partition(arr, low, high);

            // lặp lại các bước với mảng từ phần tử đầu tiên đến chốt - 1
            // và từ chốt + 1 đến phần tử cuối cùng của mảng.
            sort(arr, low, pi-1);
            sort(arr, pi+1, high);
        }
    }

int main()
{
    int arr[] ={1,2,3,6,4,8,9,10,5,6};
    int h = sizeof(arr)/ sizeof(int);
    sort(arr,0,h-1);
    for(int i=0;i<h;i++) {
        cout<<arr[i]<<" ";
    }


}
