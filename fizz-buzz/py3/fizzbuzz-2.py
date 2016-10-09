#!/usr/bin/env python3

def has_digit(v, digit):
    while v > 0:
        d = v % 10
        v = v / 10
        if d == digit:
            return True
    return False

if __name__ == "__main__":
    for i in range(100):
        out = i
        m3 = i % 3 == 0 or has_digit(i, 3)
        m5 = i % 5 == 0 or has_digit(i, 5)
        if m3 and m5:
            out = 'FizzBuz'
        elif m3:
            out = 'Fizz'
        elif m5:
            out = 'Buzz'

        print(out)

