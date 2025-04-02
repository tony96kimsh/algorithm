const readline = require('readline');
const rl = readline.createInterface({
    input:process.stdin,
    output:process.stdout,    
})

let cycle;
let arr = [0, 1];
let sum;


rl.question('파보나치 연산 수 입력: ', e => {
    cycle = Number(e);

    for(let i = 0; i < cycle - 1; i++) {
        arr.push(arr[i] + arr[i + 1]);
    }
    console.log(arr);

    rl.close();
})