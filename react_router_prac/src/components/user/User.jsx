import React from "react";
import { useParams } from "react-router-dom";
export default function User()
{ 
    const {id}=useParams();
   
    return (
        <>
            <h1 className="flex justify-center bg-gray-500 text-4xl">Hello:{id} </h1>
        </>
    )

}