import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {

  let [counter,setCounter] = useState (5)
  
  //let counter=5
  const addValue=() =>{
    console.log("Clicked" , counter );
    counter = counter+1
   setCounter(counter+1)
  }

  return (
    <>
    <h1>Pushkar Virat</h1>
    <h2> Counter Value : {counter}</h2>
    <button onCLick={addValue}> Add value</button>
    <br></br>
    <button> Remove value</button>
     </>
  )
}

export default App
