#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> ts){
    int v_size = ts.size();
    for (int i=0; i<v_size-1; i++){
        for(int j=0; j<v_size-1-i;j++){
            if (ts[j]>ts[j+1]){
                int tmp = ts[j];
                ts[j] = ts[j+1];
                ts[j+1] = tmp;
            }
        }
    }
    return ts;
}