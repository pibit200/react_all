import { useState,useCallback, useEffect, useRef } from 'react'

function App() {
  const [length,setLength]=useState(8);
  const [numall,setnumall]=useState(false)
  const [charall,setcharall]=useState(false)

  const [password,setpassword]=useState("");

  const passref=useRef(null)

   const passgenerator = useCallback(()=>{
    let str="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqr";
    if(numall)
    {
      str+="01234567890";
    }
    if(charall)
    {
      str+="!@#$%^&*()";
    }

    let pass=""
    let siz=str.length;
    for(let i=0;i<length;i++)
    {
       let rand=Math.floor(Math.random()*siz);
       pass+=str.charAt(rand);


    }
    
    setpassword(pass)

    

   },[length,numall,charall,setpassword])

    const copypass = useCallback(()=>{
      passref.current?.select();
      window.navigator.clipboard.writeText(password);
    },[password]);

   useEffect(()=>{
     passgenerator()
   },[length,numall,charall,passgenerator])


  return (

    <div className="w-full max-w-md mx-auto shadow-md rounded-lg px-4 py-3 my-8 bg-gray-800 text-orange-500">
    <h1 className='text-white text-center my-3'>Password generator</h1>
     
     <div className=''>
      
      <input 
       type="text"
       value={password}
        
      className=''
      placeholder='password'
      readOnly

      ref={passref}
       >



      </input>
       
       <button onClick={copypass}>Copy</button>

     </div>

     <div className='flex text-sm gap-x-2'>
      <div className='flex items-center gap-x-1'>
        <input 
        type="range"
        min={8}
        max={100}
        value={length}
         className='cursor-pointer'
         onChange={(e) => {setLength(e.target.value)}}
          />
          <label>Length: {length}</label>
      </div>
      <div className="flex items-center gap-x-1">
      <input
          type="checkbox"
          defaultChecked={numall}
          id="numberInput"
          onChange={() => {
              setnumall((prev) => !prev);
          }}
      />
      <label htmlFor="numberInput">Numbers</label>
      </div>
      <div className="flex items-center gap-x-1">
          <input
              type="checkbox"
              defaultChecked={charall}
              id="characterInput"
              onChange={() => {
                  setcharall((prev) => !prev )
              }}
          />
          <label htmlFor="characterInput">Characters</label>
      </div>
    </div>

    </div>

  )
}

export default App
