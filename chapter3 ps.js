let marks={
  adarsha:86,
  avi:75,
  golu:62,
  disha:97
}
//problem no 1
for (let i=0;i<object.keys(marks).length;i++){
  console.log("The marks of"+object.keys(marks)[i]+"are"+marks[object.keys(marks)[i]])
}
//problem no 2
for (let i in marks){
  console.log("The marks of"+object.keys(marks)[i]+"are"+marks[object.keys(marks)[i]])
}
//problem no 3
let cn=4
let i
while(i!=cn){
  i=prompt("enter a number")
  console.log("try again")
}
console.log("you have entered a correct number")
//problem no 4
const mean=(a,b,c,d)=>{
  return(a+b+c+d)/4
}
console.log(mean(4,5,6,7))
