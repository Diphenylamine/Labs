let panes = document.querySelectorAll('.FTW')
    for (let pane of panes) {
     pane.onclick = () => pane.remove();
    }