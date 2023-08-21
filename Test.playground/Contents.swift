func strassenMultiply(_ A: [[Int]], _ B: [[Int]]) -> [[Int]] {
    let n = A.count
    if n == 1 {
        return [[A[0][0] * B[0][0]]]
    }

    // Divide the matrices into four equal-sized submatrices
    let halfN = n / 2
    var a11 = [[Int]](repeating: [Int](repeating: 0, count: halfN), count: halfN)
    var a12 = a11, a21 = a11, a22 = a11
    var b11 = a11, b12 = a11, b21 = a11, b22 = a11

    for i in 0..<halfN {
        for j in 0..<halfN {
            a11[i][j] = A[i][j]
            a12[i][j] = A[i][j + halfN]
            a21[i][j] = A[i + halfN][j]
            a22[i][j] = A[i + halfN][j + halfN]

            b11[i][j] = B[i][j]
            b12[i][j] = B[i][j + halfN]
            b21[i][j] = B[i + halfN][j]
            b22[i][j] = B[i + halfN][j + halfN]
        }
    }

    // Compute the seven products of submatrices
    let m1 = strassenMultiply(a11, addMatrices(b12, b22, subtract: true))
    let m2 = strassenMultiply(addMatrices(a11, a12), b22)
    let m3 = strassenMultiply(addMatrices(a21, a22), b11)
    let m4 = strassenMultiply(a22, addMatrices(b21, b11, subtract: true))
    let m5 = strassenMultiply(addMatrices(a11, a22), addMatrices(b11, b22))
    let m6 = strassenMultiply(addMatrices(a12, a22, subtract: true), addMatrices(b21, b22))
    let m7 = strassenMultiply(addMatrices(a11, a21, subtract: true), addMatrices(b11, b12))

    // Combine the submatrices to get the final result
    var C = [[Int]](repeating: [Int](repeating: 0, count: n), count: n)
    for i in 0..<halfN {
        for j in 0..<halfN {
            C[i][j] = m5[i][j] + m4[i][j] - m2[i][j] + m6[i][j]
            C[i][j + halfN] = m1[i][j] + m2[i][j]
            C[i + halfN][j] = m3[i][j] + m4[i][j]
            C[i + halfN][j + halfN] = m1[i][j] - m3[i][j] + m5[i][j] - m7[i][j]
        }
    }

    return C
}

func addMatrices(_ A: [[Int]], _ B: [[Int]], subtract: Bool = false) -> [[Int]] {
    var result = A
    for i in 0..<A.count {
        for j in 0..<A[0].count {
            result[i][j] = subtract ? A[i][j] - B[i][j] : A[i][j] + B[i][j]
        }
    }
    return result
}


let A = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12],
    [13, 14, 15, 16]
]

let B = [
    [17, 18, 19, 20],
    [21, 22, 23, 24],
    [25, 26, 27, 28],
    [29, 30, 31, 32]
]

let result = strassenMultiply(A, B)
print(result)

