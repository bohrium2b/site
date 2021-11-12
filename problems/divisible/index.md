## Divisible
In divisible, your task is to print out every number between `1` and `100` that is divisible
by 6. The first numbers in the sequence should be `6`, `12`, `18` ...  
You **don't** need `<cs50.h>`!

## How to get started
1. Create a new directory (`mkdir divisible`) and `cd` into it (`cd divisible`).
2. Execute **`wget https://daltongit.github.io/problems/divisible/divisible.c`** to download the distribution code.  
Want to download the distribution code from your browser? You can get it **[here](divisible.c)**

## Implementation Details
How should you check if a number is divisible by six? Well, you can repeat through every number
and check, **does dividing it by six output a whole number**?
If so, then that number is divisible by 6, and you should `print` it out.  
In general, you should fill in the sections marked with a `TODO` and the bits that have a line (`___`)

{% spoiler "Hint" %}
You can use the `modulus` (`%`) operator to get the remainder of 2 numbers.
{% endspoiler %}

## Walkthrough

<video
    id="walkthrough"
    controls
    id="player"
    preload="auto"
    width="720"
    height="480"
    poster="divisible-cover.jpg"
    playsinline
    class="video-js"
    id="walkthrough"
    title="Divisible Walkthrough"
    data-setup="{}"
  >
    <source src="walkthrough.mp4" type="video/mp4" />
  </video>


## Testing
Run
`check50 daltongit/checks/c/divisible`.

Run `style50`

## How to submit
Ready to submit? Once you are ready, run
`submit50 daltongit/checks/c/divisible`.
