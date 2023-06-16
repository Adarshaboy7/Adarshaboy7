//Array methods
let num=[1,2,3,34,4]
let b=num.toString()//b is now  a string
console.log(b,typeof b)
let c=num.join("and")
console.log(c,typeof c)
let d=num.pop()//pop returns the poped element
console.log(num,d)
let e=num.push(56)//push returns the new array length
console.log(num,e)
let f=num.shift()//removes  an element from the start of the array
console.log(num,f)
let g=num.unshift(78)//removes  an element from the start of the array
console.log(num,g)
let num=[1,2,3,4,5,,6,7,8,9]
let num_more=[11,12,13,14,15,16,17,18,19]
let num_even_more=[311,312,313,314,315,316,317,318,319]
delete num[0]
console.log(num)
let newarray=num.concat(num_more,num_even_more)
console.log(newarray)
//sort methode
let compare=(a,b)=>{
  return a-b
}
let num=[551,12,3,48,5,,6,7,58,339]
num.sort(compare)
num.reverse()
console.log(num)
//splice and slice
let num=[551,12,3,48,5,,6,7,58,339]
num.splice(2,3,1008,6537,8362)
let deletedvalues=num.splice(2,3,1008,6537,8362)
console.log(num)
console.log(deletedvalues)
let newnum=num.slice(3)
console.log(newnum)
