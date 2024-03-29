# n = 3
# st = [0] * (n + 1)

# def dfs(x):
#     if x > n:
#         for i in range(1, n + 1):
#             if st[i] == 1:
#                 print(i, end=' ')
#         print()
#         return



#     # 不选择
#     st[x] = 2
#     dfs(x + 1)
#     st[x] = 0

#     # 选择
#     st[x] = 1
#     dfs(x + 1)
#     st[x] = 0

# dfs(1)

# n = 3
# st = [False] * (n + 1)
# arr = [0] * (n + 1)

# def dfs(x):
    
#     if x > n:
#         print(arr)

#     for i in range(1, n+1):
#         if st[i] == False:
#             st[i] = True
#             arr[x] = i
#             dfs(x + 1)
#             st[i] = False
#             arr[x] = 0

# dfs(1)

# n = 5
# r = 3

# arr = [0] * (r+1)

# def dfs(x, start):

    
#     if x > r:
#         print(arr)
#         return 

#     for i in range(start, n + 1):
#         arr[x] = i
#         dfs(x + 1, i + 1)
#         arr[x] = 0

# dfs(1, 1)


# n = 4
# n_1 = 3
# n_2 = 7
# n_3 = 12
# n_4 = 19
# n_arr = [n_1, n_2, n_3, n_4]
# k = 3

# arr = [0] * (k+1)

# def dfs(x, start):

#     sum = 0
#     if x > k:
#         for i in range(len(arr)):
#             sum += arr[i]
#         print(sum)
#         return 

#     for i in range(start, n + 1):
#         arr[x] = n_arr[i-1]
#         dfs(x + 1, i + 1)
#         arr[x] = 0

# dfs(1, 1)
# n = 4
# r = 3

# list_a = [3,7,12,19]
# list_b = []
# arr = [0]*(r+1)
# sum = 0 

# def is_prime(n):
#     if n <= 1:
#         return False
#     for i in range(2, int(n ** 0.5) + 1):
#         if n % i == 0:
#             return False
#     return True

# def a(x,start):
#     num = 0
#     if x>r:
#         print (arr)
#         for i in range(len(arr)):
#             num += arr[i]
#         if is_prime(num):
#             global sum
#             sum += 1
#         num = 0
#         return
#     for i in range(start,n+1):
#         arr[x] = list_a[i-1]
#         a(x + 1,i + 1)
#         arr[x] = 0

# a(1,1)
# print(sum)
# from collections import deque

# def minMoves(n, m, maze):
#     dx = [0, 0, 1, -1]
#     dy = [1, -1, 0, 0]

#     # 创建一个队列用于BFS
#     queue = deque([(0, 0, 0)])  # (x, y, steps)
#     visited = set([(0, 0)])  # 记录已经访问过的位置

#     while queue:
#         x, y, steps = queue.popleft()

#         if x == n-1 and y == m-1:
#             return steps
        
#         for i in range(4):
#             nx, ny = x + dx[i], y + dy[i]
            
#             # 如果新的位置在迷宫范围内且可以通过，则加入队列并标记为已访问
#             if 0 <= nx < n and 0 <= ny < m and maze[nx][ny] == 0 and (nx, ny) not in visited:
#                 queue.append((nx, ny, steps + 1))
#                 visited.add((nx, ny))


# n, m = map(int, input().split())

# maze = []
# for _ in range(n):
#     row = list(map(int, input().split()))
#     maze.append(row)

# # 调用函数并输出结果
# result = minMoves(n, m, maze)
# print(result)


# a = list()
# a.append([0,0])
# a.append([1,2])
# # if (nx, ny) not in visited
# print(a)

# from collections import deque

# queue = deque([(0, 0, 0)])  # (x, y, steps)
# visited = {(0, 0)}

# while queue:
#     # a = 0
#     x, y, steps = queue.popleft()
#     # print(x, y, steps)

#     if (0, 1) not in visited:
#         queue.append((0, 0, 1))

#         visited.add((0, 1))

#     print(x, y, steps)


# list_1 = [[-1]*2]* 2
# list_1[0][1]=1
# # print(list_1)

# for row in list_1:
#     print(row)

# a = list([[1,2,3],
#          [4,5,6]])
# print(a[0][1])


# a = [0, 1, 2, 3]

# while len(a) > 0:
#     print(a[0])
#     del a[0]
# def remove_digits(number, k):
#     # 将整数转换为字符串，以便于处理每一位数字
#     number_str = str(number)
    
#     # 创建一个空列表来存储剩余的数字
#     remaining_digits = []
    
#     # 遍历每一位数字
#     for i in range(len(number_str)):
#         # 当剩余的数字数量大于0且当前数字大于剩余数字列表中最后一个数字时，删除最后一个数字
#         while k > 0 and len(remaining_digits) > 0 and int(number_str[i]) > remaining_digits[-1]:
#             print(remaining_digits)
#             remaining_digits.pop()
#             k -= 1
        
#         # 将当前数字添加到剩余数字列表中
#         remaining_digits.append(int(number_str[i]))
    
#     # 如果还有剩余的数字需要删除，则从末尾删除剩余的数字
#     while k > 0:
#         remaining_digits.pop()
#         k -= 1
    
#     # 将剩余数字列表转换为整数
#     result = int(''.join(map(str, remaining_digits)))
    
#     return result

# # 示例使用
# number = 43119
# k = 2
# result = remove_digits(number, k)
# print("从数字", number, "中删除", k, "个数字后得到的最大数为:", result)

def count_ABB_substrings(S):
    count = 0
    substrings = set()

    for i in range(len(S)-2):
        if S[i] != S[i+1] and S[i+1] == S[i+2]:
            substrings.add(S[i:i+3])
            count += 1

    return count, len(substrings)

S = input()
count, num_substrings = count_ABB_substrings(S)
print(count, num_substrings)