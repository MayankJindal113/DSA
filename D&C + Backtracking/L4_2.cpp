// OPTIMIZED N-Queens solution 

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<int, bool>rowCheck;
unordered_map<int, bool>downleftCheck;
unordered_map<int, bool>upleftCheck;

int count  = 1 ;
void printSol(vector<vector<int>>&board ,int n,  int & count){
    cout <<"Solution No. "<<count++<<endl;

    for (int i =0; i<n; i ++){
        for (int j = 0 ; j < n ; j++){
            cout << board[i][j];
        }   cout<< endl;
    }
    cout<< endl<< endl;
}

bool checkSafe(vector<vector<int>>&board, int &n, int &col, int &row){

    // Optimal approach :
    if (rowCheck[row] || downleftCheck[n-row+col] || upleftCheck[row+col]) return false;
    else return true;

    // Less Optimal approach :
    // int i =col-1, j =row-1;
    // // check in left upper diagonal
    // while(i>=0 && j >= 0)
    // {
    //     if (board[j][i]) return false;
    //     i--;j--;
    // }

    // i =col-1, j =row+1;
    // // check in left lower diagonal
    // while(i>=0 && j < n)
    // {
    //     if (board[j][i]) return false;
    //     i--;j++;
    // }
    
    // i =col-1, j =row;
    // // check in left row
    // while(i>=0)
    // {
    //     if (board[j][i]) return false;
    //     i--;
    // }

    // return true;
}

void solve(vector<vector<int>>&board, int &n, int col){

    if(col>= n){
        printSol(board, n, count);
        return;
    }
    // Place queen on one of the row of current col
    for (int i =0 ; i< n ; i++){
        if(checkSafe (board, n, col, i)){
            board[i][col]=1;
            rowCheck[i]=true;
            downleftCheck[n-i+col]=true;
            upleftCheck[i+col]=true;

            solve(board, n, col+1);
            // Backtrack
            board[i][col]=0;
            rowCheck[i]=false;
            downleftCheck[n-i+col]=false;
            upleftCheck[i+col]=false;
        }
    }
}

int main()
{
    int col=0, row=0;
    int n = 4;
    vector<vector<int>>board(n, vector<int>(n,0));

    solve(board, n, col);
}