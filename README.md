# It's a quine in C!

```sh
$ gcc quine.c
$ ./a.out > quine2.c
$ diff quine.c quine2.c
$ # no output aka no differences - successful quine!
```

# It's a quine in Lisp!

```sh
$ clisp quine.lisp > quine2.lisp
$ diff quine.lisp quine2.lisp
$ # no output aka no differences - successful quine!
```

# It's a quine in Python!
```sh
$ python quine.py > quine2.py
$ diff quine.py quine2.py
$ # no output aka no differences - successful quine!
```

# It's a quine in JavaScript!
```sh
$ node quine.js > quine2.js
$ diff quine.js quine2.js
$ # no output aka no differences - successful quine!
```

# It's a quine in Java!
```sh
$ javac Quine.java
$ mkdir quine2
# Putting it in a separate dir so it can be compiled without changing file/class names
$ java Quine > quine2/Quine.java
$ diff Quine.java quine2/Quine.java
$ # no output aka no differences - successful quine!
```

# It's a quine in Clojure!
```sh
$ cd quine # The whole lein project structure blah blah yadda yadda
$ lein run > quine2.clj
$ diff quine2.clj src/quine/core.clj
$ # no output aka no differences - successful quine!
```








