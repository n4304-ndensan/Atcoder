s = input()
text = []
for i in range(7):
    text.append(s[i])

correct_text = 'atcoder'

count = 0
index = 0
while index < 6:
    position = text.index(correct_text[index])
    if position == index:
        index += 1
    else:
        text[position], text[position-1] = text[position-1], text[position]
        count += 1

print(count)
