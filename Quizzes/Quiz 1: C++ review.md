
# Quiz 1: C++ Review

### Which one of the following are array? 
1. [12,34,56,23]   ****CORRECT****
2. [12,34,56,7.8,6.7,89]
3. [98,67,"D",90,78,"S"] 
4. "Computer_Science " 
5. ['D',' A', ' T', 'A', 'S', 'T', 'R', 'U', 'C', 'T']   ****CORRECT****


### What is the use of subscript operator??
1. To find out maximum of array 
2. To reverse the array 
3. To increment the array element 
4. To write and read the array element   ****CORRECT****


### Which of the following is not a type of pointer ?
1. Null Pointer 
2. Dangling Pointer 
3. Intelligent Pointer   ****CORRECT****
4. Valid Pointer


### What will happen in the following C++ snippet?
```go
int main(){          

 int a = 100, b = 200;

           int *p = &a, *q = &b;

           p = q;

}
```

1. q points to a 
2. p now points to a 
3. p now points to b   ****CORRECT****
4. a is assigned to b 


### What is the output of following ?
```go
int main(){   

int a = 89, b = 19;
    int *ptr1,*ptr2;
    ptr1 = &a;
    ptr2 = &b;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    std::cout<<a<<" "<<b;

}
```

1. 19 89  ****CORRECT****
2. 89 19 
3. Compilation Error 
4. 0x7fff179aba98 0x7fff179aba94 


### Dangling Pointer points to deleted object.
1. TRUE
2. FALSE  ****CORRECT****


### Whenever a new object created by default it get stored in dynamic memory.
1. TRUE
2. FALSE ****CORRECT****


### A situation that occurs in computer programs when memory that is allocated and no longer needed is not properly deallocated.
MEMORY LEAK  ****CORRECT****


### What is true about smart pointers? 
1. Stores the address  ****CORRECT****
2. raw pointers are smart pointers. 
3. Wrappers or containers to raw pointers  ****CORRECT****
4. Automatically creates and deletes the memory  ****CORRECT****
5. Stores the value 


### Constructors are the special member functions which has same name as class and gets involked automatically whenever object is created. 
1. TRUE  ****CORRECT****
2. FALSE 


### What is the output of follwing C++ code?
```go
#include<iostream>

int main(){

int arr[5] = {12,34,24,56,78}

std::cout<<arr[2]<<" "<<arr[4]<<" "<<arr[8];

}
```
1. Compile time error 
2. 12 34 0 
3. 32 56 80 
4. 24 78 Garbage value ****CORRECT****
