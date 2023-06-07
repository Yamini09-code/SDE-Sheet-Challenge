#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
int count1 =0;
int count2=0;
int element1;
int element2;
for(int i=0;i<n;i++ ){
    if(count1 ==0 && arr[i]!= element2){
        count1 =1;
        element1 = arr[i];

    }
    else if(count2 ==0 && arr[i]!= element1){
        count2 =1;
        element2 = arr[i];
    }
    else if(arr[i]==element1){
        count1++;
    }
    else if(arr[i]==element2){
        count2++;
    }
    else{
        count1--;
        count2--;
    }

}
int counter1 =0;
int counter2=0;
vector <int> ls;
int mini = (int) (n/3)+1;
for(int i=0;i<n;i++){
    if(arr[i]==element1){
        counter1++;
    }
    else if(arr[i]==element2){
        counter2++;
    }
}
if(counter1>=mini){
    ls.push_back(element1);
    
}
if(counter2 >=mini){
    ls.push_back(element2);
}

return ls;

}