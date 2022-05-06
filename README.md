# OOPS_CONCEPT_C++

### Object-oriented programming – As the name suggests uses objects in programming. Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc in programming. `The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.`

<br>
<div align="center">
    <img src="https://media.geeksforgeeks.org/wp-content/uploads/OOPs-Concepts.jpg" alt="Types Of OOPs">
</div>
<br>

# Classes And Objects

- The building block of C++ that leads to Object-Oriented programming is a `Class`.
- It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class.
- A class is like a blueprint for an object.
- `Object`: An Object is an identifiable entity with some characteristics and behaviour. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

|                                                                                                                           |                                                                                                                                                                       |
| ------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [1- Structure Of Class](https://github.com/hacker-404-error/OOPS-IN-CPP#structure-of-class)                               | [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/A-Structure_Of_Class.cpp)      |
| [2- Nesting Of Member Function](https://github.com/hacker-404-error/OOPS-IN-CPP#nesting-of-member-function)               | [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/B1-Inline_Member_Function.cpp) |
| [3- Making an Outside Function Inline](https://github.com/hacker-404-error/OOPS-IN-CPP#making-an-outside-function-inline) | [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/B1-Inline_Member_Function.cpp) |
| [4- Array within a Class](https://github.com/hacker-404-error/OOPS-IN-CPP#array-within-a-class)                           | [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/C-Array_Within_Class.cpp)      |
| [5- Memory Allocation For Objects](https://github.com/hacker-404-error/OOPS-IN-CPP#memory-allocation-for-objects)         |                                                                                                                                                                       |
| []()                                                                                                                      |                                                                                                                                                                       |

## `Structure Of Class`

```
class A-Structure_Of_Class
{
private:
    /* data */
public:
    A-Structure_Of_Class(/* args */);
    ~A-Structure_Of_Class();
};

A-Structure_Of_Class::A-Structure_Of_Class(/* args */)
{
}

A-Structure_Of_Class::~A-Structure_Of_Class()
{
}
```

Structure Of Class :<img src="https://c.tenor.com/CsqnkjKnojgAAAAi/dm4uz3-foekoe.gif" width=50px alt="pointing hand"> [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/A-Structure_Of_Class.cpp)

---

## `Making an Outside Function Inline`

- We can define a member function outside the class definition and use make it inline using qualifier inline in the header line of function definition.

```
inlnie void Class_Name :: Function_1()
{
    /*Code*/
    /*Function which are declare inside the class are by default inline
    But the function which are defined outside the function are not inline
    ,we need to explicitly apply inline property*/
}
```

Making an Outside Function Inline:<img src="https://c.tenor.com/CsqnkjKnojgAAAAi/dm4uz3-foekoe.gif" width=50px alt="pointing hand"> [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/B1-Inline_Member_Function.cpp)

---

## `Nesting Of Member Function`

- Whenever we call a member function inside another member function of one class it is known as Nesting of the member function. - Generally, the member function which is called by another member function is kept private so that it cannot be called directly using the dot operator.

```
void Class_Name :: Function_1()
{
    Function_2();  //nesting of member function
    // calling Functin_2 from From Function_1
}
```

Nesting Of Member Function:<img src="https://c.tenor.com/CsqnkjKnojgAAAAi/dm4uz3-foekoe.gif" width=50px alt="pointing hand"> [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/B-Nesting_Of_MemberFunction.cpp)

---

## `Array within a Class`

- Arrays can be declared as the members of a class.
- The arrays can be declared as private, public or protected members of the class.
- The member functions of the class can perform any operation on this array which is the data member of the class.

```
class Class_Name
{
    private:
        int a[10];  //array of 10 integers
    public:
        int b[100] // array inside the class can be declare in public or private
};
```

Array within a Class:<img src="https://c.tenor.com/CsqnkjKnojgAAAAi/dm4uz3-foekoe.gif" width=50px alt="pointing hand"> [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/C-Array_Within_Class.cpp)

---

## `Memory Allocation For Objects`

- C++ objects are stored in heap memory (Heap is a resizable, dynamic memory), objects are garbage collected from heap, when not in use, heap can grow and shrink as per the requirements.

##### Internal allocation :

- When objects are allocated, multiple copies of members (data) is created for each object, but methods are allocated only once, in a common memory area and are shared by all the objects.

<br>
<div align="center">
    <img src="https://i.ibb.co/T0906rN/memory-location-of-obj.jpg" alt="Memory allocation Objects">
</div>
<br>

---

---

### Created And Coded By:

<a href="https://github.com/hacker-404-error"><img src="https://i.ibb.co/yYd2Xjb/In-Shot-20220309-143908060.png" alt="Avatar" style="border-radius: 50%; width:70px"></a>

<a href = "https://github.com/hacker-404-error">Pritam Das</a>

## 🔗 Feedback

If you have any feedback, please reach out to me at [![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/pritam-das-7489ab223/)
