# https://codeforces.com/problemset/problem/71/A
# Solved

n = int(input())
my_list = []
my_list1 = []
for i in range(n):
    word = input()
    my_list.append(word)

for i in my_list:
    if len(i) < 11:
        my_list1.append(i)
    elif len(i) > 10:
        l = str(len(i) - 2)
        my_list1.append(i[0] + l + i[-1])

for i in my_list1:
    print(i)
