import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Card from './components/Card'


function App() {
  const [count, setCount] = useState(0)

  return (
    <>
      <h1 className='bg-green-500 p-10 rounded-xl text-black mb-5'>tailwind test</h1>
        <Card username='prathmesh' btntext='dont click me'/>
        <Card/>
    </>
  )
}

export default App
