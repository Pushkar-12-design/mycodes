
const sumOfDivisors = (num) => {
    let sum = 0;
    for (let i = 1; i <= num / 2; i++) {
        if (num % i === 0) {
            sum += i; 
        }
    }
    return sum;
};


const isPerfectNumber = (num) => {
    if (num <= 0) {
        return false; 
    }
    return sumOfDivisors(num) === num; 
};

// Example usage
const number1 = 6;
const number2 = 28;
const number3 = 12;

console.log(`${number1} is ${isPerfectNumber(number1) ? 'a perfect number.' : 'not a perfect number.'}`);
console.log(`${number2} is ${isPerfectNumber(number2) ? 'a perfect number.' : 'not a perfect number.'}`);
console.log(`${number3} is ${isPerfectNumber(number3) ? 'a perfect number.' : 'not a perfect number.'}`);
