while( size-- ) {
pair<int, int> p = q.front();
q.pop();
for( int i = 0; i < 4; i++ ){
int new_row = p.first+dx[i], new_col = p.second+dy[i];
if( new_row >= 0 and new_col >= 0 and new_row < n and new_col < m){
if(maze[new_row][new_col] != '.') continue;
if(visited[new_row][new_col]) continue;                     // if this cell is already visited, don't check further
if( new_row == 0 or new_col==0 or new_row == n-1 or new_col == m-1) return level;       // if we reached a boundary, return the level
visited[new_row][new_col] = 1;
q.push({new_row, new_col});
}
}
}
}
return -1;
}
};
```