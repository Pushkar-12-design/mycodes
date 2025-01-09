
const gcd = (a, b) => {
    return b === 0 ? a : gcd(b, a % b);
};


const lcm = (a, b) => {
    return (a * b) / gcd(a, b);
};


const gcdOfThree = (a, b, c) => {
    return gcd(gcd(a, b), c);
};


const lcmOfThree = (a, b, c) => {
    return lcm(lcm(a, b), c);
};

// Example usage
const numbers = [12, 15, 21];
const [num1, num2, num3] = numbers;

const gcdResult = gcdOfThree(num1, num2, num3);
const lcmResult = lcmOfThree(num1, num2, num3);

console.log(`The GCD of ${num1}, ${num2}, and ${num3} is: ${gcdResult}`);
console.log(`The LCM of ${num1}, ${num2}, and ${num3} is: ${lcmResult}`);
