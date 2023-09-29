# s = input()
# lcount=0
# rcount=0
# fcount=0
# sr=[]
# for char in s:
#     if char=='L':
#         lcount=lcount+1
#     elif char=='R':
#         rcount=rcount+1
#     if lcount==rcount:
#         sr.append('L'*lcount+'R'*rcount)
#         lcount=0
#         rcount=0
#         fcount=fcount+1

# print(fcount)
# for items in sr:
#     print(items)

# s = input()

# if  all(char in 'LR' for char in s):
#     lcount = 0
#     rcount = 0
#     fcount = 0
#     sr = []
#     if len(s)%2==0:
#         for char in s:
#             if char == 'L':
#                 lcount += 1
#             elif char == 'R':
#                 rcount += 1
#             if lcount == rcount:
#                 sr.append('L' * lcount + 'R' * rcount)
#                 lcount = 0
#                 rcount = 0
#                 fcount += 1

        
#         print(fcount)
#         for items in sr:
#             print(items)


string = input()


countL = 0
countR = 0
balance = []


for char in string:
    if char == 'L':
        countL =countL+ 1
    else:
        countR = countR + 1
    if countL == countR:
        balance.append(string[:countL + countR])
        string = string[countL + countR:]
        countL = 0
        countR = 0

print(len(balance))
for s in balance:
    print(s)
