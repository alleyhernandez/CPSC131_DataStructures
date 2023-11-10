
# Quiz 2: Constructor, Copy Constructor, Inheritance, Templates, Exceptions, Access Modifiers, References, Function Overloading

### Which constructor initializes the objects using another one that already created?
1. Default Constructor 
2. Destructor
3. Copy Constructor ****CORRECT****
4. Parameterized Constructor 


### How you will create a new object obj2 from obj1 for following class using copy constructor
```go
class Demo{

     int a;

     public:

          Demo(int n1){

              a = n1;

         }

         Demo(Demo &obj){

             a = obj.a;       

        }

};

int main(){

}
```

1. Demo obj1,obj2;
obj1 = obj2;
2. Demo obj2(4);
3. Demo obj1(4);
Demo obj2 = obj1;
4. Demo obj2 = copy(obj1); 


### Which of the following is not a type of pointer ?
