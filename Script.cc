@import url('https://fonts.googleapis.com/css2?family=Amita:wght@400;700&family=Archivo:ital,wght@0,100..900;1,100..900&family=Bilbo+Swash+Caps&family=Inter:opsz,wght@14..32,500&family=Noto+Serif:ital,wght@0,100..900;1,100..900&family=Pacifico&family=Poppins:ital,wght@0,100;0,200;0,300;0,400;0,500;0,600;0,700;0,800;0,900;1,100;1,200;1,300;1,400;1,500;1,600;1,700;1,800;1,900&family=Tiro+Devanagari+Marathi:ital@0;1&display=swap');

html,
body {
	height: 100%;
}
body {
	overflow: hidden;
	font: 16px sans-serif;
	color: #ddd;
	background-color: linear-gradient(90deg, #1a1a1a1b 50%, #33333300 50%), url('./img/image.png');

	user-select: none;
}

.bbl {
  z-index: 99999;
}
.bbl label {
  position: absolute;
  display: flex;
  width: 213px;
  flex-direction: column;
  margin: -28px;
  justify-content: center;
  gap: 8px;
  text-align: center;
  align-items: center;
  right: 24%;
  top: 36%;
  font-size: 1.2rem;
}

.bbl span {
  font-family: "Pacifico", sans-serif;
  filter: unset !important;
}

#bubbleGen {
  --w: 32px;
  position: absolute;
  left: 449px;
  top: 694.6px;
  width: var(--w);
  height: var(--w);
  /* bottom: 100px; */
  cursor: move;
  margin: calc(var(--w) / -2) 0 0 calc(var(--w) / -2);
  border-radius: 50%;
  background-color: white;
  transition: .2s transform;
}

#bubbleGen.dragging {
  transform: scale(1.4);
}

.bubble {
  position: absolute;
  box-sizing: border-box;
  border-radius: 50%;
  background-color: dodgerblue;
  opacity: .6;
  transition: .1s opacity, .05s transform;
}

.bubble.pop {
  transform: scale(1.4);
  border: 8px solid dodgerblue;
  background-color: transparent;
  opacity: 0;
}

@media screen and (max-width: 658px) {

  body {

    margin-left: 79px;
  
}

.bbl label {
 
  right: -19%;
  top: 11%;

}

}
