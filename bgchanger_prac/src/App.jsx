import { useState } from 'react'
import './App.css'

function App() {
   
  const [color,setColor]=useState("olive");
  function colorchange()
  {
    
  }

  
  return (
    <div style={{backgroundColor:color}}>

    <h1>Hello world!</h1>
     <button style={{backgroundColor:"red"}} onClick={()=>setColor("red")}>RED</button>
     <button>GREEN</button>
     <button>BLUE</button>
    </div>
  )

}

export default App
