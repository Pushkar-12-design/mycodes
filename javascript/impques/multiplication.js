
const generateMultiplicationTable = (number, limit) => {
    const table = [];
    for (let i = 1; i <= limit; i++) {
        table.push(`${number} x ${i} = ${number * i}`);
    }
    return table;
};
const printMultiplicationTable = (number, limit) => {
    const table = generateMultiplicationTable(number, limit);
    console.log(`Multiplication Table for ${number} up to ${limit}:`);
    console.log(table.join('\n'));
};

// Example usage: Generate and print the multiplication table for 5 up to 10
const number = 5;
const limit = 10;
printMultiplicationTable(number, limit);
