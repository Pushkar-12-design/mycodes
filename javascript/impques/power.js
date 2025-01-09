
const power = (base, exponent) => {

    if (exponent === 0) {
        return 1;
    }
    
    if (exponent < 0) {
        return 1 / power(base, -exponent); 
    }
  
    return base * power(base, exponent - 1);
};

const base = 2;
const exponent = 3;
const result = power(base, exponent);

console.log(`${base} raised to the power of ${exponent} is: ${result}`); 


const negativeExponent = -2;
const negativeResult = power(base, negativeExponent);
console.log(`${base} raised to the power of ${negativeExponent} is: ${negativeResult}`); 
