//using Loops with Arrays
let num=[3,5,1,2,4]
for (let i=0;i<num.length;i++){
  console.log(num[i])
}
//forEach loop
num.forEach((element)=>{
  console.log(element*element)
})
//Array.from
let name="Adarsha"
let arr=Array.from(name)
console.log(arr)
//for..of
for(let i of num){
  console.log(i)
}
//for..in
for(let i in num){
  console.log(i)
}
//Array map method
let arr=[65,86,23]
let a=arr.map((value,index,array)=>{
  console.log(value,index,array)
  return value+index
})
console.log(a)
//Array filter method
let arr2=[53,76,08,72,9,1]
let a2=arr2.filter((a)=>{
  return a<10
})
console.log(a2)
//Array reduce method
let arr3=[1,4,8,3,6,2]
let newarr3=arr3.reduce((h1,h2)=>{
  return h1+h2
})
console.log(newarr3)
