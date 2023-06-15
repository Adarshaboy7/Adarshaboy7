//chapter 2-Q1
let age=prompt("what is your age?")
if(age>10 && age<20){
  console.log("you age lies between 10 and 20")
}
else{
  console.log("youe age doesnt lins between 10 and 20")
}
//chapter 2-Q2
let age=prompt("what is your age?")
switch(age){
  case 12:
    console.log("you age is 12")
  case 13:
    console.log("you age is 13")
  case 14:
    console.log("you age is 14")
  case 15:
    console.log("you age is 15")
  default:
    console.log("your age  is no special")
}
//chapter 2-Q3
let num=prompt("what is your age?")
num=Number.parseInt(num)
if(num%2==0&& num%3==0){
  console.log("your number is divisible by 2 and 3")
}
else{
  console.log("your number is not divisible by 2 and 3")
}
//chapter 2-Q5
let age= 19
let a= age>18?"you can drive":"you cannot drive "
console.log(a)
