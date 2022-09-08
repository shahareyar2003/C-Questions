# def h(x):
#     (d,n) = (1,0)
#     while d <= x:
#         (d,n) = (d*3,n+1)
#     return(n)
# y= h(27993)
# print(y)


# def g(n): 
#     s=0
#     for i in range(2,n):
#         if n%i == 0:
#            s = s+1
#     return(s)
# a=g(60) - g(48)
# print(a)

# def mystery(l):
#     if l == []:
#         return(l)
#     else:
#         return(mystery(l[1:])+l[:1])
# print(mystery([22,14,19,65,82,55]))

# pairs = [ (x,y) for x in range(4,1,-1) for y in range(5,1,-1) if (x+y)%3 == 0 ]
# print(pairs)

wickets = {"Tests":{"Bumrah":[3,5,2,3],"Shami":[4,4,1,0],"Ashwin":[2,1,7,4]},"ODI":{"Bumrah":[2,0],"Shami":[1,2]}}