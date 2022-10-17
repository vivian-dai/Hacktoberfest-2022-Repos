a=[[0,0,0,0,0,0,0],[0,0,1,1,0,0,0],[0,1,0,0,1,0,0],[0,1,0,0,1,0,0],[0,0,1,1,0,1,1],[0,0,0,0,1,0,0],[0,0,0,0,1,0,0]]

q=[]

visited=[0,0,0,0,0,0,0]

def bfs(a,start,n):

    i=start

    print(i)

    visited[i]=1

    q.append(i)

    while(len(q)>0):

        

        u=q.pop(0)

        for v in range(1,n):

            if(a[u][v]==1 and visited[v]==0):

                print(v)

                visited[v]=1

                q.append(v)

bfs(a,3,7)
