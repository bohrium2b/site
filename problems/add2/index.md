
# Addition
Addition is hard, right? Nope, but it's even easier for our computers!


## Implementation Details
 * Write a program that adds 2 numbers.
 * You can use `get_int()` to grab an integer.
 * Store those values in variables of type `int`
 * Print the total of those values out.

### Hints
Remember `printf` formatting codes? You can use `%i` to print out the value of a variable of type `int`.

**Example:** `example.c`
```c
int number = 5;
printf("Your magic number is %i\n", number);
```
**Output:**
```console
$ ./example
Your magic number is 5
```

## Testing
Run `check50`: `check50 daltongit/checks/c/add2`
Your program should work as follows:
~~~console
example@example:~$ ./addition
1st number: 2
2nd number: 4
6
~~~

```console
$ ./addition
1st number: 4
2nd number: 6
10
```



## Submit
Ready to submit? Run `submit50 daltongit/checks/c/add2`.
