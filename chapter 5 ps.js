//chapter 5 practice set
//pratice problem 1
let arr=[1,2,3,4,5,6,7,83]
let a= prompt("Enter a number")
a=Number.parseInt(a)
arr.push(a)
console.log(arr)
//pratice problem 2
let arr=[1,2,3,4,5,6,7,83]
let a;
do{
  a= prompt("Enter a number")
  a=Number.parseInt(a)
  arr.push(a)
}while(a!=0);
console.log(arr)
//pratice problem 3
let arr=[1,2,3,41,5,6,72,838]
let n=arr.filter((x)=>{
  return x%10==0
})
console.log(n)
//pratice problem 4
let arr=[1,2,3,41,5,6,72,838]
let n=arr.map((x)=>{
  return x*x
})
console.log(n)
//pratice problem 5
let arr=[1,2,3,4,5]
let n=arr.reduce((x1,x2)=>{
  return x1*x2
})
console.log(n)
