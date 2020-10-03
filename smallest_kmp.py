from copy import deepcopy
t=int(input())
for _ in range(t):
    s=list(input())
    p=list(input())
    for i in p:
        s.remove(i)
    s.sort()
    s1=deepcopy(s)
    s1.append(p[0])
    s1=sorted(s1,reverse=True)
    h=''.join(s[0:len(s1)-s1.index(p[0])-1])+''.join(p)+''.join(s[len(s1)-s1.index(p[0])-1:])
    if p[0] not in s:
        print(h)
    else:
        g=''.join(s[0:s.index(p[0])])+''.join(p)+''.join(s[s.index(p[0]):])
        print(min(g,h))
