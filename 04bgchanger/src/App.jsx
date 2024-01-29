import { useState } from 'react'


function App() {
  const [color, setColor] = useState("olive")

  return (
    
    <div className='w-full h-screen duration-200' style={{backgroundColor:color}}> 
        
       <h1>Hii</h1>
       <div className='fixed flex flex-wrap justify-center bottom-12 inset-x-0 px-2'>


       <div className='flex flex-wrap justify-center gap-3 bg-white px-3 py-2 rounded-xl'>
          <button onClick={()=>setColor("red")} className='text-white outline-none px-3 py-2' style={{backgroundColor:'red'}}>Red</button>
          <button onClick={()=>setColor("green")} className='text-white outline-none px-3 py-2' style={{backgroundColor:'green'}}>Green</button>
          <button onClick={()=>setColor("blue")} className='text-white outline-none px-3 py-2' style={{backgroundColor:'blue'}}>Blue</button>


       </div>



       </div>
  

         </div>
        

  )
}

export default App
