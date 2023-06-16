//chapter 4- Q1
let str="har\""
console.log(str.length)
//chapter 4- Q2
const sentence = 'The quick brown fox jumps over the lazy dog.';
const word = 'fox';
console.log(`The word "${word}" ${sentence.includes(word) ? 'is' : 'is not'} in the sentence`);
//chapter 4- Q3
console.log(word.toLowerCase())
console.log(word.toUpperCase())
//chapter 4- Q4
let str2="please give  Rs 1000"
let amount=Number.parseInt(str2.slice("please give  Rs ".length))
console.log(amount)
console.log(typeof amount)
//chapter 4- Q5
let friend="pappu"
friend[3]="R"
console.log(friend)//friend is not change because strting is immutable
