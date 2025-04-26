n = int(input())
login_flg = False

unauthorized = 0

for i in range(n):
  s = input()
  # ログイン操作なら、フラグをtrueにする
  if s == 'login':
    login_flg = True

  # ログアウトなら、フラグFalse
  if s == 'logout':
    login_flg = False

  # 認証エラー時
  if s == 'private' and not login_flg:
    unauthorized += 1

print(unauthorized)
