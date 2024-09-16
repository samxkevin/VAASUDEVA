cube=lambda x:x**3
def fibonacci(n):
    list = [0, 1]
    for _ in range(2, n):
        list.append(list[-1] + list[-2])
    return list
if __name__ == '__main__':
    n=int(input())
    print(list(map(cube, fibonacci(n))))