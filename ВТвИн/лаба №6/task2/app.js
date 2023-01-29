let but = document.querySelectorAll(".pr");
function pushMe(){
    for (let i = 0; i < but.length;i++) {
        but[i].textContent = i + 1;
    }

}

