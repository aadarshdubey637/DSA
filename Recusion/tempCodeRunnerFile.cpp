=n || mat[row][col]==0||mat[row][col]==-1){
        return ;
    }
    if(row==n-1 || col ==n-1){
        ans.push_back(path);
        return;
    }
    mat[row][col]=-1;