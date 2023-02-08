void setZeros(vector<vector<int>> &matrix)
{
	int n=matrix.size();
	int m=matrix[0].size();
   
	 vector<pair<int,int>>ans;   

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
         if(matrix[i][j]==0){
			ans.push_back({i,j});
		    }
		}
	}
	
	for(int x=0; x < ans.size(); x++){
		int row=ans[x].first;
		int col=ans[x].second;

		int i=0, j=0;

		while(j<m){
			matrix[row][j++]=0;
		}

		while(i<n){
			matrix[i++][col]=0;
		}
	}

}
