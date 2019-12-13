; Copyright (C) 2019 Syed Shah
; See the LICENSE file at the root of this project tree.
; (GPL v3)

(defun collatz (n)
  (format t "~D~%" n) 
  (if (= n 1)
    1
    (if (= (mod n 2) 0)
      (collatz (/ n 2))
      (collatz (+ (* 3 n) 1)))))
(compile 'collatz)
