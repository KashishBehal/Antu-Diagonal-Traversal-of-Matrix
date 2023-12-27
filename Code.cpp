class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
       int n=matrix.size(); //size of matrix
       int m=matrix[0].size();//size of a asinge element
       int col=0;//initialization of row and columns 
       int row=0;
       vector<int>ans; // vector initialization
       while(col<m && row<m){ // base condition
           int i=col;
           int j=row;
           while(i>=0  && j<n){
               ans.push_back(matrix[j][i]);
               i--;
               j++;
           }
           if(col<m-1){
               col++;
           }
           else{
               row++;
           }
       }
       return ans;
    }
};
