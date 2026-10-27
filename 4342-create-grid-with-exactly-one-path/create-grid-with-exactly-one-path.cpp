class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m,string(n,'#') );
        for(int j=0;j<n;j++){
            grid[0][j]= '.'; // make first row  to valid path
        }
        for(int i=0;i<m;i++){ 
            grid[i][n-1]='.'; // make last column to valid path
        }
        return grid;
        
        
    }
};