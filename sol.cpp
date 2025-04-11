class Solution {
    public:
        long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
           
           // using the brute force and the sorting technique.
    
          vector<pair<int,int>>element; // here storing the element with their respective row
    
    
          for(int i = 0; i<grid.size(); i++){
           
           for(int j = 0; j<grid[0].size(); j++){
            element.push_back({grid[i][j],i});
           }
          }
    
    
           sort(element.rbegin(),element .rend()); // sorting the vector in the decending order.
    
           vector<int>count(grid.size(),0);
    
           long long  sum = 0;
           int counter = 0;
    
           for(auto & [value,row]:element){
             
             if(count[row]<limits[row] && counter<k){
                sum += value;
                counter++;
                count[row]++;
             }
    
             if(counter == k) break;
    
           } 
    
    
         return sum;
    
    
    
    
    
        }
    };