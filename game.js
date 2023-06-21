let user=prompt("Enter S,G or W")
let cpuI=math.floor(math.random()*3);
let cpu=["S","G","W"][cpuI]
const match=(cpu,user)=>{
  if (cpu===user){
    return "Same"
  }
  else if(cpu==="S"&& user==="W"){
    return "cpu"
  }
  else if(cpu==="G"&& user==="w"){
    return "user"
  }
  else if(cpu==="S"&& user==="G"){
    return "user"
  }
  else if(cpu==="G"&& user==="S"){
    return "cpu"
  }
    
  else if(cpu==="W"&& user==="S"){
    return "user"
  }
    
  else if(cpu==="W"&& user==="G"){
    return "cpu"
  }
let result=match(cpu,user)console.log('cpu:${cpu} <br> user:${user} <br>The winner is: ${result.toUpeerCase()}')

