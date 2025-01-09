
const generateDiamondLine = (totalLines, currentLine) => {
    const spaces = ' '.repeat(totalLines - currentLine - 1);
    const stars = '*'.repeat(2 * currentLine + 1); 
    return spaces + stars; 
};

const generateDiamond = (lines) => {
    const diamondLines = [];


    for (let i = 0; i < lines; i++) {
        diamondLines.push(generateDiamondLine(lines, i));
    }

    for (let i = lines - 2; i >= 0; i--) {
        diamondLines.push(generateDiamondLine(lines, i));
    }

    return diamondLines;
};


const printDiamond = (lines) => {
    const diamond = generateDiamond(lines);
    return diamond.join('\n'); 
};


const numberOfLines = 5;
console.log(printDiamond(numberOfLines));
