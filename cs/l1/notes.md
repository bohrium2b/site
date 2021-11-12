
# Lecture 1
## 1.1 `hello.c`
We shall now write our first program:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, world\n");
}
```

The purpose of the program is simple: it just "prints", or outputs, `Hello, world` to the screen.

This is very similar to the following Scratch program:
<pre class="blocks">
when green flag clicked
say [Hello, world]
</pre>

Let's understand that code we just typed. 
The `#include <stdio.h>` part just means to "import" the functionality of whatever is in `stdio.h` into our program.
We then define a **function** called `main`. 
That is analogous to <code class="b">when green flag clicked</code>.
Inside of that `main()` function, we have a cryptic line that reads 
```c
printf("Hello, world\n");
```
That means to output the words `Hello, world` onto the console.  
When we compile and run `hello`, we get the following:
```shell
$ ./hello
Hello, world
$ 
```
