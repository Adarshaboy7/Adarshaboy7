//for loop
for(let i=0;i<5;i++){
  console.log(i)
}
//program to add first n natural number
let sum=0
let n=prompt("enter the value of n")
n=Number.pareInt(n)
for(let j=0;j<n;j++){
  sum +=(j+1)
  console.log((j+1),"+")
}
console.log("sum of first"+n+"natural number is"+sum)
//for in loop  
let obj={
  harry:56,
  shubh:76,
  rittika:54,
  shiv:67
}
for (let a in obj){
  console.log("marks of"+a+"are"+obj[a])
}
//for of loop
for (let b of "ADARSHA"){
  console.log(b)
}
//while loop
let n=prompt("enter the value of n")
n=Number.parseInt(n)
let i= 0
while(i<n){
  console.log(i)
  i++;
}
// not while loop
let n=prompt("enter the value of n")
n=Number.parseInt(n)
let i=0
do{
  console.log(i)
  i++;
}while(i<n)
