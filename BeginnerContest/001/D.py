# hhmmを分に変換する。
def to_minutes(n):
    s = str(n)
    h = int(s[:2])
    m = int(s[2:])
    return h * 60 + m


# 分をhhmmに変換する。
def to_hours_minutes(n):
    h = n // 60
    m = n % 60
    if h < 10:
        h = '0' + str(h)
    else:
        h = str(h)
    if m < 10:
        m = '0' + str(m)
    else:
        m = str(m)
    return h + m


N = int(input())
lst_times = []
for i in range(N):
    start, end = input().split('-')
    # 開始時間を直前の5分単位の時刻にまるめる。
    start = to_minutes(start) - to_minutes(start) % 5
    # 終了時間を直後の5分単位の時刻にまるめる。
    # 余りが0の時は5を余計に足してしまうので場合分けする。
    if to_minutes(end) % 5 == 0:
        end = to_minutes(end)
    else:
        end = to_minutes(end) + (5 - to_minutes(end) % 5)
    lst_times.append([start, end])
# いもす法を使う。
# 2359ではなく2400まであるので、いもす法の配列は[0]から[2401]。
imos = [0 for i in range(24 * 60 + 2)]
for time in lst_times:
    # 開始処理　カウントを1増やす。
    imos[time[0]] += 1
    # 終了処理　カウントを1減らす。
    imos[time[1] + 1] -= 1
# それまでの配列を全て足す。
sum_imos = []
j = 0
for i in imos:
    sum_imos.append(j + i)
    j += i
# flagを置くことで、sum_imosの配列が0から正に変化するタイミングと
# 正から0に変化するタイミングを把握する。
ans = []
start, end, flag = 0, 0, False
for i in range(len(sum_imos)):
    if sum_imos[i] == 0 and flag == False:
        continue
    elif sum_imos[i] != 0 and flag == False:
        start = i
        flag = True
    elif sum_imos[i] != 0 and flag == True:
        continue
    elif sum_imos[i] == 0 and flag == True:
        end = i - 1
        ans.append(to_hours_minutes(start) + '-' + to_hours_minutes(end))
        start, end, flag = 0, 0, False
for i in ans:
    print(i)