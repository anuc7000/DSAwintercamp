An array is a collection of elements of the same type placed in contiguous memory locations.

length=5;
        'a' 'b' 'c' 'd' 'e'
index-> [0] [1] [2] [3] [4]

//Init an Array
int a[100];
int a[100]={0};
int a[100]={1, 2, 3};
int a[]={1, 2, 3};

string fruits[4]={"apple", "mango", "guava"}

Book b[100];


Vector(Dynamic Array)
-> Vectors are sequence containers representing arrays that can change in size.
-> Just like arrays, vectors use contiguous storage locations for their elements, which means that their elements can also be accessed
directly in 0(1) time.
-> But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.


Points to Note :-
-> Vectors can be used to create dynamic 1D & 2D arrays.
-> We will be using vectors throughout this course in place of a regular array.
-> Unlike arrays, vectors are passed by value to a function, you may can still pass them by reference if need arises.


void fn(vector<int> & v) {}
                    & is used => (for when passing by reference)