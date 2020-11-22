import string
import random

s=''.join(random.choice(string.ascii_uppercase+ string.ascii_lowercase + string.digits) for i in range(6))
print(s)
NodeKey="A6yHZl6a"
user_input=input("Enter The Captcha displayed :: ")
if(user_input==s):
    print("Successful Login")
else:
    print("Failed Login")
