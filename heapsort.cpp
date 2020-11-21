#include<bits/stdc++.h>
using namespace std;

void maxheapify(int a[] ,int n,int i){
int l = 2*i +1;
int r= 2*i +2;
int largest=i;
if(l<n && a[l]>a[largest])
largest=l;
if(r<n && a[r]>a[largest])
largest=r;
if(largest!=i){
swap(a[i],a[largest]);
maxheapify(a,n,largest);
}
}
void buildheap(int a[],int n){
        for(int i=(n/2)-1;i>=0;i--){
    maxheapify(a,n,i);
    }
}
void heapsort(int a[],int n){
    buildheap(a,n);
    for( int i=n-1;i>=1;i--){
        swap(a[0],a[i]);
        maxheapify(a,i,0);
    }
    for( int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
heapsort(a,n);
return 0;
}
