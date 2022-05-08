# OOPS_CONCEPT_C++

### Object-oriented programming – As the name suggests uses objects in programming. Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc in programming. `The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.`

<br>
<div align="center">
    <img src="https://media.geeksforgeeks.org/wp-content/uploads/OOPs-Concepts.jpg" width=500px alt="Types Of OOPs">
</div>
<br>

# Classes And Objects

- The building block of C++ that leads to Object-Oriented programming is a `Class`.
- It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class.
- A class is like a blueprint for an object.
- `Object`: An Object is an identifiable entity with some characteristics and behaviour. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

| Topics                                                                                                                    | Programs                                                                                                                                                                  |
| ------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [1- Structure Of Class](https://github.com/hacker-404-error/OOPS-IN-CPP#structure-of-class)                               | [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/A-Structure_Of_Class.cpp)          |
| [2- Nesting Of Member Function](https://github.com/hacker-404-error/OOPS-IN-CPP#nesting-of-member-function)               | [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/B1-Inline_Member_Function.cpp)     |
| [3- Making an Outside Function Inline](https://github.com/hacker-404-error/OOPS-IN-CPP#making-an-outside-function-inline) | [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/B1-Inline_Member_Function.cpp)     |
| [4- Array within a Class](https://github.com/hacker-404-error/OOPS-IN-CPP#array-within-a-class)                           | [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/C-Array_Within_Class.cpp)          |
| [5- Memory Allocation For Objects](https://github.com/hacker-404-error/OOPS-IN-CPP#memory-allocation-for-objects)         |                                                                                                                                                                           |
| [6- Static Data Members](https://github.com/hacker-404-error/OOPS-IN-CPP#static-data-members-important)                   | [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/D-Static_Data_Members.cpp)         |
| [7- Static Member Function](https://github.com/hacker-404-error/OOPS-IN-CPP#static-member-function-important)             | [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/E-Static_Member_Function.cpp)      |
| [8- Array Of Objects](https://github.com/hacker-404-error/OOPS-IN-CPP#array-of-objects)                                   | [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/F-Arrays_Of_Objects.cpp)           |
| [9- Objects As Fnction Argument](https://github.com/hacker-404-error/OOPS-IN-CPP#objects-as-fnction-argument)             | [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/G-Object_As_Function_Argument.cpp) |
| [Friendly Functions](https://github.com/hacker-404-error/OOPS-IN-CPP#friendly-functions)                                  | [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/H-Friendly_Function.cpp)           |
|                                                                                                                           |                                                                                                                                                                           |

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

## `Static Data Members` `*Important`

- Static data members are class members that are declared using static keywords.
- A static member has certain special characteristics. These are:
  - Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
  - It is initialized before any object of this class is being created, even before main starts.
  - It is visible only within the class, but its lifetime is the entire program

```
class static_data
{
    private:
        static int count;  //Declaraing static data member
        int num;
    public:
        void get(int a)
        {
            num=a;
            cout<<a;
        }
        void count_static()
        {
            count++;
            cout<<"\ncount = "<<count;
        }

};

//this is defination of static dtata members

int static_data :: count;

/*because they are not associated with objects they have their own memory.
and they are associated with the class , they are also called class variables*/

```

<br>
<div align="center">
    <img src="https://lessons2all.com/images/u2pic5.jpg" width=500px alt="Memory allocation of Static Data Members">
</div>
<br>

Static Data Member:<img src="https://c.tenor.com/CsqnkjKnojgAAAAi/dm4uz3-foekoe.gif" width=50px alt="pointing hand"> [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/D-Static_Data_Members.cpp)

---

## `Static Member Function` `*Important`

- The static member functions are special functions which is defined using the static keyword.
- A static member function can only access static data member, other static member functions declared in the same class.
- If the static member function accesses any non-static data member or non-static member function, it throws an error.
- We can access the static member function using the class name. : `Class-name :: Static_Function_Name;`
- A static member function can be called even if no objects of the class exist.

```
class Class_Name
{
    private:
        static data_type data_Member_1;
        static data_type data_Member_2;
        data_type data_Member_3;
    public:
        static data_type Member_Function_1();
        static data_type Member_Function_2();
        data_type Member_Function();
};

data_type Class_Name:: Member_Function_1()
{
    /*Can only access static member function : */

        Member_Function_1();
        Member_Function_2();


    /*Can only access static data members : */

        data_Member_1;
        data_Member_2;
}
int main()
{
    Class_Name :: Member_function_1(); // can be called using class name instead object name;
}
```

Static Member Function:<img src="https://c.tenor.com/CsqnkjKnojgAAAAi/dm4uz3-foekoe.gif" width=50px alt="pointing hand"> [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/E-Static_Member_Function.cpp)

---

## `Array Of Objects`

- The Array of Objects stores objects. An array of a class type is also known as an array of objects.
- When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access functions defined in the class, you need to create objects. `ClassName ObjectName[number of objects];`
- `Every objects will have their own data members but common member function.`

#### Advantages of Array of Objects:

- The array of objects represent storing multiple objects in a single name.
- In an array of objects, the data can be accessed randomly by using the index number.
- Reduce the time and memory by storing the data in a single variable.

```
class Class_Name
{
    private:

    /*Every Objects will have their own data members in memory */

        Data_Type Data_Member_1;
        Data_Type Data_Member_2;
        Data_Type Data_Member_3;
    public:
        data_type Member_Function_1()
        {
            /*Only one memory allocation of member function for all the objects*/
        }
        data_type Member_Function_2()
        {
            /*Only one memory allocation of member function for all the objects*/
        }
        data_type Member_Function_3()
        {
            /*Only one memory allocation of member function for all the objects*/
        }
};
int main()
{
    Class_Name Object_Name[No_Of_Objects]; // array of objects

    /*Taking inputs*/

    for(i=0;i<No_Of_Objects;i++)
    {
        Object_Name[i].Member_function_1();
    }
}
```

Array Of Objects:<img src="https://c.tenor.com/CsqnkjKnojgAAAAi/dm4uz3-foekoe.gif" width=50px alt="pointing hand"> [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/F-Arrays_Of_Objects.cpp)

---

## `Objects As Fnction Argument`

- We want to use class data type(user defined data type) as a built in data type so what ever the operation a built in data type can posses,we want all those same operation can be done in user defined data type
- we can pass the objects as function argument as same as built in datatype.
- Object can be passed by value or by reference

- If passed by value:

  - Then a whole copy of object is passed to the function and whatever
    the operation we will done will not be be reflected to the real object

- If passed by reference:
  - Then whatever the operation we will done using this reference is
    actually reflected to the real object

```
class Class_Name
{
private:
    /*Every Objects will have their own data members in memory */

    Data_Type Data_Member_1;
    Data_Type Data_Member_2;
    Data_Type Data_Member_3;

public:
    Data_Type Member_Function_1(Class_Name &); // pass by reference
    Data_Type Member_Function_2(Class_Name); // pass by value
    Data_Type Member_Function_3();
};
Data_Type Member_Function_1(Class_Name &Object_Name_1)
{
    /* Onject_Name_1 is taking refrence from Obj*/
}
Data_Type Member_Function_2(Class_Name Object_Name_1)
{
    /* A new copy of Object_Name_1 is copied to Obj */
}
Data_Type Member_Function_3()
{
    /* Normal  Function */
}

int main()
{
    Class_Name Object_Name;
    Class_Name Obj;
    Object_Name.Member_Function_1(Obj);
    Object_Name.Member_Function_2(Obj);
    Object_Name.Member_Function_3();
}

```

Objects As Fnction Argument
By Value:<img src="https://c.tenor.com/CsqnkjKnojgAAAAi/dm4uz3-foekoe.gif" width=50px alt="pointing hand"> [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/G-Object_As_Function_Argument.cpp)
By Reference:<img src="https://c.tenor.com/CsqnkjKnojgAAAAi/dm4uz3-foekoe.gif" width=50px alt="pointing hand"> [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/G1-Pass_By_Reference.cpp)

---

## `Friendly Functions`

A friend function of a class is defined outside that class' scope but it has the right to access all private and protected members of the class. Even though the prototypes for friend functions appear in the class definition, friends are not member functions.

- The function is not in the scope of the class to which it has been declared as a friend.
- It cannot be called using the object as it is not in the scope of that class.
- It can be invoked like a normal function without using the object.
- It cannot access the member names directly and has to use an object name and dot membership operator with the member name.
- It can be declared either in the private or the public part.

```
class Class_Name
{
private:
    /*Every Objects will have their own data members in memory */

    Data_Type Data_Member_1;
    Data_Type Data_Member_2;
    Data_Type Data_Member_3;

public:
    Data_Type Member_Function_1();
    Data_Type Member_Function_2();
    friend Data_Type Function_3(); // this function is friend of class_name
};

Data_Type Function_3(Class_Name A, Class_Name B) //as this is not member function,can be defined normally.
{
    /*Usually friend functionhas the object as arguments*/

    A.Data_Member_1;

    /* we can access the Private (Value) part in Friend Function with the help of Objects.
}

int main()
{
    Class_Name Object_Name;
    Class_Name Obj;

    Function_3(Object_name,Obj); // As this is not member function can be called like normal function
}

```

Friendly Functions:<img src="https://c.tenor.com/CsqnkjKnojgAAAAi/dm4uz3-foekoe.gif" width=50px alt="pointing hand"> [![Open In CPP](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](A-Classes%20&%20Objects/H-Friendly_Function.cpp)

- Member Function of one class can be friend function of anouther class.
- In such cases They are defined using the scope resolution operator.

  ```
    Class A
    {
        ---
        ---
        Data_Type Member_Function_1();
        ---
        ---
    };

    Class B
    {
        ---
        ---
        Friend Data_Type A:: Member_Function_1();

        //Member function Of Class A is now Friend Function Of B.
        ---
        ---
    };

  ```

- We Can also declare all the member functions of one Class as the friend function of anouther Class.

```
Class B
{
   ---
   ---
   friend Class A;

   // All member function of Class A is now friend to B
   ---
   ---
}
```

---

### Created And Coded By:

<a href="https://github.com/hacker-404-error"><img src="https://i.ibb.co/yYd2Xjb/In-Shot-20220309-143908060.png" alt="Avatar" style="border-radius: 50%; width:70px"></a>

<a href = "https://github.com/hacker-404-error">Pritam Das</a>

## 🔗 Feedback

If you have any feedback, please reach out to me at [![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/pritam-das-7489ab223/)
