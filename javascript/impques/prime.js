
const isPrime = (num) => {
    if (num <= 1) return false; 
    for (let i = 2; i <= Math.sqrt(num); i++) {
        if (num % i === 0) return false; 
    }
    return true; 
};

const generateRange = (start, end) => {
    return Array.from({ length: end - start + 1 }, (_, index) => start + index);
};


const countPrimesInRange = (start, end) => {
    const numbers = generateRange(start, end); 
    const primes = numbers.filter(isPrime); 
    return primes.length; 
};

// Example usage: Count prime numbers between 1000 and 2500
const start = 1000;
const end = 2500;
const primeCount = countPrimesInRange(start, end);

console.log(`The number of prime numbers between ${start} and ${end} is: ${primeCount}`);
