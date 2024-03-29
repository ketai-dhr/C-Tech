from collections import deque

def minMoves(n, m, maze):
    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0]

    # 创建一个队列用于BFS
    queue = deque([(0, 0, 0)])  # (x, y, steps)
    visited = set([(0, 0)])  # 记录已经访问过的位置

    # 数组 g 用来记录上色还是不上色
    g = [[1] * m for _ in range(n)]
    g[0][0] = 0

    while queue:
        x, y, steps = queue.popleft()

        if x == n-1 and y == m-1:
            return g
        
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]
            
            # 如果新的位置在迷宫范围内且可以通过，则加入队列并标记为已访问
            if 0 <= nx < n and 0 <= ny < m and maze[nx][ny] == 0 and (nx, ny) not in visited:
                g[nx][ny] = 0
                queue.append((nx, ny, steps + 1))
                visited.add((nx, ny))
    return g

n, m = map(int, input().split())

maze = []
for _ in range(n):
    row = list(map(int, input().split()))
    maze.append(row)

# 调用函数并输出结果
result = minMoves(n, m, maze)
print(result)
