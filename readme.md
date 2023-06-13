# **2023 자료구조 과제 리포지토리입니다.**


## **컴파일 방법 (Linux)**

파일들이 있는 디렉토리에서 아래의 다음 명령어 실행

### **1) main.o, calc.o, stack.o, queue.o 목적 파일 생성**


```gcc -Wall -c -g main.c

gcc -Wall -c -g calc.c

gcc -Wall -c -g stack.c

gcc -Wall -c -g queue.c```


### **2) calculator.exe 실행 파일 생성**

gcc -o calculator main.o calc.o stack.o queue.o


### **3) 실행 파일 실행**

./calculator


