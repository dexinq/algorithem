#include <iostream>
#include <vector>

using namespace std;

vector<int> selectSort(vector<int> ts){
    int v_size = ts.size();
    for (int i=0; i<v_size-1; i++){
        int min_pos = i;
        for (int j=i+1; j <v_size-1; j++){
            if (ts[j]<ts[min_pos]){
                min_pos = j;
            }
            int tmp = ts[i];
            ts[i] = ts[min_pos];
            ts[i] = tmp;
        }
    }
    return ts;
}