
const isPalindrome = (num) => {
    const strNum = num.toString(); 
    const reversedStrNum = strNum.split('').reverse().join(''); 
    return strNum === reversedStrNum; 
};


const number = 12321;
if (isPalindrome(number)) {
    console.log(`${number} is a palindrome.`);
} else {
    console.log(`${number} is not a palindrome.`);
}

// Testing with another example
const anotherNumber = 12345;
if (isPalindrome(anotherNumber)) {
    console.log(`${anotherNumber} is a palindrome.`);
} else {
    console.log(`${anotherNumber} is not a palindrome.`);
}
