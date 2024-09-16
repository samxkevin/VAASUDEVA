s=input()
alnum=alpha=digit=lower=upper=False
for _ in s:
    if(_.isalnum()):
        alnum=True
    if(_.isalpha()):
        alpha=True
    if(_.isdigit()):
        digit=True
    if(_.islower()):
        lower=True
    if(_.isupper()):
        upper=True
print(alnum)
print(alpha)
print(digit)
print(lower)
print(upper)