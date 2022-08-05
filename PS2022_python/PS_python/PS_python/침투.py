from collections import deque 

M,N = map(int,input().split())

mapp=[]
visited=[]

dx=[-1,1,0,0]
dy=[0,0,-1,1]
flag=0 


for i in range(M):
    inputs = input()
    lines=[]
    for j in range(len(inputs)):
        lines.append(int(inputs[j]))
    mapp.append(lines) 



visited=[[False]*N for i in range(M)] 


def bfs(queue,start,visited):
    cur=[]
    global flag
    while queue:
        cur = queue.popleft()
        
        if cur[0]==M-1:
            flag=1 
            return 

        for i in range(len(dx)):
            nx = cur[0]+dx[i]
            ny = cur[1]+dy[i]
            if nx>=0 and nx<M and ny>=0 and ny<N:
                if visited[nx][ny]==False and mapp[nx][ny]==0:
                    visited[nx][ny] = True 
                    queue.append([nx,ny]) 

def memset(visited):
    for i in range(M):
        for j in range(N):
            visited[i][j]=False 

for i in range(N):
    
    start = [0,i] 
    queue=deque()   
    if mapp[start[0]][start[1]]==1:
        continue 
    else:
        #print("start at :",start)
        queue.append(start)
        visited[start[0]][start[1]]=True 
        bfs(queue,start,visited)
        if flag==1:
            print("YES")
            break 
        else:
            continue 
    memset(visited)


if flag==0:
    print("NO")
