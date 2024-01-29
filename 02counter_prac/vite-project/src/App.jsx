import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
    
  let [counter,setcounter]=useState(5);
   function addvalue()
   {
    
    setcounter((prevcount)=>prevcount+1);
    setcounter((prevcount)=>prevcount+1);
    setcounter((prevcount)=>prevcount+1);
    setcounter((prevcount)=>prevcount+1);
    
    console.log(counter);
   }

   


   return (
    <>
     <h1>HELLO{counter}</h1>
     <h2>counter value : {counter}</h2>
      
      <button onClick={addvalue}>Add value{counter}</button>

     </>
   )
}

export default App
