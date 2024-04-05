T = int(input())
#T를 입력받음
stack = []
for _ in range(T):
    string = input()
    string +=' '
    reversed_string = ''
    for char in string:
        if char!=' ':
            stack.append(char)
            #공백이 아니면 글자추가함
        else:
            while stack:
                reversed_string += stack.pop()
            reversed_string += ' '
    print(reversed_string)