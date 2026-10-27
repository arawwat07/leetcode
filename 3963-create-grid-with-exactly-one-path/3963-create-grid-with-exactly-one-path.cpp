class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        int i=0, j=0;
        string s;
        char arr[m][n];
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                arr[i][j]='#';
            }
        }
        for (i=0; i<n; i++)
        {
            arr[0][i]='.';
        }
        for (j=1; j<m; j++)
        {
            arr[j][n-1]='.';
        }
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                s=s+arr[i][j];
            }
            ans.push_back(s);
            s="";
        }
        return ans;
    }
};