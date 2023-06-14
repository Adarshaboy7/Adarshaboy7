let a= prompt("hey What you age?")
a=Number.parseInt(a);//converting the string to a number
if (a<0){
  alert("This is a invaild age");
}
else if(a<5){
    alert("you are a kid and you cannot ever think of driving");
}
else if(a<18 && a>=9){
    alert("you are a kid and you can  think of driving after 18");
  }
else {
  alert("you can now drive as you are above 18");
}
console.log("you can",(a<18?"not drive":"drive"))
