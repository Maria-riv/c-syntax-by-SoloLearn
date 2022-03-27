#include <iostream>
using namespace std;

int main () 
{
    //here are some notes on the syntax enjoy!

    /*
    * first: the first program "hello world"
    * and the /n called backSlash that mean space
    
    ------------CODE--------------
    cout << "Hola, mundo \n";
    You uses "cout <<" for print in the screen 
    -----------END---------------
    < I will tried write this in english ok >

    ~ You must define each variable always
        For example:

        int a,b; <--- these ";" is important, you can define variables like this

        // Defines two  variables of typer int

    ~ You can define a variable for add up
        For example:
        int a = 20;
        int b = 25;
        int sum = a + b; <---- You should use "+" for add up 
        //Now sum equals 45
    or...
        int a,b;
        a = 20;
        b = 25;
        int sum = a + b; { this expression is same that at the last }
    -------------------------------------------------------------------------
    ~ user input 
    For user input you must use "cin" and the operator ">>"
    for example;
    ---------CODE------------
    int num
    cin >> num;
    ---------END-------------
    Also you can use more vaariables like a this:
     cin >> a >> b
    
    code sample
    ------------CODE--------
    In this code you can see an example of the user imput in c++ 
    and also this print the number input
        int num;
        cin >> num;
        cout << "the number is " << num;
    -----------END----------

    new code sample
    --------CODE------------
    In this code you can see two integer variables a and b, 
    user input is first requested, finally this variables add up
    and print up.

        int a,b;
        int sum;
        cout << "Enter a number \n";
        cin >> a;
        cout << "Enter a another number \n";
        cin >> b;
        sum = a+b;
        cout << "Sum is: " ;
        cout << sum << endl;        
    --------END-------------

    Keyword "auto" 
    the auto command allows you to automatically deduce the type of declared variable
    for example
    ---------CODE-----------
        auto x = 4; //integer
        auto y = 3.45 // float
        auto z = "LOL" //string
    ---------END------------  

    ~ Operators...
    addition            --> +  --> x + y 
    subtraction         --> -  --> x - y
    multiplication      --> *  --> x * y
    division            --> /  --> x / y
    module or residue   --> %  --> x % y

    ~ Assignment operators. . .
    int x = 10;
    x += 4; // equivalent to x = x + 4
    x -= 5; // equivalent to x = x - 5

    and the same for this...
    x *= 3;
    x /= 2;
    x %= 4;

    also you can use this like in Java
    x++; // increment

    prefijo       vs        sufijo
    x = 5;                  x = 5;
    y = ++x;                y = x++;
   // x is 6, y is 6       // x is 6, y is 5


    EXERCISE 
    --------------CODE-----------------------
        int totalPasajeros, pasajerosRestantes;
        cout << "Ingrese la cant de pasajeros: \n";
        cin >> totalPasajeros;
        if (totalPasajeros <= 50)
        {
            totalPasajeros = 50 - totalPasajeros;
            cout << totalPasajeros;
        }else
        {
            pasajerosRestantes = totalPasajeros % 50;
            pasajerosRestantes = 50 - pasajerosRestantes;
            cout << pasajerosRestantes;
        }
    -----------END---------------------------
    statement if
    if (condition )
    {
        code 
    }
    Operators...
     >= mayor o igual
     <= menor o igual
     == igual a 
     != distinto

    Statement else 

    if ( condition )
    {
        code 
    }else
    {
         code
    }

    **THIS EXPRESION IS VALID***
    int a = 10;
    if (a > 5)
        cout << "yes";
    else
        cout << "no";
    

    Loop While
        while (// condition)
        {
            // code 
        }
    Loop for
    for (size_t i = 0; i < count; i++)
    {
        code
    }
    example
    for (int i =0; i < 10; i++){
        code
    }
    int  x;
    cin >> x;
    cout << x << endl;
    for(int i =x; i > 0; i--){
        if(i%5 == 0){
            cout << "Beep"<< endl;
        }else
        {
            cout << i << endl;
        }

    }

    Expressions


    The examples below show legal and illegal C++ expressions.
        55+15 //  legal C++ expression
        //Both operands of the + operator are integers

        55 + "John" // illegal
        // The + operator is not defined for integer and string
    CPP
    You can implement some logic for illegal expressions by overloading operators. 
    -------------------------------------------------------------------------------
    Numeric Data Types


    Numeric data types include:
    Integers (whole numbers), such as -7, 42.
    Floating point numbers, such as 3.14, -42.67.

    ------------------------------------------------------------------------------
    Strings & Characters


    A string is composed of numbers, characters, or symbols. String literals are placed 
    in double quotation marks; some examples are "Hello", "My name is David", and similar.

    Characters are single letters or symbols, and must be enclosed between single quotes,
    like 'a', 'b', etc.
    In C++, single quotation marks indicate a character; double quotes create a string
    literal. While 'a' is a single a character literal, "a" is a string literal.

    ---------------------------------------------------------------------------------
    Booleans


    The Boolean data type returns just two possible values: true (1) and false (0).
    Conditional expressions are an example of Boolean data type.

    ---------------------------------------------------------------------------------
    Integers


    The integer type holds non-fractional numbers, which can be positive or negative. 
    Examples of integers would include 42, -42, and similar numbers.
    The size of the integer type varies according to the architecture of the system on 
    which the program runs, although 4 bytes is the minimum size in most modern system 
    architectures.
    ---------------------------------------------------------------------------------
    Integers


    The integer type holds non-fractional numbers, which can be positive or negative. 
    Examples of integers would include 42, -42, and similar numbers.
    The size of the integer type varies according to the architecture of the system on
    which the program runs, although 4 bytes is the minimum size in most modern system architectures.
    ---------------------------------------------------------------------------------

    Floating Point Numbers


    A floating point type variable can hold a real number, such as 420.0, -3.33, or 0.03325.

    The words floating point refer to the fact that a varying number of digits can appear 
    before and after the decimal point. You could say that the decimal has the ability to 
    "float".

    There are three different floating point data types: float, double, and long double.

    In most modern architectures, a float is 4 bytes, a double is 8, and a long double can 
    be equivalent to a double (8 bytes), or 16 bytes.
    For example:
    double temp = 4.21;
    CPP
    Floating point data types are always signed, which means that they have the capability 
    to hold both positive and negative values.
    --------------------------------------------------------------------------------------
    Strings
    
    A string is an ordered sequence of characters, enclosed in double quotation marks.
    It is part of the Standard Library.
    You need to include the <string> library to use the string data type. Alternatively, 
    you can use a library that includes the string library.
    The <string> library is included in the <iostream> library, so you don't need to include
    <string> separately, if you already use <iostream>.
----------------------------------------------------------------------------------------------
    Characters

    A char variable holds a 1-byte integer. However, instead of interpreting the value of the char 
    as an integer, the value of a char variable is typically interpreted as an ASCII character.

    A character is enclosed between single quotes (such as 'a', 'b', etc).
    For example:
    char test = 'S';
    American Standard Code for Information Interchange (ASCII) is a character-encoding scheme that is
    used to represent text in computers.
----------------------------------------------------------------------------------------------
    Booleans

    Boolean variables only have two possible values: true (1) and false (0).
    To declare a boolean variable, we use the keyword bool.
    bool online = false;
    bool logged_in = true;
    If a Boolean value is assigned to an integer, true becomes 1 and false becomes 0.
    If an integer value is assigned to a Boolean, 0 becomes false and any value that has a non-zero 
    value becomes true.
----------------------------------------------------------------------------------------------
    Variable Naming Rules

    Use the following rules when naming variables:
    - All variable names must begin with a letter of the alphabet or an underscore( _ ).
    - After the initial letter, variable names can contain additional letters, as well as numbers. 
    Blank spaces or special characters are not allowed in variable names.
    There are two known naming conventions:
    Pascal case: The first letter in the identifier and the first letter of each subsequent concatenated 
    word are capitalized. For example: BackColor
    Camel case: The first letter of an identifier is lowercase and the first letter of each subsequent 
    concatenated word is capitalized. For example: backColor
-----------------------------------------------------------------------------------------------
    Case-Sensitivity

    C++ is case-sensitive, which means that an identifier written in uppercase is not equivalent to 
    another one with the same name in lowercase.
    For example, myvariable is not the same as MYVARIABLE and not the same as MyVariable.
    These are three different variables.
    Choose variable names that suggest the usage, for example: firstName, lastName.
-----------------------------------------------------------------------------------------------
    Arrays

    An array is used to store a collection of data, but it may be useful to think of an array as a 
    collection of variables that are all of the same type.
    Instead of declaring multiple variables and storing individual values, you can declare a single 
    array to store all the values.
    When declaring an array, specify its element types, as well as the number of elements it will hold.

    For example:
    int a[5];

    In the example above, variable a was declared as an array of five integer values [specified in square brackets].
    You can initialize the array by specifying the values it holds:

    int b[5] = {11, 45, 62, 70, 88};

    The values are provided in a comma separated list, enclosed in {curly braces}.
    The number of values between braces { } must not exceed the number of the elements declared within the 
    square brackets [ ].
-----------------------------------------------------------------------------------------------------------------------------
    Initializing Arrays

    If you omit the size of the array, an array just big enough to hold the initialization is created.
    For example:
    int b[] = {11, 45, 62, 70, 88};
    CPP
    This creates an identical array to the one created in the previous example.

    Each element, or member, of the array has an index, which pinpoints the element's specific position.
    The array's first member has the index of 0, the second has the index of 1.
    So, for the array b that we declared above:contentImageTo access array elements, index the array name
    by placing the element's index in square brackets following the array name.
    For example:

        int b[] = {11, 45, 62, 70, 88};

        cout << b[0] << endl;
        // Outputs 11
        
        cout<< b[3] << endl;
        // Outputs 70

        return 0;

    Accessing Array Elements

    Index numbers may also be used to assign a new value to an element.
    int b[] = {11, 45, 62, 70, 88};
    b[2] = 42;
    This assigns a value of 42 to the array's third element.
    Always remember that the list of elements always begins with the index of 0.
---------------------------------------------------------------------------------------
    Arrays in Loops

    Let's declare an array, that is going to store 5 integers, and assign a value to each
    element using the for loop:

    int myArr[5];

    for(int x=0; x<5; x++) {
    myArr[x] = 42;
    }

    Each element in the array is assigned the value of 42.
    The x variable in the for loop is used as the index for the array.
    The last index in the array is 4, so the for loop condition is x<5.
    -------------------------------------------------------------------------------------
    Arrays in Calculations

    The following code creates a program that uses a for loop to calculate the sum of all elements of an array.
--------------------------code----------------------------------
    #include <iostream>
    using namespace std;

    int main()
    {
        int arr[] = {11, 35, 62, 555, 989};
        int sum = 0; 

        for (int x = 0; x < 5; x++) {
            sum += arr[x];
        }

        cout << sum << endl;

        return 0;
    }
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    To review, we declared an array and a variable sum that will hold the sum of the elements.
    Next, we utilized a for loop to iterate through each element of the array, and added the corresponding 
    element's value to our sum variable.
    In the array, the first element's index is 0, so the for loop initializes the x variable to 0.

-----------------------------------------------------------------------------------------------------
    Multi-Dimensional Arrays

    A multi-dimensional array holds one or more arrays. Declare a multidimensional array as follows.
    type name[size1][size2]...[sizeN];
    Here, we've created a two-dimensional 3x4 integer array:
    int x[3][4];

    Two-Dimensional Arrays


    Multi-dimensional arrays may be initialized by specifying bracketed values for each row.
    Following is an array with 2 rows and 3 columns:
    int x[2][3] = {
    {2, 3, 4}, // 1st row
    {8, 9, 10} // 2nd row
    };
    CPP
    You can also write the same initialization using just one row.
    int x[2][3] = {{2, 3, 4}, {8, 9, 10}};
    CPP
    The elements are accessed by using the row index and column index of the array.
    For example:
    The first index 0 refers to the first row. The second index 2 refers to the 3rd element of the first row, which is 4.

    Multi-Dimensional Arrays

    Arrays can contain an unlimited number of dimensions.
    string threeD[42][8][3];
    CPP
    The example above declares a three-dimensional array of strings. As we did previously, 
    it's possible to use index numbers to access and modify the elements.
    Arrays more than three dimensions are harder to manage.
-----------------------------------------------------------------------------------------------------------------------------
    Pointers

    Every variable is a memory location, which has its address defined.
    That address can be accessed using the ampersand (&) operator (also called the address-of operator), which denotes an address in memory.
    This outputs the memory address, which stores the variable score.
   
    A pointer is a variable, with the address of another variable as its value.
    In C++, pointers help make certain tasks easier to perform. Other tasks, such as dynamic memory allocation, cannot be performed without using pointers.

    All pointers share the same data type - a long hexadecimal number that represents a memory address.
    
    The only difference between pointers of different data types is the data type of the variable that the pointer points to.
    Pointers


    A pointer is a variable, and like any other variable, it must be declared before you can work with it.
    The asterisk sign is used to declare a pointer (the same asterisk that you use for multiplication), however, 
    in this statement the asterisk is being used to designate a variable as a pointer.
    Following are valid pointer declarations:
    int *ip;  // pointer to an integer
    double *dp;   // pointer to a double
    float *fp;  // pointer to a float
    char *ch;  // pointer to a character
    Just like with variables, we give the pointers a name and define the type, to which the pointer points to.
    The asterisk sign can be placed next to the data type, or the variable name, or in the middle.

    Using Pointers

    Here, we assign the address of a variable to the pointer.
    ---------------code------------------------
    #include <iostream>
    using namespace std;

    int main()
    {
        int score = 5;
        int *scorePtr;
        scorePtr = &score;

        cout << scorePtr << endl;

        return 0;
    }
    -------------------------------------------
    The code above declares a pointer to an integer called scorePtr, and assigns to it the memory
    location of the score variable using the ampersand (address-of) operator.
    Now, scorePtr's value is the memory location of score.
-----------------------------------------------------------------------------------------------------------------------------
    -------------------------------code-----------------------------
    exercise found in facebook
    context:
    it is necessary to enter an array of n values on the screen and display a list of the sum of the first and the last value, 
    so on, if the length of the list is odd, the remaining value is simply omitted.

    int max;
    int valor = 0;
    int contador = 0;
    cout << "ingrese primero el largo de la lista y luego su contenido: ";
    cin >> max;
    cout << "\n";
    int lista[max];
    int listaSum[max];
    while(max != 0 && contador < max){
        cin >> valor;
        lista[contador++] = valor;
        
    }
    cout << "new list \n";
    for (int i =0; i < (max/2); i++){
        
            listaSum[i]=lista[i] + lista[max - (i+1)];
            cout << listaSum[i] <<" ";
    }
   ----------------------------------------------------------------
   -------------------------------------------------------------------------------------------------------------
    Pointer Operations


    There are two operators for pointers:
    Address-of operator (&): returns the memory address of its operand.
    Contents-of (or dereference) operator (*): returns the value of the variable located at the address 
    specified by its operand.

    For example:

    #include <iostream>
    using namespace std;

    int main()
    {
        int var = 50;
        int  *p;
        p = &var;

        cout << var << endl;
        // Outputs 50 (the value of var)

        cout << p << endl;
        // Outputs 0x29fee8 (var's memory location)

        cout << *p << endl;
        Outputs 50 (the value of the variable
        stored in the pointer p) 

        return 0;
    }

    The asterisk (*) is used in declaring a pointer for the simple purpose of indicating that it is 
    a pointer (The asterisk is part of its type compound specifier). Don't confuse this with the 
    dereference operator, which is used to obtain the value located at the specified address. 
    They are simply two different things represented with the same sign.
    Dereferencing


    The dereference operator (*) is basically an alias for the variable the pointer points to.
    For example:
    int x = 5;
    int *p = &x;

    x = x + 4;
    x = *p + 4;
    *p = *p + 4;
    

    All three of the preceding statements are equivalent, and return the same result. 
    We can access the variable by dereferencing the variable's pointer.
    As p is pointing to the variable x, dereferencing the pointer (*p) is representing exactly 
    the same as the variable x.

    */
   
  
    return 0; //this should always be like this
    
} 