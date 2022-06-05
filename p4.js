console.log("welcome to Tic tactoe");
let music=new Audio("music.mp3")
let audioturn = new Audio("turn.mp3")
let gameover = new Audio("mi")
let turn = "x"

// function to change the turn
const changeTurn = ()=>{
    return turn ==="x"?"0":"x"

}
// function to check for win
const checkWin=()=>{

}


// game logic
let boxes = document.getElementsByClassName("box");
Array.from(boxes).forEach(element =>{
    let boxtext = element.querySelector('.boxtext');
    element.addEventListener('click', ()=>{
        if(boxtext.innerText === ''){
            boxtext.innerText = turn;
            turn = changeTurn();
            audioTurn.play();
            checkWin();
            if (!isgameover){
                document.getElementsByClassName("info")[0].innerText  = "Turn for " + turn;
            } 
        }
    })
})
