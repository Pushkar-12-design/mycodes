
const isArmstrong = function(num) {
    const strNum = num.toString();
    const numDigits = strNum.length;
    let sum = 0;

   
    for (let digit of strNum) {
        sum += Math.pow(Number(digit), numDigits);
    }

    return sum === num;
};


const displayArmstrongNumbers = function(start, end) {
    console.log(`Armstrong numbers between ${start} and ${end}:`);
    for (let i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            console.log(i);
        }
    }
};

displayArmstrongNumbers(2000, 3000);
