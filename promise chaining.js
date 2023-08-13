const loadscript=(src)=>{
  return new Promise((resolve,reject)=>{
    let script=document.createElement("script")
    script.type="text/javascript"
    script.src=src
    document.body.appendChild(script)
    script.onload=()=>{
      resolve(1)
    }
    script.onload=()=>{reject(0)}
  })
}
let p1= loadscript("http://local3000/index.js")
p1.then((value)=>{
  console.log(value)
}).catch ((error)=>{
  console.log("we are sorry but we are having problem loading this script")
})
