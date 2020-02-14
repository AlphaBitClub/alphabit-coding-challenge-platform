def owl_race(x1, v1, x2, v2):
    if (v1 == v2):
        return "YES" if(x1 == x2) else "NO"
    else:
        t = int(abs((x2-x1)/(v1-v2)))
        eq1 = x1 + v1 * t
        eq2 = x2 + v2 * t
        if (eq1 == eq2):
            return "YES"
        else:
            return "NO"


x1, v1, x2, v2 = map(int, input().split())

print(owl_race(x1, v1, x2, v2))
