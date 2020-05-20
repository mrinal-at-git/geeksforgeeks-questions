https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0


void reverse(int a[], int l, int h)
{
    for(int i=l,j=h-1;i<j;i++,j--)
         swap(a[i], a[j]);
  
}


void rotateArr(int a[], int d, int n){
    
       reverse(a, 0, d);
       reverse(a, d, n);
       reverse(a, 0, n);
    
}
