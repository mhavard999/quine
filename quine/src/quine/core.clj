(ns quine.core)

(defn -main []
  (let [s ["(ns quine.core)\n\n(defn -main []\n  (let [s " "]\n    (println (str (first s) s (second s)))))"]]
    (println (str (first s) s (second s)))))
