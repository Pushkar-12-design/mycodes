
const generateFibonacci = (count) => {
    const fibonacci = [0, 1]; 
    for (let i = 2; i < count; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2]; 
    }
    return fibonacci;
};


const sumFibonacciAtOddIndices = (count) => {
    const fibonacciNumbers = generateFibonacci(count);
    return fibonacciNumbers.reduce((sum, num, index) => {
        if (index % 2 !== 0) {

            return sum + num; 
        }
        return sum; 
    }, 0);
};


const count = 10;
const sum = sumFibonacciAtOddIndices(count);
console.log(`The sum of Fibonacci numbers at odd indices (up to ${count}) is: ${sum}`);
