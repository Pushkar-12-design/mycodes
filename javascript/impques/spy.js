
const isSpyNumber = function(num) {
    
    const digits = num.toString().split('').map(Number); 

    
    const sum = digits.reduce((accumulator, current) => accumulator + current, 0);
    const product = digits.reduce((accumulator, current) => accumulator * current, 1);

   
    return sum === product;
};

const number1 = 123;
const number2 = 22;
const number3 = 135;

console.log(`${number1} is ${isSpyNumber(number1) ? 'a spy number.' : 'not a spy number.'}`);
console.log(`${number2} is ${isSpyNumber(number2) ? 'a spy number.' : 'not a spy number.'}`);
console.log(`${number3} is ${isSpyNumber(number3) ? 'a spy number.' : 'not a spy number.'}`);
