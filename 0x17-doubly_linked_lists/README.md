# Doubly linked lists

## Learning Objectives

* What is a doubly linked list
* How to use doubly linked lists
* Start to look for the right source of information without too much help

## Tasks

### **Print list**

Write a function that prints all the elements of a `dlistint_t` list.

* Prototype: `size_t print_dlistint(const dlistint_t *h);`
* Return: the number of nodes
* Format: see example

**Solution:** [0-print_dlistint.c](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/0-print_dlistint.c)

```sh
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ cat 0-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_dlistint.c -o a
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ ./a 
9
8
-> 2 elements
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$
```

### **List length**

Write a function that returns the number of elements in a linked `dlistint_t` list.

* Prototype: `size_t dlistint_len(const dlistint_t *h);`

**Solution:** [1-dlistint_len.c](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/1-dlistint_len.c)

```sh
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ cat 1-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-dlistint_len.c -o b
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ ./b 
-> 2 elements
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$
```

### **Add node**

Write a function that adds a new node at the beginning of a `dlistint_t` list.

* Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

**Solution:** [2-add_dnodeint.c](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/2-add_dnodeint.c)

```sh
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ cat 2-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ ./c 
1024
402
98
4
3
2
1
0
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$
```

### **Add node at the end**

Write a function that adds a new node at the end of a dlistint_t list.

* Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

**Solution:** [3-add_dnodeint_end.c](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/3-add_dnodeint_end.c)

```sh
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ cat 3-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ ./d 
0
1
2
3
4
98
402
1024
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$
```

### **Free list**

Write a function that free a dlistint_t list.

* Prototype: `void free_dlistint(dlistint_t *head);`

**Solution:** [4-free_dlistint.c](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/4-free_dlistint.c)

```sh
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ cat 4-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$
```

### **Get node at index**

Write a function that returns the nth node of a `dlistint_t` linked list.

* Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
* where `index` is the index of the node, starting from `0`
* if the node does not exist, return `NULL`

**Solution:** [5-get_dnodeint.c](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/5-get_dnodeint.c)

```sh
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ cat 5-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 5);
    printf("%d\n", node->n);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$
```

### **Sum list**

Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

* Prototype: `int sum_dlistint(dlistint_t *head);`
* if the list is empty, return `0`

**Solution:** [6-sum_dlistint.c](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/6-sum_dlistint.c)

```sh
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ cat 6-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int sum;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    sum = sum_dlistint(head);
    printf("sum = %d\n", sum);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ ./i 
sum = 1534
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$
```

### **Insert at index**

Write a function that inserts a new node at a given position.

* Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
* where idx is the index of the list where the new node should be added. Index starts at `0`
* Returns: the address of the new node, or `NULL` if it failed
* if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

**Solution:** [7-insert_dnodeint.c](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/7-insert_dnodeint.c), [2-add_dnodeint.c](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/2-add_dnodeint.c), [3-add_dnodeint_end.c](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/3-add_dnodeint_end.c)

```sh
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ cat 7-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ ./j 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$
```

### **Delete at index**

Write a function that deletes the node at index index of a `dlistint_t` linked list.

* Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
* where `index` is the index of the node that should be deleted. Index starts at `0`
* Returns: `1` if it succeeded, `-1` if it failed

**Solution:** [8-delete_dnodeint.c](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/8-delete_dnodeint.c)

```sh
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ cat 8-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
$ amonkeyprogrammer@ubuntu:~/0x17. Doubly linked lists$
```

### **Crackme4**

Find the password for [crackme4](https://github.com/holbertonschool/0x17.c).

* Save the password in the file `100-password`
* Your file should contain the exact password, no new line, no extra space
* Hint: The program prints “OK” when the password is correct

**Solution:** [100-password](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/100-password)

### Process for crackme4

The steps I took to solve this problem are:

* Run this command `file crackme4` on the terminal to see what type of file it is. It appears to be a Python bytecode file.
* Install a Python package called `uncompyle6` which converts bytecode to the original Python code. The command is `pip3 install uncompyle6`.
* Rename the `crackme4` file to `crackme4.pyc` because thats the format that the package can read.
* Run the command `uncompyle6 crackme4.pyc` on the terminal and it will print some metadata along with the Python code that handles the password.
* Copy the Python code and run it separately to get the password and store it in a file.

### **Palindromes**

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is `9009` = `91` × `99`.

Find the largest palindrome made from the product of two 3-digit numbers.

* Save the result in the file `102-result`
* Your file should contain the exact result, no new line, no extra space

**Solution:** [102-result](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/102-result)

### Process for palindrome

I wrote the [code](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/102-largest_pallindrome.c) in C which basically runs through all 3-digit numbers and gets the largest one thats a palindrome. It writes the number to a file.

### **Crackme5**

Write a keygen for crackme5.

* Usage of the crackme: ./crackme5 username key
* The crackme will segfault if you do not enter the correct key for the user
* Usage for your keygen: ./keygen5 username
* Your keygen should print a valid key for the username

```sh
julien@ubuntu:~/0x17$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-keygen.c -o keygen5
julien@ubuntu:~/0x17$ ./crackme5 julien javascript
Segmentation fault (core dumped)
julien@ubuntu:~/0x17$ ./crackme5 julien `./keygen5 julien`
Congrats!
julien@ubuntu:~/0x17$
```

**Solution:** [103-keygen.c](https://github.com/Cofucan/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/103-keygen.c)

### Process for crackme5

* The main function:

  * The main function serves as the entry point of the program.
  * It initializes an array keygen of size 7 to store the generated key.
  * The length variable represents the length of the username.
  * The alph array contains some hexadecimal values used for key generation.
  * The length of the username is calculated by iterating over the characters until a null character is encountered.
  * The key generation process consists of calling different functions and storing the results in keygen.
  * Finally, the generated key is printed to the console using printf.

* The findLargestNumber function:

  * This function takes the username and its length as input.
  * It finds the largest number among the characters in the username.
  * The largest character is used as a seed for the random number generation.
  * The function uses the srand function to seed the random number generator with largest ^ 14.
  * It then generates a random number using rand() and returns the result bitwise ANDed with 63 (rand() & 63).

* The multiplyChars function:

  * This function takes the username and its length as input.
  * It multiplies each character of the username with itself and accumulates the results.
  * The accumulated result is XORed with 239 (result ^ 239), and the bitwise AND operation with 63 is applied to limit the value within the range of 0 to 63.

* The generateRandomChar function:

  * This function takes the username as input.
  * It generates a random character based on the length of the username.
  * The function uses a loop to call rand() repeatedly, discarding the generated values until it reaches the number of iterations specified by the length of the username.
  * The generated random number is XORed with 229 (ch ^ 229), and the bitwise AND operation with 63 is applied to limit the value within the range of 0 to 63.
