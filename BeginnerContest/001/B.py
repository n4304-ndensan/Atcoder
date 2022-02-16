def translate_km(m: float) -> float:
    km = m / float(1000)
    return km


def translate_vv(km: float) -> str:
    if km < 0.1:
        vv = '00'
    elif 0.1 <= km <= 5:
        if km < 1:
            km *= 10
            km = int(km)
            km = str(km)
            vv = ('0' + km)
        else:
            vv = (int(km * 10))
    elif 6 <= km <= 30:
        vv = int(km + 50)
    elif 35 <= km <= 70:
        vv = int((km - 30) / 5 + 80)
    else:
        vv = int(89)
    return vv

m = float(input())
km = translate_km(m)
vv = translate_vv(km)
print(vv)