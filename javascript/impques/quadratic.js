// Function expression to find roots of a quadratic equation
const findQuadraticRoots = function(a, b, c) {
    if (a === 0) {
        throw new Error('Coefficient "a" cannot be zero for a quadratic equation.');
    }

    const discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        
        const root1 = (-b + Math.sqrt(discriminant)) / (2 * a);
        const root2 = (-b - Math.sqrt(discriminant)) / (2 * a);
        return { root1, root2 };
    } else if (discriminant === 0) {
        
        const root = -b / (2 * a);
        return { root };
    } else {
        const realPart = (-b / (2 * a)).toFixed(2);
        const imaginaryPart = (Math.sqrt(-discriminant) / (2 * a)).toFixed(2);
        return { realPart, imaginaryPart };
    }
};


const coefficients = [
    { a: 1, b: -3, c: 2 },  
    { a: 1, b: -4, c: 4 },   
    { a: 1, b: 2, c: 5 }      
];

coefficients.forEach(({ a, b, c }) => {
    try {
        const roots = findQuadraticRoots(a, b, c);
        console.log(`For the equation ${a}x² + ${b}x + ${c} = 0:`, roots);
    } catch (error) {
        console.error(error.message);
    }
});
