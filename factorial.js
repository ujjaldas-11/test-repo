const factorial = (n) => {
    const bigN = BigInt(n); 
    
    if (bigN === 0n || bigN === 1n) {
        return 1n;
    } else {
        return bigN * factorial(bigN - 1n);
    }
};

let num = 25; 
let exactResult = factorial(num);

// Use .toString() to display all digits exactly as a standard string
let normalNumber = exactResult.toString();

console.log(`Factorial of ${num} is: ${normalNumber}`);