# Advanced C

## Pointers

`Pointers` are one of the core components of the C programming language. A pointer can be used to store the memory address of other variables, functions, or even other pointers. The use of pointers allows low-level memory access, dynamic memory allocation, and many other functionality in C.

### Definition

A `pointer` is defined as a derived data type that can store the address of other C variables or a memory location. We can access and manipulate the data stored in that memory location using pointers.

As the pointers in C store the memory addresses, their size is independent of the type of data they are pointing to. This size of pointers in C only depends on the system architecture.

### Syntax of C Pointers

The syntax of pointers is similar to the variable declaration in C, but we use the ( * ) dereferencing operator in the pointer declaration.

```c
datatype *ptr;
```

- ptr is the name of the pointer.
- datatype is the type of data it is pointing to.
- `*`: Asterisk is the de-reference Operator (Indirect Operator) used to get value.
- `&`: Address of Operator, returns the address of a variable.

### How to Use Pointers?

The use of pointers in C can be divided into three steps:

- Pointer Declaration
-  Pointer Initialization
- Pointer Dereferencing

1. Pointer Declaration

In pointer declaration, we only declare the pointer but do not initialize it. To declare a pointer, we use the ( * ) dereference operator before its name.

**Example**:
```c
int *ptr;
```

The pointer declared here will point to some random memory address as it is not initialized. Such pointers are called wild pointers.

2. Pointer Initialization

Pointer initialization is the process where we assign some initial value to the pointer variable. We generally use the  `&` addressof operator to get the memory address of a variable and then store it in the pointer variable.

**Example**:
```c
int var = 10;
int * ptr;
ptr = &var;
```

We can also declare and initialize the pointer in a single step. This method is called pointer definition as the pointer is declared and initialized at the same time.

**Example**:
```
int *ptr = &var;
```

>> **Note**: It is recommended that the pointers should always be initialized to some value before starting using it. Otherwise, it may lead to number of errors.

3. Pointer Dereferencing

Dereferencing a pointer is the process of accessing the value stored in the memory address specified in the pointer. We use the same ` *` dereferencing operator that we used in the pointer declaration.
dereferencing a pointer in c.

### NULL Pointer

The Null Pointers are those pointers that do not point to any memory location. They can be created by assigning a NULL value to the pointer. A pointer of any type can be assigned the NULL value.

**Syntax**:
```c
data_type *pointer_name = NULL;
// OR
pointer_name = NULL
```

It is said to be good practice to assign NULL to the pointers currently not in use.

### Void Pointer

The Void pointers in C are the pointers of type void. It means that they do not have any associated data type. They are also called generic pointers as they can point to any type and can be typecasted to any type.

**Syntax**:
```c
void * pointer_name;
```

One of the main properties of void pointers is that they cannot be dereferenced
