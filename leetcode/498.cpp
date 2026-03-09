#include <iostream>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans;

        int r =0, c= 0;
        while(r < m && c < n){
            
            while(r >= 0 && c < n){
                ans.push_back(mat[r][c]);
                r--; c++;
            }
            r++;

            if(c == n){
                c--; r++;
            }

            while(r < m && c >= 0){
                ans.push_back(mat[r][c]);
                r++; c--;
            }
            c++;

            if(r == m){
                r--; c++;
            }
    
        }
        return ans;
    }


    int main(){

        return 0;
    }