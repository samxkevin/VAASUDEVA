import re
pattern = re.compile(r'^[456]\d{3}(-?\d{4}){3}$')
n=int(input())
for _ in range(n):
    s=input().strip()
    if pattern.match(s):
        s_no_hyphens=s.replace("-", "")
        if re.search(r'(\d)\1{3}', s_no_hyphens):
            print("Invalid")
        else:
            print("Valid")
    else:
        print("Invalid")
