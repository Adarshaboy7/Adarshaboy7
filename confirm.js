alert("enter the value os a!")
let a=prompt("Enter a here","568")
a=number.parseInt(a)
alert("you entered a of type"+(typeof a))
let write=confirm("do you want to write it to the page")
if(write){
  document.write(a)
}
else{
  document.write("please allow me to write")
}
