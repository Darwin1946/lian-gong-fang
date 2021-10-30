#include<stdio.h>
#include<stdbool.h>
int firstBadVersion(int n);
bool isBadVersion(int n);
int main(void){

}

int firstBadVersion(int n) {
    int left = 1, right = n;
    while (left < right) {  
        int mid = left + (right - left) / 2; 
        if (isBadVersion(mid)) {
            right = mid;  
        } else {
            left = mid + 1;  
        }
    }
    return left;
}


bool isbadVersion(int n){
return true;
}

