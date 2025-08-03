def valid(sides):
    a = sides[0]
    b = sides[1]
    c = sides[2]
    if a + b <= c or a + c <= b or b + c <= a or sides.count(0) != 0:
        return False
    else:
        return True

def equilateral(sides):
    return len(set(sides)) == 1 and valid(sides) == True


def isosceles(sides):
    return len(set(sides)) <= 2 and valid(sides) == True


def scalene(sides):
    return len(set(sides)) == 3 and valid(sides) == True
