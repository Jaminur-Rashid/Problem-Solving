#Author:Jaminur Rashid
#Date:24:09:2019
List=[int(x) for x in input().split()]
List.sort()
if (List[0]+List[3])==(List[1]+List[2]):
    print("Yes")
elif (List[0]+List[1]+List[2])==(List[3]):
    print("Yes")
else :
    print("No")