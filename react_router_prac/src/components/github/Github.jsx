import React, { useEffect, useState } from "react";
import { useLoaderData } from "react-router-dom";

function Github()
{
    //   const [data,setData]=useState([])
    //     useEffect(()=>{
    //     fetch('https://api.github.com/users/pibit200')
    //     .then(res=>res.json())
    //     .then(res=>setData(res))
    //  },[])

    const data= useLoaderData();

    return (

         <div className="text-center m-4">

       <h1 className="text-3xl bg-gray-400 text-center">Github Followers:{data.followers}</h1>
       <img src={data.avatar_url}  />

         </div>

    )
}

export default Github

export const getgitinfo = async()=>{
 const response = await fetch('https://api.github.com/users/pibit200')
 return response.json();
}