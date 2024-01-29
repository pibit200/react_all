import { useState } from 'react'

function App() {
     
  let [counter,setCounter]=useState(15);

   const addvalue=()=>{
    setCounter(counter+1)
   }

   const removevalue=()=>{
    if(counter==0)
      counter=0
    else
    setCounter(counter-1)
   }

  return (
      <>

      <h1>Counter: {counter}</h1>
       
       <button onClick={addvalue}>Add value {counter}</button>
       <br/>
       <button onClick={removevalue}>Decrease Value</button>
      
      </>
      
  )
}

export default App
