#!/usr/bin/env python3
import sys

def fib_i(count):
	last = 0
	current = 1
	while count > 0:
		print(current)
		new_current = last + current
		last = current
		current = new_current
		count = count - 1


def fib_r(last, cur, count):
	print(cur)
	if count != 0:
		fib_r(cur, last + cur, count-1)


if __name__ == '__main__':
	print(sys.argv)
	if len(sys.argv) < 2:
		print("Usage: fibbonaci.py <count>")
		sys.exit(1)

	count = int(sys.argv[1])
	fib_r(0, 1, count - 1)
	fib_i(count)
