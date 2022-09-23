#!/usr/bin/swift

/* MARK: - SOLUTION ✨ */

class Problem<T> {

    typealias Pair = ( ((T, T) -> T) -> T)  

    func cons(_ a: T, _ b: T) -> Pair {

        func pair(cb: (T, T) -> T) -> T {
            return cb(a, b)
        }
 
        return pair
    }

    /*func car(pair: Pair, firstElementHandler: @escaping (T) -> Void) { // retorna primeiro valor do par
        pair({ a, _ in
            firstElementHandler(a)
        })
    }*/

    func cdr(pair: Pair) -> T { // retorna ultimo valor do par
        return pair({ _, b in
            return b
        })
    }

}

let problem = Problem<Int>()
let pair = problem.cons(1,2)

/*
problem.car(pair: pair, firstElementHandler: {
    print($0)
})
*/

print(problem.cdr(pair: pair))