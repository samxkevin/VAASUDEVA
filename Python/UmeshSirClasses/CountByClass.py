count=0
word=""
maxCount=0
words=[]

file1=open('file2.txt','r')
Lines=file1.readlines()
for Line in Lines:
    string=Line.lower().replace(","," ").replace("."," ").split(" ")
    for s in string:
        words.append(s)
        for i in range(len(words)):
            count=1
            for j in range(i+1,len(words)):
                if(words[i]==words[j]):
                                    count+=1
                                    if(count>maxCount):
                                        maxCount=count
                                        word=words[i]
print(word,maxCount)
file1.close()                                        