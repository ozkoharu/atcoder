n = int(input())

if n % 2 == 0:
    c = (n - 2) // 2
    print('-' * c + '=' * 2 + '-' * c)
else:
    c = (n - 1) // 2
    print('-' * c + '=' + '-'*c)
