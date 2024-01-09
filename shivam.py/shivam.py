username="Shivam"
password=12345
a=input()
if a==username:
    b=int(input())
    if b==password:
        print("Access Granted")
    else:
        print("Access Denied")
else:
    print('incorect username')