#include<iostream>
using namespace std;


void merge(int arr[], int l, int m, int r) 
{
  int i = l;
  int j = m + 1;
  int k = l;

  int temp[r+1];
 
  while (i <= m && j <= r) 
  {
    if (arr[i] <= arr[j]) 
    {
      temp[k] = arr[i];
      i++;
      k++;
    } 
    else 
    {
      temp[k] = arr[j];
      j++;
      k++;
    }
 
  }
 
  
  while (i <= m) 
  {
    temp[k] = arr[i];
    i++;
    k++;
 
  }
 

  while (j <= r) 
  {
    temp[k] = arr[j];
    j++;
    k++;
  }
 
  for (int p = l; p <= r; p++) 
  {
    arr[p] = temp[p];
  }
}
 

void mergeSort(int arr[], int l, int r) 
{
  if (l < r) 
  {
    
    int m = (l + r) / 2;
 
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
 
    merge(arr, l, m, r);
  }
}
 
int main() 
{
    int arr_size;
    cout<<"enter no.of elements in array:"<<endl;
    cin>>arr_size;
  int myarray[arr_size];
 
  cout << "Enter "<<arr_size<<" integers in any order: " << endl;
  for (int i = 0; i < arr_size; i++) 
  {
    cin >> myarray[i];
  }

  cout << "Before Sorting" << endl;
  for (int i = 0; i < arr_size; i++)
 {
    cout << myarray[i] << " ";
  }
  cout << endl;

  mergeSort(myarray, 0, (arr_size - 1)); 
 
  cout << "After Sorting" << endl;
  for (int i = 0; i < arr_size; i++) 
  {
    cout << myarray[i] << " ";
  }
 
  return 0;
}