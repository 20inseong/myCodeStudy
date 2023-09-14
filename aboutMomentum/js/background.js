const images = ["blackOcean.jpg","inTheBlackSky.jpg","paris.jpg","ocean.jpg","sun.jpg"];

const chosenImage = images[Math.floor(Math.random()*images.length)];

const bgImage = document.createElement("img");

bgImage.classList.add('backGround-img');
bgImage.src = `background/${chosenImage}`;

document.body.appendChild(bgImage);