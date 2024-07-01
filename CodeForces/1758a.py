def reverse(s):
    str = ""
    for i in s:
        str = i + str
    return str

x = input()
x = int(x)
for i in range(x):
	s = input()
	s1 = reverse(s)

	s3 = s+s1

	print(s3)