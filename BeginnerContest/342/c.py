# N = int(input())
# S = input()
# Q = int(input())
# R = [list(input().split()) for _ in range(Q)]


# DS = dict()
# for i, s in enumerate(S):
#     if s in DS:
#         DS[s].append(i) 
#     else:
#         DS[s] = [i]

# for r in R:
#     for i in list(DS.get(r[0], [])):
#         DS[r[0]].remove(i)
#         if r[1] in DS:
#             DS[r[1]].append(i)
#         else:
#             DS[r[1]] = [i]

# result_list = [''] * N
# for key, indices in DS.items():
#     for index in indices:
#         result_list[index] = key

# print(''.join(result_list))


N = int(input())
S = input()
Q = int(input())
R = [list(input().split()) for _ in range(Q)]

# インデックスをキーとして、その位置にある文字を値とする辞書を作成
index_to_char = {i: char for i, char in enumerate(S)}

for r in R:
    chars_to_replace = [i for i, char in index_to_char.items() if char == r[0]]
    for i in chars_to_replace:
        # r[0]の文字をr[1]に置き換え
        index_to_char[i] = r[1]

# 辞書から結果の文字列を再構築
result_list = [index_to_char[i] for i in range(N)]

print(''.join(result_list))
