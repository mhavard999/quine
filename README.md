# It's a quine in C!

```
$ gcc quine.c
$ ./a.out > quine2.c
$ diff quine.c quine2.c
$ # no output aka no differences - successful quine!
```

# It's a quine in Lisp!

```
$ clisp quine.lisp > quine2.lisp
$ diff quine.lisp quine2.lisp
$ # no output aka no differences - successful quine!
```