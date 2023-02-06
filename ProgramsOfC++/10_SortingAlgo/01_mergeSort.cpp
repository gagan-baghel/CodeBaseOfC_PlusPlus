#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
	int n1 = mid - l + 1;
	int n2 = r - mid;
	int a[n1],b[n2];
	for (int i = 0; i < n1; i++) a[i] = arr[l + i];
	for (int j = 0; j < n2; j++) b[j] = arr[mid + 1 + j];
	int i = 0,j=0;
	int k = l;
	while (i < n1 && j < n2)
	{
		if (a[i] < b[j]) arr[k] = a[i++];
		else arr[k] = b[j++];
 		k++;
	}

	while (i < n1) arr[k++] = a[i++];
	while (j < n2) arr[k++] = b[j++];


}

void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int mid = (l + r) / 2;
		mergeSort(arr, l, mid);
		mergeSort(arr, mid + 1, r);
		merge(arr, l, mid, r);
	}
}




 long long merge(long long arr[], long long l,long long mid, long long e){
        
        long long n1=mid-l+1,n2= e-mid,res=0;
        long long a1[n1],a2[n2];
        for(long long i=0;i<n1;i++) a1[i] = arr[l+i];
        for(long long i=0;i<n1;i++) a2[i] = arr[mid+1+i];
        
        
        int i=0,j=0,k=l;
        while(i<n1 && j<n2){
            if(a1[i]<a2[j]){
                arr[k++]=a1[i++];
                res++;
            }
            else{
                arr[k++]=a2[j++];
            }
        }
        
        while(i<n1) arr[k++]=a1[i++];
        while(j<n2) arr[k++]=a2[j++];

        return res;
    }
    
    
    
    long long countinver(long long arr[],long long s, long long e){
        long long res=0;
        while(s<e){
            int mid=(e+s)/2;
            res+=countinver(arr,s,mid);
            res+=countinver(arr,mid+1,e);
            res+= merge(arr,s,mid,e);
        }
        return res;
    }
    
    

// void msort(int arr[], int l ,int end){
// 	if(l<end){
// 		mid = (end+l)/2;
// 		msort(arr,mid,end);
// 		msort(arr,l,mid+1);
// 		merge(arr,l,end);
// 	}
// }







int main()
{
	int arr[5] = {5, 4, 3, 2, 1};
	mergeSort(arr, 0, 4);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "  ";
	}
	return 0;
}