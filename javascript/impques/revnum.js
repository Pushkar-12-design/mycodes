// Arrow function to reverse a 5-digit number
const reverseFiveDigitNumber = (num) => {
    // Check if the number is a 5-digit number
    if (num < 10000 || num > 99999) {
        return 'Please enter a valid 5-digit number.';
    }
    
    // Convert the number to a string, split it into an array of characters, reverse it, and join back to a string
    const reversedStr = num.toString().split('').reverse().join('');
    
    
    return parseInt(reversedStr, 10);
};


const number = 12345;
const reversedNumber = reverseFiveDigitNumber(number);
console.log(`The reverse of ${number} is: ${reversedNumber}`); 

// Testing with an invalid input
const invalidNumber = 1234;
console.log(reverseFiveDigitNumber(invalidNumber)); 
