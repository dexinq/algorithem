#include <iostream>
#include <vector>

using namespace std;

vector<int> insertSort(vector<int> ts){
    int size = ts.size();
    int begin = 0;
    int total_len = ts.size();
    for(int i=0; i<size; i++){
        int pre_index = i-1;
        int current = ts[i];
        while(pre_index>=0 && ts[pre_index]>current){
            ts[pre_index+1] = ts[pre_index];
            pre_index --;
        }
        ts[pre_index+1] = current;
    }
    return ts;
}