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

# It's a quine in Python!
```
$ python quine.py > quine2.py
$ diff quine.py quine2.py
$ # no output aka no differences - successful quine!
```

# It's a quine in JavaScript!
```
$ node quine.js > quine2.js
$ diff quine.js quine2.js
$ # no output aka no differences - successful quine!
```

# It's a quine in Java!
```
$ javac Quine.java
$ mkdir quine2
# Putting it in a separate dir so it can be compiled without changing file/class names
$ java Quine.java > quine2/Quine.java
$ diff Quine.java quine2/Quine.java
$ # no output aka no differences - successful quine!
```

