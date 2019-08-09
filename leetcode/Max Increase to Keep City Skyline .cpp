#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid) {
        vector<int> maxLeft, maxTop;

        for(int i; i < grid.size(); i ++) {
            
            for (int j = 0; j < grid[i].size(); ++j) {

            }
        }


        return 0;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> grid = {{3,0,8,4},{2,4,5,7},{9,2,6,3},{0,3,1,0}};
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
//    solution.maxIncreaseKeepingSkyline(grid);
    return 0;
}