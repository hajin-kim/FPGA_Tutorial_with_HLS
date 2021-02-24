# Troubleshooting: "Bad file descriptor in nativeDrain"

Cypress driver 원인으로 추정되는 에러가 또 떴지만 제드보드 프로그래밍은 잘 됐습니다.

![Troubleshooting%20Bad%20file%20descriptor%20in%20nativeDrain%2014395223566f4413ad25f0e44b7288e4/Untitled.png](Troubleshooting%20Bad%20file%20descriptor%20in%20nativeDrain%2014395223566f4413ad25f0e44b7288e4/Untitled.png)

![Troubleshooting%20Bad%20file%20descriptor%20in%20nativeDrain%2014395223566f4413ad25f0e44b7288e4/Untitled%201.png](Troubleshooting%20Bad%20file%20descriptor%20in%20nativeDrain%2014395223566f4413ad25f0e44b7288e4/Untitled%201.png)

Solution A: excluding standard input from the source code

- If you are doing lab06, find **scanf** in ***main.c*** and replace it to hardcoding.
    - line 68

Solution B: using alternative terminal (Thanks to Kyobin Choo)

- Putty
- Tera Term