
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


### What are the properties of references??
1. Cannot be reassigned ****CORRECT****
2. Cannot be initialized to null ****CORRECT****
3. Can be reassigned 
4. Can be null or invalid 
5. References must be initialized ****CORRECT****

### The references that does not allow changes to referred object
const references 
const 
Const Reference 
Constant Reference 
Const reference 
const reference 
Constant 

### What does the following print for fun(5,2)?
```go
int fun(int x, int y){

       if(x==0)

          return y;

       return fun(x-1,x*y)

}
```
1. 54 
2. 120 
3. 10 
4. 240 ****CORRECT****

### What does following function does in general?
```go
int fun(int x, int y){
   if y==0
        return 0;

return (x+fun(x,y-1));

}
```
