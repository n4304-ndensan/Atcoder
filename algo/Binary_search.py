'二分探索'

def binary_search(data, value):
    left = 0
    #探索する範囲の左端
    right = len(data) - 1
    #探索する範囲の右端は設定
    while left <= right:
        mid = (left + right) // 2
        #探索する範囲の中央を計算
        if data[mid] == value:
            #中央の値と一致した場合配置を返す
            return mid
        elif data[mid] < value:
            #中央の値より大きい場合は探索範囲の左を変える
            left = mid + 1
        else:
            #中央の値より小さい場合は探索範囲の右を変える
            right = mid - 1


        #見つからなかった場合

data = [10, 20, 30, 40, 50, 60, 70, 80, 90]

print(binary_search(data, 90))
'8'
print(binary_search(data, 50))
'4'



