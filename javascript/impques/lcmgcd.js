
const reverseFiveDigitNumber = (num) => {
    
    if (num < 10000 || num > 99999) {
        return 'Please enter a valid 5-digit number.';
    }
    

    const reversedStr = num.toString().split('').reverse().join('');
    
    
    return parseInt(reversedStr, 10);
};

// Example usage
const number = 12345;
const reversedNumber = reverseFiveDigitNumber(number);
console.log(`The reverse of ${number} is: ${reversedNumber}`); 
const invalidNumber = 1234;
console.log(reverseFiveDigitNumber(invalidNumber)); 

