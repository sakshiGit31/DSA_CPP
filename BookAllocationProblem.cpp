#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    bool isPossibleSolution(int A[],int N,int M, int sol){
        int pageSum = 0;
        int c = 1;
        for(int i=0;i<N;i++){
            if(A[i] > sol){
                return false;
            }
            if(pageSum + A[i] > sol){
                c++;
                pageSum = 0;
                pageSum += A[i];
                if(c>M){
                    return false;
                }
            }
            else{
                pageSum += A[i];
            }
        }
        return true;
    }
    int findPages(int A[], int N, int M)
    {
        if(M < N) return -1;
        int start = 0;
        int end = accumulate(A, A+N, 0);
        int ans = -1;
        while(start<=end){
            int mid = (start+end)/2;
            if(isPossibleSolution(A, N, M, mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};
