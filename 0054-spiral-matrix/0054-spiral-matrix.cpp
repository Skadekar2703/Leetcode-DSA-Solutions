class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();

        vector<int> res;

        int sr = 0, er = m-1, sc = 0, ec = n-1;

        while((sr<=er) && (sc<=ec)){
            //Right
            for(int j = sc; j <= ec; j++){
               res.push_back(arr[sr][j]);
            }
            sr++;
            if((sr<=er) && (sc<=ec)){

                //Down
                for(int i = sr; i <= er; i++){
                    res.push_back(arr[i][ec]);

                }
            }    

            
            ec--;
            if((sr<=er) && (sc<=ec)){
                //Left
                for(int j = ec; j >= sc; j--){
                    res.push_back(arr[er][j]);

                }
            }
            
            er--;

            if((sr<=er) && (sc<=ec)){
                 //Up
            for(int i = er; i >= sr; i--){
                res.push_back(arr[i][sc]);
            }
            }
           
            sc++;
        
        }

        return res;

        
    }
};