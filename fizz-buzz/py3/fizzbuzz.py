#!/usr/bin/env python3

if __name__ == "__main__":
    for i in range(100):
        out = i
        m3 = i % 3 == 0
        m5 = i % 5 == 0
        if m3 and m5:
            out = 'FizzBuz'
        elif m3:
            out = 'Fizz'
        elif m5:
            out = 'Buzz'

        print(out)

