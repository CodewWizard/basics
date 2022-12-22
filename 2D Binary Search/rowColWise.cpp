#include<iostream>
#include<vector>
using namespace std;

vector<int> search(vector<vector<int>> vec, int size, int target){
    int row = 0, col = size - 1;
    while (row < size && col >= 0)
    {
        if(vec[row][col] == target){
            ;
        }   
    }
}

int main(){
    vector<vector<int>> vec{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int size = vec.size();
    int target = 7;
    vector<int> ans;
    ans = search(vec, size, target);
    for (int i = 0; i < size; i++)
    {
        cout<<ans[i]<<endl;
    }
    
}