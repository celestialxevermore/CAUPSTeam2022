from collections import deque 


N,M = map(int,input().split())

mapp = []
visited = [[False] * M for _ in range(N) ] 

dx =[0,0,1,-1]
dy = [1,-1,0,0]

def BFS(Q,visited):

    while Q:
        cur = Q.popleft()
        if cur[0]==N-1 and cur[1]==M-1:
            return cur[2]
        
        for i in range(4):
            nx = cur[0]+dx[i]
            ny = cur[1]+dy[i]
            
            if nx>=0  and nx<N and ny>=0 and ny<M:
                
                if visited[nx][ny] is False  and mapp[nx][ny]=='1':
                    visited[nx][ny]=True 
                    nc = cur[2]+1
                    next_ = [nx,ny,nc]
                    
                    Q.append(next_)



for i in range(N):
    inputs = input()
    lines = []
    for j in range(len(inputs)):
        lines.append(inputs[j])
    mapp.append(lines)


start = [0,0,1]

Q  = deque()
visited[0][0]=True
Q.append(start)

res = BFS(Q,visited)

print(res)

