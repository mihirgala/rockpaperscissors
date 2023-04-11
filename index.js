const playerchoice = document.getElementById("playerchoice");
const compchoice = document.getElementById("compchoice");
const outcome = document.getElementById("outcome");
const scoreboard = document.getElementById("scoreboard");
var compScore=0;
        var userScore=0;
        var round=0;
        var draws=0;
        //Rock = 1 Paper =2 Scissors =3
        function rockPaperScissors(userChoice){
            outcome.style.color="black";
            let compChoice = Math.floor((Math.random() * 3) + 1);
            if(compChoice==1){
                if(userChoice==1){
                    playerchoice.textContent=`PLAYER : ROCK`;
                    compchoice.textContent=`COMPUTER : ROCK`;
                    outcome.style.color="white";
                    outcome.textContent=`DRAW!`;
                }
                else if(userChoice==2){
                    playerchoice.textContent=`PLAYER : PAPER`;
                    compchoice.textContent=`COMPUTER : ROCK`;
                    outcome.textContent=`YOU WON!`;
                    outcome.style.color="green";
                    userScore++;
                }
                else if(userChoice==3){
                    playerchoice.textContent=`PLAYER : SCISSORS`;
                    compchoice.textContent=`COMPUTER : ROCK`;
                    outcome.textContent=`YOU LOST!`;
                    outcome.style.color="red";
                    compScore++;
                }
            }
            else if(compChoice==2){
                if(userChoice==1){
                    playerchoice.textContent=`PLAYER : ROCK`;
                    compchoice.textContent=`COMPUTER : PAPER`;
                    outcome.style.color="red";
                    outcome.textContent=`YOU LOST!`;
                    compScore++;
                }
                else if(userChoice==2){
                    playerchoice.textContent=`PLAYER : PAPER`;
                    compchoice.textContent=`COMPUTER : PAPER`;
                    outcome.style.color="black";
                    outcome.textContent=`DRAW!`;
                }
                else if(userChoice==3){
                    playerchoice.textContent=`PLAYER : PAPER`;
                    compchoice.textContent=`COMPUTER : PAPER`;
                    outcome.style.color="green";
                    outcome.textContent=`YOU WON!`;
                    userScore++;
                }
            }
            else if(compChoice==3){
                if(userChoice==1){
                    playerchoice.textContent=`PLAYER : ROCK`;
                    compchoice.textContent=`COMPUTER : SCISSORS`;
                    outcome.style.color="green";
                    outcome.textContent=`YOU WON!`;
                    userScore++;
                }
                else if(userChoice==2){
                    playerchoice.textContent=`PLAYER : PAPER`;
                    compchoice.textContent=`COMPUTER : SCISSORS`;
                    outcome.style.color="red";
                    outcome.textContent=`YOU LOST!`;
                    compScore++;
                }
                else if(userChoice==3){
                    playerchoice.textContent=`PLAYER : SCISSORS`;
                    compchoice.textContent=`COMPUTER : SCISSORS`;
                    outcome.style.color="black";
                    outcome.textContent=`DRAW!`;
                }
            }
            round++;
            draws=round;
            draws-=userScore+compScore;
            scoreboard.textContent=`You : ${userScore}\tComputer : ${compScore}\nDraws : ${draws}`;
            console.log(compChoice);
        }
        function reset(){
            round=0;
            userScore=0;
            compScore=0;
            draws=0;
            scoreboard.textContent=`You : ${userScore}\tComputer : ${compScore}\nDraws : ${draws}`;
            outcome.textContent=`RESET!`;
        }
