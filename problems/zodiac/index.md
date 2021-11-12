# Zodiac
In Zodiac, your task is to write a program that determines a person's Chinese zodiac sign given their date of birth.
For example, if a person was born in 2008, his zodiac sign would be the **rat**.
A table of zodiac signs is below:



Zodiac | Number
| :-------:|:-----: |
Rat (鼠) | 1
Ox (牛) | 2
Tiger (虎) | 3
Rabbit (兔) | 4
Dragon (龙) | 5
Snake (蛇) | 6
Horse (马) | 7
Goat (羊) | 8
Monkey (猴) | 9
Rooster (鸡) | 10
Dog (狗) | 11
Pig (猪) | 12

![Zodiac image](zodiac.jpg)
 > Image: freepix  
 > Chinese zodiac animals red set of rabbit dog monkey pig tiger horse dragon goat snake rooster ox rat isolated cartoon by Macrovector




How should you figure out what zodiac sign a person is? Well, if a person is born in 1924, then their sign is Rat. After that, you can use years after 1924 to determine their zodiac sign. 
So, if a person was born 5 years after 1924 (Year of the Rat), then their zodiac sign's number (in the table above) would be **5 + 1** or **6**. That person's zodiac sign would be the Snake.   
What if a person was born 13 years after 1924? You could use this process:
1. Find the amount of years after 1924.
2. Find the remainder when divided by 12.
3. That number is the person's zodiac sign.
4. Print out the corresponding zodiac.

## Getting Started
1. Create a directory called `zodiac` using `mkdir zodiac`
2. Move into that directory by using `cd zodiac`.
3. Execute `wget https://daltongit.github.io/problems/zodiac/zodiac.c` to download the source code

## Implementation Details
 * Your program should reprompt for the user's birth year if the year is before 1924
 * We define a variable, `zodiac_num`, that should be used to store that person's zodiac number.
 * Your program should return Rat for 1924
 * **Assume a Gregorian Calendar**

## Example
```console
example@example:~$ ./zodiac
What is your birth year? 2008
Your zodiac sign is the Rat
```

## Walkthrough
<video
    id="walkthrough"
    controls
    preload="auto"
    width="720"
    height="480"
    playsinline
    class="video-js"
    title="Zodiac Walkthrough"
    data-setup="{}"
  >
    <source src="https://roundrockisdorg-my.sharepoint.com/personal/s119263_student_roundrockisd_org/_layouts/15/download.aspx?SourceUrl=%2Fpersonal%2Fs119263_student_roundrockisd_org%2FDocuments%2Fcs%2Fzodiac-walkthrough.mp4&correlationId=2af11c09-3ba8-4551-90a0-c5815d603b37&psi=0aee37d2-470e-4476-8d10-7200dca86ceb&ccat=2&cs=fHxPbmVVcFdlYlBsYXllcg%3D%3D&App=OneDriveWebVideo" type="video/mp4" />
  </video>

## Testing
Make sure your program returns Tiger when given 1998.
Also check with `check50`:  
`check50 daltongit/checks/c/zodiac`

## Submit
Ready to submit? Submit using `submit50 daltongit/checks/c/zodiac`.



