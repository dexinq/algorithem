#include <iostream>
#include <vector>

using namespace std;

vector<int> shellSort(vector<int> ts){
    int total_len = ts.size();
    int init_step = total_len/2;
    while(init_step>=1){
        for(int i=0; i < total_len-1; i++){
            if ((i+init_step) > (total_len-1)){
                break;
            }
            if(ts[i] > ts[i+init_step]){
                int tmp = ts[i];
                ts[i] = ts[i+init_step];
                ts[i+init_step] = tmp;
            }
        }
        init_step --;
    }
    return ts;
}