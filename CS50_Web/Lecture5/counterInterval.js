if(!localStorage.getItem('counter')) {
    localStorage.setItem('counter',0);
}

function count(){
    counter = localStorage.getItem('counter');
    counter++;
    document.querySelector('h1').innerHTML = counter;
    localStorage.setItem('counter',counter);
}

    document.addEventListener('DOMContentLoaded', function(){
        document.querySelector('h1').innerHTML = localStorage.getItem('Counter');
        setInterval(count,1000);
    })