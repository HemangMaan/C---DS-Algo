def defangIPaddr(address: str) -> str:
    return address.replace('.','[.]')
def IP(address: str) -> str:
    ans = []
    for i in address:
        if i.isdigit():
            ans.append(i)
        else:
            ans.append('[.]')
    return ans
address = input("enter address")
print(defangIPaddr(address))
print(IP(address))