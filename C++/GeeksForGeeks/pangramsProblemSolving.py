s=list(input().lower())
alphabets=['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
if all(letter in s for letter in alphabets):
    print("pangram")
else:
    print("not pangram")