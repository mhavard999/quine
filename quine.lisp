
(defun reps (s)
  (concatenate 'string "\""
               (reduce (lambda (acc c)
                         (concatenate 'string acc
                                      (case c
                                        (#\\ "\\\\")
                                        (#\" "\\\"")
                                        (otherwise (format nil "~C" c)))))
                       s
                       :initial-value "")
               "\""))

(defun replist (lst)
  (concatenate 'string "'("
         (reduce (lambda (acc s)
                   (concatenate 'string acc (if (< 2 (length acc)) " " "") (reps s)))
                 lst
                 :initial-value "")
         ")"))

(princ (let ((s '("
(defun reps (s)
  (concatenate 'string \"\\\"\"
               (reduce (lambda (acc c)
                         (concatenate 'string acc
                                      (case c
                                        (#\\\\ \"\\\\\\\\\")
                                        (#\\\" \"\\\\\\\"\")
                                        (otherwise (format nil \"~C\" c)))))
                       s
                       :initial-value \"\")
               \"\\\"\"))

(defun replist (lst)
  (concatenate 'string \"'(\"
         (reduce (lambda (acc s)
                   (concatenate 'string acc (if (< 2 (length acc)) \" \" \"\") (reps s)))
                 lst
                 :initial-value \"\")
         \")\"))

(princ (let ((s " "))
  (concatenate 'string (first s) (replist s) (second s))))")))
   (concatenate 'string (first s) (replist s) (second s))))
