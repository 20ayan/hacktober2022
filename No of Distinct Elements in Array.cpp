#include <iostream>

int noOfDistinctElements(int arr[],int n){
    int count=0;
    int j;
    for(int i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(arr[j] == arr[i]){
                break;
            }
        }
        if(i==j){
            count++;
        }
    }
    return count;

}

int main(){
    int arr[] = {3,6,1,2,3,3,4};
    int x = noOfDistinctElements(arr,7);
    printf("%d",x);
    return 0;
}
