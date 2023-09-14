const clock = document.querySelector("#clock"); //h2#clock

function getClock(){
    const date = new Date();
    const hours = String(date.getHours()).padStart(2,"0");
    const minutes = String(date.getMinutes()).padStart(2,"0");
    const second = String(date.getSeconds()).padStart(2,"0");
    clock.innerText = `${hours}:${minutes}:${second}`;
    clock.classList.add("clockPosition");
    clock.classList.add("writeColor");
}


getClock();
setInterval(getClock, 1000); 
