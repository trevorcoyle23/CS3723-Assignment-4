import sys

def sum(args):
	x = 0
	y = 0
	z = 0
	
	for num_str in args:
		n = int(num_str)
		x += n
		y += n * n
		z += n * n * n
	return (x, y, z)

if len(sys.argv) < 2:
	print("Usage: %s <numbers[]>" % sys.argv[0])
	sys.exit(1)

x, y, z = sum(sys.argv[1:])
print("Sum=%d Sum2=%d Sum3=%d" % (x, y, z))
