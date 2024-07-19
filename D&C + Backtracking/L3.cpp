// Rat in a Maze :
// SOLVE HERE: GFG : https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
// (Leetcode Premium - 490)


// Base Case:
// pos == des
// return ;
// 4 external functions to move up, down, left, right
// Store the paths in a 2d char vector named : paths and remove them, if 
// call these 4 functions : Call, ratinmaze (), in all of these, if the movement is allowed
// up ()
// Backtrack to prev conditions
// down ()
// Backtrack to prev conditions
// right ()
// Backtrack to prev conditions
// left ()
// Backtrack to prev conditions

#include<iostream>
#include<vector>
using namespace std;

bool checkSafe (int *pos, vector<vector<int>> &m, vector<vector<bool>> &visited, int n){
        if ( pos[0]>=0 && pos[1]>=0 && pos[0]<n && pos[1]<n && m [pos[0]] [pos[1]] == 1 && !visited[pos[0]][pos[1]]){ 
            // Check for Allowed movement and not visited
            return true;
        }else{
            return false;
        }
    }
    
void path(vector<vector<int>> &m, int &n, vector<vector<bool>> &visited,  vector<string> &paths,string currPath ,int *currPos){
        // Base Case// reached end
 
        if(currPos[0] == n-1 && currPos[1] == n-1){
            paths.push_back(currPath);
            return ;
        }
        
        // Call 4 functions to move up right left down
        int movex[] = {0, 1, -1, 0};
        int movey[] = {-1, 0 , 0, 1};
        char dir [] = {'U', 'R', 'L', 'D'};
        
        for (int i =0 ; i < 4 ; i++){
            
                int nextPos[]={currPos[0] + movex[i], currPos[1] + movey[i]};
                
                if (checkSafe(nextPos, m, visited, n)){
                    // currPos[0]+=movex[i];
                    // currPos[1]+=movey[i];
                    
                    visited [currPos[0]] [currPos[1]] = true;
                    path(m, n, visited, paths, currPath + dir[i],nextPos);
                    
                    // Backtracking
                    visited [currPos[0]] [currPos[1]] = false;
                    // currPos[0]-=movex[i];
                    // currPos[1]-=movey[i];
            }
        }
    }
    
vector<string> findPath(vector<vector<int>> m, int n) {
        // Your code goes here
        vector<string> p;
        vector<vector<bool>>visited (n, vector<bool>(n, false)); // Size should be n*n ?

        int currPos [] = {0,0};// i,j coordinates of the rat
        if (m[0][0]==1){
            visited [0][0]=true;
            path (m, n, visited, p, "",currPos);
        }
        return p;
    }
    

int main()
{
    int maze [3][3]{{1, 0, 0}, 
                    {1, 1, 0},
                    {0, 0, 1}};
    int col =3;int row = 3;
    vector<vector<bool>> visited(row, vector<bool> (col,false));
    visited[0][0]= true;

}   
