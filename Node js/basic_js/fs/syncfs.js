const  fs = require('fs')


const fileName = "test.txt";
const filePath = path.join(__dirname, fileName);
console.log (__dirname);

const writeFile = fs.writeFileSync(fileName, "Hello, World!");
fs.readFile(filePath, (err,data)=>{
    if(err) console.error(err);
    else console.log(data.toString());
});

console.log (writeFile);