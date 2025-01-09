
const reverseArray = (arr) => {
   
    if (arr.length <= 1) {
        return arr;
    }
    
    return [arr[arr.length - 1], ...reverseArray(arr.slice(0, arr.length - 1))];
};

const printCubesOfReversedArray = (arr) => {
    const reversedArray = reverseArray(arr); 
    const cubes = reversedArray.map(num => num ** 3); 

   
    cubes.forEach((cube, index) => {
        console.log(`The cube of ${reversedArray[index]} is: ${cube}`);
    });
};

// Example usage
const originalArray = [1, 2, 3, 4, 5];
printCubesOfReversedArray(originalArray);
