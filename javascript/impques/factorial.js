
const generateRange = (n) => {
    return Array.from({ length: n }, (_, index) => index + 1);
};


const factorial = (n) => {
    if (n < 0) {
        throw new Error("Factorial is not defined for negative numbers.");
    }
    if (n === 0 || n === 1) {
        return 1; 
    }
    const numbers = generateRange(n);
    return numbers.reduce((accumulator, current) => accumulator * current, 1); 
};

// Example usage
const number = 5;
const result = factorial(number);
console.log(`The factorial of ${number} is: ${result}`);
