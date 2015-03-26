# It's a quine in C!

```
$ gcc quine.c
$ ./a.out > quine2.c
$ diff quine.c quine2.c
$ # no output aka no differences - successful quine!
```