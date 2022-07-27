#import os 

#R,C = map(int,input().split())

#dx = [1,-1,0,0]
#dy = [0,0,1,-1]
#s = v = 0

#mapp=[]
#for i in range(R):
#    inputs = input()
#    lines=[]
#    for j in range(len(inputs)):
#        lines.append(inputs[j])
#    mapp.append(lines)

#visited = [[False]* C for _ in range(R)]

#def DFS(start):

#    for i in range(4):
#        nx = start[0]+dx[i]
#        ny = start[1] +dy[i]

#        if nx>=0 and nx<R and ny>=0 and ny<C:
            
#            if visited[nx][ny]==False:
#                visited[nx][ny]=True
#                if mapp[nx][ny]=='o':
#                    print("nx : {} ny : {} current sheep : {} current wolve : {}".format(nx,ny,start[2],start[3]))
#                    visited[nx][ny]=True
#                    next_ = [nx,ny,start[2]+1,start[3]] 
#                    #print("nx : {} ny : {} next sheep : {} next wolve : {}".format(nx,ny,next_[2],next_[3]))
#                    DFS(next_)
#                elif mapp[nx][ny]=='v':
#                    print("nx : {} ny : {} current sheep : {} current wolve : {}".format(nx,ny,start[2],start[3]))
#                    visited[nx][ny]=True
#                    next_ = [nx,ny,start[2],start[3]+1]
#                    #print("nx : {} ny : {} next sheep : {} next wolve : {}".format(nx,ny,next_[2],next_[3]))
#                    DFS(next_)
#                elif mapp[nx][ny]=='.':
#                    print("nx : {} ny : {} current sheep : {} current wolve : {}".format(nx,ny,start[2],start[3]))
#                    visited[nx][ny]=True
#                    next_ = [nx,ny,start[2],start[3]]
#                    #print("nx : {} ny : {} next sheep : {} next wolve : {}".format(nx,ny,next_[2],next_[3]))
#                    DFS(next_)
#                else:
#                    continue
    
#    if start[2] > start[3]:
#        start[3]=0 
#    else:
#        start[2]=0 

#    print("res sheep : {} res wolve : {}".format(start[2],start[3]))
#    return start[2],start[3]
        

#for i in range(R):
#    for j in range(C):
#        if mapp[i][j]=='o' and visited[i][j]==False:
#            visited[i][j]=True 
#            start = [i,j,1,0]
#            print("sheep x : {} y : {}".format(start[0],start[1]))
#            a,b = DFS(start)
#            s+=a 
#            v+=b
#            print("total sheep : {} wolve : {}".format(s,v))

#        elif mapp[i][j]=='v' and visited[i][j]==False:
#            visited[i][j] = True 
#            start = [i,j,0,1]
#            print("wolve x : {} y : {}".format(start[0],start[1]))
#            a,b = DFS(start)
#            s+=a 
#            v+=b 
#            print("total sheep : {} wolve : {}".format(s,v))




#print(s, v)
            