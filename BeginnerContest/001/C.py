from decimal import Decimal, ROUND_HALF_UP, ROUND_HALF_EVEN


def wind_direction(deg: int) -> str:
    direction = ['NNE', 'NE', 'ENE', 'E', 'ESE', 'SE',
                 'SSE', 'S', 'SSW', 'SW', 'WSW', 'W', 'WNW',
                 'NW', 'NNW']
    len_direction = len(direction)
    if 0 <= deg < 11.25:
        return 'N'
    number = 112.5
    for i in range(len_direction):
        if number <= deg < number + 225:
            return direction[i]
        number += 225


def wind_path(dis: int) -> int:
    dis /= 60
    dis = str(dis)
    dis = Decimal(dis).quantize(Decimal('0.1'), rounding=ROUND_HALF_UP)
    dis = float(dis)
    if 0.0 <= dis <= 0.2:
        return 0
    elif 0.3 <= dis <= 1.5:
        return 1
    elif 1.6 <= dis <= 3.3:
        return 2
    elif 3.4 <= dis <= 5.4:
        return 3
    elif 5.5 <= dis <= 7.9:
        return 4
    elif 8.0 <= dis <= 10.7:
        return 5
    elif 10.8 <= dis <= 13.8:
        return 6
    elif 13.9 <= dis <= 17.1:
        return 7
    elif 17.2 <= dis <= 20.7:
        return 8
    elif 20.8 <= dis <= 24.4:
        return 9
    elif 24.5 <= dis <= 28.4:
        return 10
    elif 28.5 <= dis <= 32.6:
        return 11
    else:
        return 12


Dir, W = map(int, input().split())
dir = wind_direction(Dir)
w = wind_path(W)
if w == 0:
    dir = 'C'
print(dir, w)