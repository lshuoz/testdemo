#!/usr/bin/python

print 'hello','world!'
print r'Line Breaks \n'
print '100 + 200 =',100+200
#name = raw_input('Pls Input Your Name:')
#print 'My Name Is :',name

#a = raw_input('Pls Input A Number : ')
a = '124'
print 'Input : '+a

a = eval(a)
#a = input('Pls Input A Number : ')
if a >= 0:
    print a,'Is A Positive Number'
else:
    print a,'Is A Negetive Number'

print not(3 > 2)
print not 1 > 2 #True '>' have a higher priority than 'not'

strfmt = r'''My Name Is %(name)s \r\n
And He Is %(hisname)s'''
print strfmt%{'name':'lshuoz','hisname':'swords'}

n=123
f=456.789
s1 = '\'Hello, world\''
s2 = '\'Hello, \\\'Adam\\\''
s3 = 'r\'Hello, "Bart"\''
s4='r\'\'\'Hello,\nLisa!\'\'\''
print(n)
print(f)
print(s1)
print(s3)
print(s4)
