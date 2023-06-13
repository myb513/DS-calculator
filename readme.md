# **2023 자료구조 과제 리포지토리입니다.(Linux)**


* ## **컴파일 방법**


파일들이 있는 디렉토리에서 아래의 다음 명령어 실행

### **1) main.o, calc.o, stack.o, queue.o 목적 파일 생성**


```gcc -Wall -c -g main.c```

```gcc -Wall -c -g calc.c```

```gcc -Wall -c -g stack.c```

```gcc -Wall -c -g queue.c```


### **2) calculator.exe 실행 파일 생성**

```gcc -o calculator main.o calc.o stack.o queue.o```


### **3) 실행 파일 실행**

```./calculator```

* ## **makefile 이용**

### **1) 터미널에서 다음 명령어를 입력하여 Makefile을 실행**

```make```

### **2) 실행 파일 실행**

```./calculator```<br>


<br>

---
<br>


# 구현목표

## 계산기 만들기 2

Infix notation으로 입력되는 다음과 같은 식을 계산하는 계산기를 작성한다. 반드시 C 언어로 작성해야 하며 윈도
우즈, 리눅스, 맥 환경에서 모두 컴파일 되고 동작되어야 한다.

계산기는 실행되면 식이 입력되기를 기다리고 식을 입력하고 [enter]를 입력하면 결과를 출력한다. 어떠한 식도 입
력하지 않은 상태에서 [enter]를 입력하면 프로그램이 종료된다.

구현해야 하는 계산기를 다음과 같은 연산자를 포함한다. 이 연산자들의 우선 순위는 수학에서 일반적인 우선순위
를 따른다.

- ‘+’ : 덧셈
- ‘-‘ : 뺄셈
- ‘*’ : 곱셈
- ‘/‘ : 나눗셈
- ‘%’ : 나머지 연산
- ‘^’ : 지수 승 연산
- ‘(‘, ‘)’ : 소괄호를 이용한 연산 우선 순위 결정
- log10 : 자연로그함수
- log2: 2를 밑으로 하는 로그함수

#### 또한 구현해야 할 연산들은 반드시 큐와 스택을 사용하여 구현해야 한다. 다음은 요구사항이다.

#### 1. 실수 입력이 가능하며 자리수 길이 제한은 없다. 1, 10, 100, 0.34, 100.12345, ...

2. 스택과 큐는 반드시 사용해야 하며 반드시 별도의 파일로 만들어져 있어야 한다. stack.c, stack.h, queue.c
    queue.h로 만들어져야 한다.
3. 입력문은 수식이며 “bc”, “노래”, “!@#@$#@24”와 같은 수식과 관련없는 문자열은 입력을 거부해야 한다.
4. 오류 메시지를 출력해야 한다.
5. 단항 연산자를 허용한다.
6. 입력 수식에 오류가 포함되었을 경우 이를 찾아서 오류를 출력해야 한다.
7. 실수 처리는 허용되는 자리수 내에서 모두 처리하고 최종 출력은 소수점 2자리까지 한다 (소수점 3자리에서
    반올림).


#### 과제시작: 2023년 6월 1일

#### 과제종료: 2023년 6월 12일 23시 59분



# 진행상황

## 5/18~ 6/8
- [x] 스택 ADT 구현 
- [x] 큐 ADT 구현 
- [x] 연산 우선순위 책정 
- [x] 괄호쌍 검사
- [x] 입력 예외처리 (유효하지 않은 문자, 연산자 위치, %/0)
- [ ] 연산자기호(%, *, +, -, /, ^)와 (37, 42, 43, 45, 47, 94)의 구분 
- [x] makefile 작성

## 6/1~ 6/12

- [x] 실수입력 허용 
- [x] 로그연산 추가 ('log2(), log10())
- [x] 음수입력 허용
- [x] 입력 예외처리 



